/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_PROTO_PUSH_BACK_HPP
#define DIS_META_PROTO_PUSH_BACK_HPP

namespace dis::meta {

template <typename, typename>
struct push_back;

template <typename LIST_T, typename ELEMENT_T>
using push_back_t = typename push_back<LIST_T, ELEMENT_T>::type;

}  // namespace dis::meta

#endif  // DIS_META_PROTO_PUSH_BACK_HPP
