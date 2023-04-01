/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_TYPE_TRAITS_IS_BASE_OF_HPP
#define DIS_META_TYPE_TRAITS_IS_BASE_OF_HPP

#include <type_traits>

namespace dis::meta {

template <typename T, typename U>
using is_base_of = std::is_base_of<T, U>;

template <typename T, typename U>
inline constexpr bool is_base_of_v = is_base_of<T, U>::value;

}  // namespace dis::meta

#endif  // DIS_META_TYPE_TRAITS_IS_BASE_OF_HPP
