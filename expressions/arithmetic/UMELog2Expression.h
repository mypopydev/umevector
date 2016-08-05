// The MIT License (MIT)
//
// Copyright (c) 2016 CERN
//
// Author: Przemyslaw Karpinski
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//
//  This piece of code was developed as part of ICE-DIP project at CERN.
//  "ICE-DIP is a European Industrial Doctorate project funded by the European Community's
//  7th Framework programme Marie Curie Actions under grant PITN-GA-2012-316596".
//
// ***This file has been automatically generated***
//
#ifndef UME_LOG2_EXPRESSION_H_
#define UME_LOG2_EXPRESSION_H_

#include "../UMEVectorConversionTraits.h"

namespace UME {
namespace VECTOR {

    template<typename SCALAR_TYPE, int SIMD_STRIDE> class ScalarExpression;

    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalLANDExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalLORExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalLXORExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalLANDNOTExpression;

    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPGTExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPLTExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPGEExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPLEExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPEQExpression;
    template<int SIMD_STRIDE, typename E1, typename E2> class LogicalCMPNEExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticSQRTExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticROUNDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticFLOORExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticCEILExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticEXPExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticLOGExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticLOG10Expression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticLOG2Expression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticSINExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticCOSExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticTANExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticATANExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticDIVExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2> class ArithmeticSUBExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticBLENDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMDIVExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E_MASK, typename E2> class ArithmeticMSUBExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFMULADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFMULSUBExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFADDMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1, typename E2, typename E3> class ArithmeticFSUBMULExpression;

    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHADDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHMULExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBANDExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBORExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticHBXORExpression;
    template<typename SCALAR_TYPE, int SIMD_STRIDE, typename E1> class ArithmeticPOSTINCExpression;

