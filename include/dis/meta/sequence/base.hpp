/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_SEQUENCE_BASE_HPP
#define DIS_META_SEQUENCE_BASE_HPP

#include "dis/meta/utility/bool_constant.hpp"

namespace dis::meta {

template <typename... Ts>
struct sequence {};

template <typename>
struct is_sequence : ::dis::meta::false_type {};

template <typename... Ts>
struct is_sequence<sequence<Ts...> > : ::dis::meta::true_type {};

template <typename T>
inline constexpr bool is_sequence_v = is_sequence<T>::value;

}  // namespace dis::meta

#endif  // DIS_META_SEQUENCE_BASE_HPP
