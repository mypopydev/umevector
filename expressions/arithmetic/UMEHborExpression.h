#ifndef UME_HBOR_EXPRESSION_H_
#define UME_HBOR_EXPRESSION_H_

namespace UME {
namespace VECTOR {

    template<typename SCALAR_TYPE, int SIMD_STRIDE> class ScalarExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticDIVExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticSUBExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMDIVExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMSUBExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFMULADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFADDMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFMULSUBExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFSUBMULExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBANDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBORExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBXORExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticPOSTINCExpression;

    template <typename SCALAR_TYPE, int SIMD_STRIDE, typename E1>
    class ArithmeticHBORExpression :
        public ArithmeticExpression<SCALAR_TYPE, SIMD_STRIDE, ArithmeticHBORExpression<SCALAR_TYPE, SIMD_STRIDE, E1> >
    {
        typedef typename UME::SIMD::SIMDVec<SCALAR_TYPE, SIMD_STRIDE> SIMD_TYPE;
        typedef typename UME::SIMD::SIMDVec<SCALAR_TYPE, 1> SIMD_1_TYPE;

        E1 & _e1;

        // Value of this expression has to be calculated only once, and can be returned for every
        // call to 'evaluate_SIMD' or 'evaluate_scalar'.
        bool _evaluated;
        SCALAR_TYPE _value; // This value is correct only if 'evaluated == true'

    public:
        UME_FORCE_INLINE ArithmeticHBORExpression(E1 & e1) :
            _e1(e1), 
            _evaluated(false) {}

        UME_FORCE_INLINE ArithmeticHBORExpression(E1 && e1) :
            _e1(std::move(e1)),
            _evaluated(false) {}

        // First reduce to scalar and then return
        UME_FORCE_INLINE SIMD_TYPE evaluate_SIMD(int index)
        {
            if (!_evaluated) {
                SIMD_TYPE A(SCALAR_TYPE(0));
                int loop_count = _e1.LOOP_PEEL_OFFSET();
                for (int i = 0; i < loop_count; i += SIMD_STRIDE) {
                    SIMD_TYPE t0 = _e1.evaluate_SIMD(i);
                    A.bora(t0);
                }
                _value = A.hbor();
                for (int i = _e1.LOOP_PEEL_OFFSET(); i < _e1.LENGTH(); i++) {
                    SIMD_1_TYPE t1 = _e1.evaluate_scalar(i);
                    _value |= t1[0];
                }
                _evaluated = true;
            }
            return SIMD_TYPE(_value);
        }

        UME_FORCE_INLINE SIMD_1_TYPE evaluate_scalar(int index)
        {
            if (!_evaluated)
            {
                SIMD_TYPE A(SCALAR_TYPE(0));
                int loop_count = _e1.LOOP_PEEL_OFFSET();
                for (int i = 0; i < loop_count; i += SIMD_STRIDE) {
                    SIMD_TYPE t0 = _e1.evaluate_SIMD(i);
                    A.bora(t0);
                }
                _value = A.hbor();
                for (int i = _e1.LOOP_PEEL_OFFSET(); i < _e1.LENGTH(); i++) {
                    SIMD_1_TYPE t1 = _e1.evaluate_scalar(i);
                    _value |= t1[0];
                }
                _evaluated = true;
            }
            return SIMD_1_TYPE(_value);
        }

        // Reduction operations require to be cast-able into scalar types.
        UME_FORCE_INLINE operator SCALAR_TYPE() {
            SIMD_TYPE A(SCALAR_TYPE(0));
            int loop_count = _e1.LOOP_PEEL_OFFSET();
            for (int i = 0; i < loop_count; i += SIMD_STRIDE) {
                SIMD_TYPE t0 = _e1.evaluate_SIMD(i);
                A.bora(t0);
            }
            float B = A.hbor();
            for (int i = _e1.LOOP_PEEL_OFFSET(); i < _e1.LENGTH(); i++) {
                SIMD_1_TYPE t1 = _e1.evaluate_scalar(i);
                B |= t1[0];
            }
            return B;
        }
    };

}
}

#endif
