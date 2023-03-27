/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_UTILITY_INTEGRAL_CONSTANT_HPP
#define DIS_META_UTILITY_INTEGRAL_CONSTANT_HPP

#include <concepts>
#include <type_traits>

namespace dis::meta {

template <std::integral T, T V>
using integral_constant = std::integral_constant<T, V>;

}  // namespace dis::meta

#endif  // DIS_META_UTILITY_INTEGRAL_CONSTANT_HPP
