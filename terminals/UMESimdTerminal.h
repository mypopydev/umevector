// The MIT License (MIT)
//
// Copyright (c) 2016-2017 CERN
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
#ifndef UME_SIMD_TERMINAL_H_
#define UME_SIMD_TERMINAL_H_

namespace UME {
namespace VECTOR {

    // SIMD terminal is a binding between UME::SIMD short vector types and 
    // the UME::VECTOR expressions.
    template<typename SCALAR_TYPE, int SIMD_STRIDE = UME_DEFAULT_SIMD_STRIDE>
    class SIMDTerminal : public ArithmeticExpression < SCALAR_TYPE, SIMD_STRIDE, SIMDTerminal<SCALAR_TYPE, SIMD_STRIDE> >
    {
        typedef typename UME::SIMD::SIMDVec<SCALAR_TYPE, SIMD_STRIDE> SIMD_TYPE;
        const UME::SIMD::SIMDVec<SCALAR_TYPE, SIMD_STRIDE> _e1;
        //SCALAR_TYPE * _e1;

    public:
        UME_SIMD_FUNC_ATTRIB SIMDTerminal(SIMD_TYPE & value) : _e1(value) {}
        UME_SIMD_FUNC_ATTRIB SIMDTerminal(SIMD_TYPE && value) : _e1(value) {}

        UME_SIMD_FUNC_ATTRIB SIMDTerminal(SIMDTerminal && other) : _e1(other._e1) { } //: _e1(value._e1) {}
        UME_SIMD_FUNC_ATTRIB SIMDTerminal(const SIMDTerminal & other) : _e1(other._e1) { }

        UME_SIMD_FUNC_ATTRIB SIMD_TYPE evaluate_SIMD(int index)
        {
            return _e1;
        }

        UME_SIMD_FUNC_ATTRIB UME::SIMD::SIMDVec<SCALAR_TYPE, 1> evaluate_scalar(int index)
        {
            alignas(SIMD_TYPE::ALIGNMENT()) SCALAR_TYPE raw[SIMD_STRIDE];
            _e1.storea(raw);
            return raw[index % SIMD_STRIDE];
        }

        SIMDTerminal& operator=(SIMDTerminal&& other) {
            _e1 = other._e1;
            return *this;
        }

    };

    template<int SIMD_STRIDE>
    class SIMDTerminal<bool, SIMD_STRIDE> : public LogicalExpression <SIMD_STRIDE, SIMDTerminal<bool, SIMD_STRIDE> >
    {
        typedef typename UME::SIMD::SIMDVecMask<SIMD_STRIDE> MASK_TYPE;
        const bool _e1;
        //SCALAR_TYPE * _e1;

    public:
        UME_SIMD_FUNC_ATTRIB SIMDTerminal<bool, SIMD_STRIDE>(bool & value) : _e1(value) {}
        UME_SIMD_FUNC_ATTRIB SIMDTerminal<bool, SIMD_STRIDE>(bool && value) : _e1(value) {}

        UME_SIMD_FUNC_ATTRIB SIMDTerminal<bool, SIMD_STRIDE>(SIMDTerminal<bool, SIMD_STRIDE> && other) : _e1(other._e1) { } //: _e1(value._e1) {}
        UME_SIMD_FUNC_ATTRIB SIMDTerminal<bool, SIMD_STRIDE>(const SIMDTerminal<bool, SIMD_STRIDE> & other) : _e1(other._e1) { }

        UME_SIMD_FUNC_ATTRIB MASK_TYPE evaluate_SIMD(int index)
        {
            return _e1;
        }

        UME_SIMD_FUNC_ATTRIB UME::SIMD::SIMDVecMask<1> evaluate_scalar(int index)
        {
            bool raw[SIMD_STRIDE];
            _e1.store(raw);
            return UME::SIMD::SIMDVecMask<1>(raw[index % SIMD_STRIDE]);
        }

        SIMDTerminal<bool, SIMD_STRIDE>& operator=(SIMDTerminal<bool, SIMD_STRIDE>&& other) {
            _e1 = other._e1;
            return *this;
        }
    };

}
}
#endif
