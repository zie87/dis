/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_PROTO_EMPTY_HPP
#define DIS_META_PROTO_EMPTY_HPP

#include <type_traits>

namespace dis::meta {

template <typename>
struct empty;

template <typename T>
inline constexpr bool empty_v = empty<T>::value;

}  // namespace dis::meta

#endif  // DIS_META_PROTO_EMPTY_HPP
