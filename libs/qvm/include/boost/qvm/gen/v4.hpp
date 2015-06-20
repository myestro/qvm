//Copyright (c) 2008-2013 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_QVM_AD4F14F2444066D06BC430B7323BA122
#define BOOST_QVM_AD4F14F2444066D06BC430B7323BA122

//This file was generated by a program. Do not edit manually.

#include <boost/qvm/deduce_s.hpp>
#include <boost/qvm/deduce_v.hpp>
#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/error.hpp>
#include <boost/qvm/inline.hpp>
#include <boost/qvm/math.hpp>
#include <boost/qvm/static_assert.hpp>
#include <boost/qvm/v_traits.hpp>
#include <boost/throw_exception.hpp>

namespace
boost
    {
    namespace
    qvm
        {
        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            deduce_v2<A,B,4> >::type
        operator+( A const & a, B const & b )
            {
            typedef typename deduce_v2<A,B,4>::type R;
            BOOST_QVM_STATIC_ASSERT(v_traits<R>::dim==4);
            R r;
            v_traits<R>::template w<0>(r)=v_traits<A>::template r<0>(a)+v_traits<B>::template r<0>(b);
            v_traits<R>::template w<1>(r)=v_traits<A>::template r<1>(a)+v_traits<B>::template r<1>(b);
            v_traits<R>::template w<2>(r)=v_traits<A>::template r<2>(a)+v_traits<B>::template r<2>(b);
            v_traits<R>::template w<3>(r)=v_traits<A>::template r<3>(a)+v_traits<B>::template r<3>(b);
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator+;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct plus_vv_defined;

            template <>
            struct
            plus_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            deduce_v2<A,B,4> >::type
        operator-( A const & a, B const & b )
            {
            typedef typename deduce_v2<A,B,4>::type R;
            BOOST_QVM_STATIC_ASSERT(v_traits<R>::dim==4);
            R r;
            v_traits<R>::template w<0>(r)=v_traits<A>::template r<0>(a)-v_traits<B>::template r<0>(b);
            v_traits<R>::template w<1>(r)=v_traits<A>::template r<1>(a)-v_traits<B>::template r<1>(b);
            v_traits<R>::template w<2>(r)=v_traits<A>::template r<2>(a)-v_traits<B>::template r<2>(b);
            v_traits<R>::template w<3>(r)=v_traits<A>::template r<3>(a)-v_traits<B>::template r<3>(b);
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator-;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct minus_vv_defined;

            template <>
            struct
            minus_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            A &>::type
        operator+=( A & a, B const & b )
            {
            v_traits<A>::template w<0>(a)+=v_traits<B>::template r<0>(b);
            v_traits<A>::template w<1>(a)+=v_traits<B>::template r<1>(b);
            v_traits<A>::template w<2>(a)+=v_traits<B>::template r<2>(b);
            v_traits<A>::template w<3>(a)+=v_traits<B>::template r<3>(b);
            return a;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator+=;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct plus_eq_vv_defined;

            template <>
            struct
            plus_eq_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            A &>::type
        operator-=( A & a, B const & b )
            {
            v_traits<A>::template w<0>(a)-=v_traits<B>::template r<0>(b);
            v_traits<A>::template w<1>(a)-=v_traits<B>::template r<1>(b);
            v_traits<A>::template w<2>(a)-=v_traits<B>::template r<2>(b);
            v_traits<A>::template w<3>(a)-=v_traits<B>::template r<3>(b);
            return a;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator-=;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct minus_eq_vv_defined;

            template <>
            struct
            minus_eq_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4 && is_s<B>::value,
            deduce_v<A> >::type
        operator*( A const & a, B b )
            {
            typedef typename deduce_v<A>::type R;
            R r;
            v_traits<R>::template w<0>(r)=v_traits<A>::template r<0>(a)*b;
            v_traits<R>::template w<1>(r)=v_traits<A>::template r<1>(a)*b;
            v_traits<R>::template w<2>(r)=v_traits<A>::template r<2>(a)*b;
            v_traits<R>::template w<3>(r)=v_traits<A>::template r<3>(a)*b;
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator*;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct mul_vs_defined;

            template <>
            struct
            mul_vs_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class  B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && is_s<B>::value,
            A &>::type
        operator*=( A & a, B b )
            {
            v_traits<A>::template w<0>(a)*=b;
            v_traits<A>::template w<1>(a)*=b;
            v_traits<A>::template w<2>(a)*=b;
            v_traits<A>::template w<3>(a)*=b;
            return a;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator*=;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct mul_eq_vs_defined;

            template <>
            struct
            mul_eq_vs_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4 && is_s<B>::value,
            deduce_v<A> >::type
        operator/( A const & a, B b )
            {
            typedef typename deduce_v<A>::type R;
            R r;
            v_traits<R>::template w<0>(r)=v_traits<A>::template r<0>(a)/b;
            v_traits<R>::template w<1>(r)=v_traits<A>::template r<1>(a)/b;
            v_traits<R>::template w<2>(r)=v_traits<A>::template r<2>(a)/b;
            v_traits<R>::template w<3>(r)=v_traits<A>::template r<3>(a)/b;
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator/;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct div_vs_defined;

            template <>
            struct
            div_vs_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class  B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && is_s<B>::value,
            A &>::type
        operator/=( A & a, B b )
            {
            v_traits<A>::template w<0>(a)/=b;
            v_traits<A>::template w<1>(a)/=b;
            v_traits<A>::template w<2>(a)/=b;
            v_traits<A>::template w<3>(a)/=b;
            return a;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator/=;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct div_eq_vs_defined;

            template <>
            struct
            div_eq_vs_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            A &>::type
        assign( A & a, B const & b )
            {
            v_traits<A>::template w<0>(a)=v_traits<B>::template r<0>(b);
            v_traits<A>::template w<1>(a)=v_traits<B>::template r<1>(b);
            v_traits<A>::template w<2>(a)=v_traits<B>::template r<2>(b);
            v_traits<A>::template w<3>(a)=v_traits<B>::template r<3>(b);
            return a;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::assign;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct assign_vv_defined;

            template <>
            struct
            assign_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class R,class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            is_v<A>::value &&
            v_traits<R>::dim==4 && v_traits<A>::dim==4,
            R>::type
        make( A const & a )
            {
            R r;
            v_traits<R>::template w<0>(r)=v_traits<A>::template r<0>(a);
            v_traits<R>::template w<1>(r)=v_traits<A>::template r<1>(a);
            v_traits<R>::template w<2>(r)=v_traits<A>::template r<2>(a);
            v_traits<R>::template w<3>(r)=v_traits<A>::template r<3>(a);
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::make;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct make_v_defined;

            template <>
            struct
            make_v_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
        bool>::type
        operator==( A const & a, B const & b )
            {
            return
                v_traits<A>::template r<0>(a)==v_traits<B>::template r<0>(b) &&
                v_traits<A>::template r<1>(a)==v_traits<B>::template r<1>(b) &&
                v_traits<A>::template r<2>(a)==v_traits<B>::template r<2>(b) &&
                v_traits<A>::template r<3>(a)==v_traits<B>::template r<3>(b);
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator==;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct eq_vv_defined;

            template <>
            struct
            eq_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
        bool>::type
        operator!=( A const & a, B const & b )
            {
            return
                !(v_traits<A>::template r<0>(a)==v_traits<B>::template r<0>(b)) ||
                !(v_traits<A>::template r<1>(a)==v_traits<B>::template r<1>(b)) ||
                !(v_traits<A>::template r<2>(a)==v_traits<B>::template r<2>(b)) ||
                !(v_traits<A>::template r<3>(a)==v_traits<B>::template r<3>(b));
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator!=;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct neq_vv_defined;

            template <>
            struct
            neq_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4,
            deduce_v<A> >::type
        operator-( A const & a )
            {
            typedef typename deduce_v<A>::type R;
            R r;
            v_traits<R>::template w<0>(r)=-v_traits<A>::template r<0>(a);
            v_traits<R>::template w<1>(r)=-v_traits<A>::template r<1>(a);
            v_traits<R>::template w<2>(r)=-v_traits<A>::template r<2>(a);
            v_traits<R>::template w<3>(r)=-v_traits<A>::template r<3>(a);
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::operator-;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct minus_v_defined;

            template <>
            struct
            minus_v_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            is_v<A>::value && v_traits<A>::dim==4,
            typename v_traits<A>::scalar_type>::type
        mag( A const & a )
            {
            typedef typename v_traits<A>::scalar_type T;
            T const a0=v_traits<A>::template r<0>(a);
            T const a1=v_traits<A>::template r<1>(a);
            T const a2=v_traits<A>::template r<2>(a);
            T const a3=v_traits<A>::template r<3>(a);
            T const mag2=a0*a0+a1*a1+a2*a2+a3*a3;
            T const mag=sqrt<T>(mag2);
            return mag;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::mag;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct mag_v_defined;

            template <>
            struct
            mag_v_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            is_v<A>::value && v_traits<A>::dim==4,
            typename v_traits<A>::scalar_type>::type
        mag2( A const & a )
            {
            typedef typename v_traits<A>::scalar_type T;
            T const a0=v_traits<A>::template r<0>(a);
            T const a1=v_traits<A>::template r<1>(a);
            T const a2=v_traits<A>::template r<2>(a);
            T const a3=v_traits<A>::template r<3>(a);
            T const mag2=a0*a0+a1*a1+a2*a2+a3*a3;
            return mag2;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::mag2;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct mag2_v_defined;

            template <>
            struct
            mag2_v_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4,
            deduce_v<A> >::type
        normalized( A const & a )
            {
            typedef typename v_traits<A>::scalar_type T;
            T const a0=v_traits<A>::template r<0>(a);
            T const a1=v_traits<A>::template r<1>(a);
            T const a2=v_traits<A>::template r<2>(a);
            T const a3=v_traits<A>::template r<3>(a);
            T const mag2=a0*a0+a1*a1+a2*a2+a3*a3;
            if( mag2==s_traits<typename v_traits<A>::scalar_type>::value(0) )
                BOOST_THROW_EXCEPTION(zero_magnitude_error());
            T const rm=s_traits<T>::value(1)/sqrt<T>(mag2);
            typedef typename deduce_v<A>::type R;
            R r;
            v_traits<R>::template w<0>(r)=a0*rm;
            v_traits<R>::template w<1>(r)=a1*rm;
            v_traits<R>::template w<2>(r)=a2*rm;
            v_traits<R>::template w<3>(r)=a3*rm;
            return r;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::normalized;
            }

        template <class A>
        BOOST_QVM_INLINE_OPERATIONS
        typename enable_if_c<
            v_traits<A>::dim==4,
            void>::type
        normalize( A & a )
            {
            typedef typename v_traits<A>::scalar_type T;
            T const a0=v_traits<A>::template r<0>(a);
            T const a1=v_traits<A>::template r<1>(a);
            T const a2=v_traits<A>::template r<2>(a);
            T const a3=v_traits<A>::template r<3>(a);
            T const mag2=a0*a0+a1*a1+a2*a2+a3*a3;
            if( mag2==s_traits<typename v_traits<A>::scalar_type>::value(0) )
                BOOST_THROW_EXCEPTION(zero_magnitude_error());
            T const rm=s_traits<T>::value(1)/sqrt<T>(mag2);
            v_traits<A>::template w<0>(a)*=rm;
            v_traits<A>::template w<1>(a)*=rm;
            v_traits<A>::template w<2>(a)*=rm;
            v_traits<A>::template w<3>(a)*=rm;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::normalize;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct normalize_v_defined;

            template <>
            struct
            normalize_v_defined<4>
                {
                static bool const value=true;
                };
            }

        template <class A,class B>
        BOOST_QVM_INLINE_OPERATIONS
        typename lazy_enable_if_c<
            v_traits<A>::dim==4 && v_traits<B>::dim==4,
            deduce_s<typename v_traits<A>::scalar_type,typename v_traits<B>::scalar_type> >::type
        dot( A const & a, B const & b )
            {
            typedef typename v_traits<A>::scalar_type Ta;
            typedef typename v_traits<B>::scalar_type Tb;
            typedef typename deduce_s<Ta,Tb>::type Tr;
            Ta const a0=v_traits<A>::template r<0>(a);
            Ta const a1=v_traits<A>::template r<1>(a);
            Ta const a2=v_traits<A>::template r<2>(a);
            Ta const a3=v_traits<A>::template r<3>(a);
            Tb const b0=v_traits<B>::template r<0>(b);
            Tb const b1=v_traits<B>::template r<1>(b);
            Tb const b2=v_traits<B>::template r<2>(b);
            Tb const b3=v_traits<B>::template r<3>(b);
            Tr const dot=a0*b0+a1*b1+a2*b2+a3*b3;
            return dot;
            }

        namespace
        sfinae
            {
            using ::boost::qvm::dot;
            }

        namespace
        qvm_detail
            {
            template <int D>
            struct dot_vv_defined;

            template <>
            struct
            dot_vv_defined<4>
                {
                static bool const value=true;
                };
            }

        }
    }

#endif