    template <typename SCALAR_TYPE, int SIMD_STRIDE, typename E1>
    class ArithmeticLOG2Expression :
    public ArithmeticExpression<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> >
    {
        typedef typename UME::SIMD::SIMDVec<SCALAR_TYPE, SIMD_STRIDE> SIMD_TYPE;
        typedef typename UME::SIMD::SIMDVec<SCALAR_TYPE, 1> SIMD_1_TYPE;

        E1 & _e1;

    public:

        UME_FORCE_INLINE ArithmeticLOG2Expression(E1 & e1) :
            _e1(e1) {}

        UME_FORCE_INLINE ArithmeticLOG2Expression(E1 && e1) :
            _e1(std::move(e1)) {}

        UME_FORCE_INLINE SIMD_TYPE evaluate_SIMD(int index)
        {
            auto t0 = _e1.evaluate_SIMD(index);
            return t0.log2();
        }

        UME_FORCE_INLINE SIMD_1_TYPE evaluate_scalar(int index)
        {
            auto t0 = _e1.evaluate_scalar(index);
            return t0.log2();
        }

        UME_FORCE_INLINE ArithmeticSQRTExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > sqrt()
        {
            return ArithmeticSQRTExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticROUNDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > round()
        {
            return ArithmeticROUNDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticFLOORExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > floor()
        {
            return ArithmeticFLOORExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticCEILExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > ceil()
        {
            return ArithmeticCEILExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticEXPExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > exp()
        {
            return ArithmeticEXPExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticLOGExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > log()
        {
            return ArithmeticLOGExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticLOG10Expression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > log10()
        {
            return ArithmeticLOG10Expression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticLOG2Expression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > log2()
        {
            return ArithmeticLOG2Expression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticSINExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > sin()
        {
            return ArithmeticSINExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticCOSExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > cos()
        {
            return ArithmeticCOSExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticTANExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > tan()
        {
            return ArithmeticTANExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticATANExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > atan()
        {
            return ArithmeticATANExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2> add(T2 & srcB)
        {
            return ArithmeticADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2 > add(T2 && srcB)
        {
            return ArithmeticADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2> mul(T2 & srcB)
        {
            return ArithmeticMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2 > mul(T2 && srcB)
        {
            return ArithmeticMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2> div(T2 & srcB)
        {
            return ArithmeticDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2 > div(T2 && srcB)
        {
            return ArithmeticDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2> sub(T2 & srcB)
        {
            return ArithmeticSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE ArithmeticSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2 > sub(T2 && srcB)
        {
            return ArithmeticSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2> (*this, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticBLENDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> blend(T_MASK & mask, T2 & srcB)
        {
            return ArithmeticBLENDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticBLENDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> blend(T_MASK && mask, T2 & srcB)
        {
            return ArithmeticBLENDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticBLENDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> blend(T_MASK & mask, T2 && srcB)
        {
            return ArithmeticBLENDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticBLENDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> blend(T_MASK && mask, T2 && srcB)
        {
            return ArithmeticBLENDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> add(T_MASK & mask, T2 & srcB)
        {
            return ArithmeticMADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> add(T_MASK && mask, T2 & srcB)
        {
            return ArithmeticMADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> add(T_MASK & mask, T2 && srcB)
        {
            return ArithmeticMADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> add(T_MASK && mask, T2 && srcB)
        {
            return ArithmeticMADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> mul(T_MASK & mask, T2 & srcB)
        {
            return ArithmeticMMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> mul(T_MASK && mask, T2 & srcB)
        {
            return ArithmeticMMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> mul(T_MASK & mask, T2 && srcB)
        {
            return ArithmeticMMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> mul(T_MASK && mask, T2 && srcB)
        {
            return ArithmeticMMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> div(T_MASK & mask, T2 & srcB)
        {
            return ArithmeticMDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> div(T_MASK && mask, T2 & srcB)
        {
            return ArithmeticMDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> div(T_MASK & mask, T2 && srcB)
        {
            return ArithmeticMDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMDIVExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> div(T_MASK && mask, T2 && srcB)
        {
            return ArithmeticMDIVExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> sub(T_MASK & mask, T2 & srcB)
        {
            return ArithmeticMSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> sub(T_MASK && mask, T2 & srcB)
        {
            return ArithmeticMSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> sub(T_MASK & mask, T2 && srcB)
        {
            return ArithmeticMSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T_MASK, typename T2>
        UME_FORCE_INLINE ArithmeticMSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T_MASK,
            T2> sub(T_MASK && mask, T2 && srcB)
        {
            return ArithmeticMSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T_MASK,
                T2> (*this, mask, srcB);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmuladd(T2 & srcB, T3 & srcC)
        {
            return ArithmeticFMULADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmuladd(T2 && srcB, T3 & srcC)
        {
            return ArithmeticFMULADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmuladd(T2 & srcB, T3 && srcC)
        {
            return ArithmeticFMULADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmuladd(T2 && srcB, T3 && srcC)
        {
            return ArithmeticFMULADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmulsub(T2 & srcB, T3 & srcC)
        {
            return ArithmeticFMULSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmulsub(T2 && srcB, T3 & srcC)
        {
            return ArithmeticFMULSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmulsub(T2 & srcB, T3 && srcC)
        {
            return ArithmeticFMULSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFMULSUBExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fmulsub(T2 && srcB, T3 && srcC)
        {
            return ArithmeticFMULSUBExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFADDMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> faddmul(T2 & srcB, T3 & srcC)
        {
            return ArithmeticFADDMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFADDMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> faddmul(T2 && srcB, T3 & srcC)
        {
            return ArithmeticFADDMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFADDMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> faddmul(T2 & srcB, T3 && srcC)
        {
            return ArithmeticFADDMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFADDMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> faddmul(T2 && srcB, T3 && srcC)
        {
            return ArithmeticFADDMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFSUBMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fsubmul(T2 & srcB, T3 & srcC)
        {
            return ArithmeticFSUBMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFSUBMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fsubmul(T2 && srcB, T3 & srcC)
        {
            return ArithmeticFSUBMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFSUBMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fsubmul(T2 & srcB, T3 && srcC)
        {
            return ArithmeticFSUBMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        template<typename T2, typename T3>
        UME_FORCE_INLINE ArithmeticFSUBMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>, // this expression
            T2,
            T3> fsubmul(T2 && srcB, T3 && srcC)
        {
            return ArithmeticFSUBMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2,
                T3> (*this, srcB, srcC);
        }

        UME_FORCE_INLINE ArithmeticHADDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > hadd()
        {
            return ArithmeticHADDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticHMULExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > hmul()
        {
            return ArithmeticHMULExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticHBANDExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > hband()
        {
            return ArithmeticHBANDExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticHBORExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > hbor()
        {
            return ArithmeticHBORExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        UME_FORCE_INLINE ArithmeticHBXORExpression<
            SCALAR_TYPE,
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1> // this expression
            > hbxor()
        {
            return ArithmeticHBXORExpression<
                SCALAR_TYPE,
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>
                > (*this);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPGTExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpgt(T2 & srcB)
        {
            return LogicalCMPGTExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPGTExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpgt(T2 && srcB)
        {
            return LogicalCMPGTExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPLTExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmplt(T2 & srcB)
        {
            return LogicalCMPLTExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPLTExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmplt(T2 && srcB)
        {
            return LogicalCMPLTExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPGEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpge(T2 & srcB)
        {
            return LogicalCMPGEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPGEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpge(T2 && srcB)
        {
            return LogicalCMPGEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPLEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmple(T2 & srcB)
        {
            return LogicalCMPLEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPLEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmple(T2 && srcB)
        {
            return LogicalCMPLEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPEQExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpeq(T2 & srcB)
        {
            return LogicalCMPEQExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPEQExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpeq(T2 && srcB)
        {
            return LogicalCMPEQExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPNEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpne(T2 & srcB)
        {
            return LogicalCMPNEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        template<typename T2>
        UME_FORCE_INLINE LogicalCMPNEExpression<
            SIMD_STRIDE,
            ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
            T2> cmpne(T2 && srcB)
        {
            return LogicalCMPNEExpression<
                SIMD_STRIDE,
                ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>,
                T2>((*this), srcB);
        }

        typedef typename ITOFTrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE ITOF_EXPRESSION_TYPE;
        typedef typename FTOITrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE FTOI_EXPRESSION_TYPE;
        typedef typename UTOFTrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE UTOF_EXPRESSION_TYPE;
        typedef typename FTOUTrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE FTOU_EXPRESSION_TYPE;
        typedef typename UTOITrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE UTOI_EXPRESSION_TYPE;
        typedef typename ITOUTrait<SCALAR_TYPE, SIMD_STRIDE, ArithmeticLOG2Expression<SCALAR_TYPE, SIMD_STRIDE, E1>>::CAST_TYPE ITOU_EXPRESSION_TYPE;

        UME_FORCE_INLINE ITOF_EXPRESSION_TYPE itof() {
            return ITOF_EXPRESSION_TYPE(*this);
        }
        UME_FORCE_INLINE FTOI_EXPRESSION_TYPE ftoi() {
            return FTOI_EXPRESSION_TYPE(*this);
        }
        UME_FORCE_INLINE UTOF_EXPRESSION_TYPE utof() {
            return UTOF_EXPRESSION_TYPE(*this);
        }
        UME_FORCE_INLINE FTOU_EXPRESSION_TYPE ftou() {
            return FTOU_EXPRESSION_TYPE(*this);
        }
        UME_FORCE_INLINE UTOI_EXPRESSION_TYPE utoi() {
            return UTOI_EXPRESSION_TYPE(*this);
        }
        UME_FORCE_INLINE ITOU_EXPRESSION_TYPE itou() {
            return ITOU_EXPRESSION_TYPE(*this);
        }
    };

}
}

#endif
