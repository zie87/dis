/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_UTILITY_BOOL_CONSTANT_HPP
#define DIS_META_UTILITY_BOOL_CONSTANT_HPP

#include "dis/meta/utility/integral_constant.hpp"

#include <type_traits>

namespace dis::meta {

template <bool V>
using bool_constant = std::bool_constant<V>;

using true_type  = std::true_type;
using false_type = std::false_type;

}  // namespace dis::meta

#endif  // DIS_META_UTILITY_BOOL_CONSTANT_HPP
