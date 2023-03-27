/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_SEQUENCE_EMPTY_HPP
#define DIS_META_SEQUENCE_EMPTY_HPP

#include "dis/meta/proto/empty.hpp"
#include "dis/meta/sequence/base.hpp"
#include "dis/meta/utility/bool_constant.hpp"

namespace dis::meta {

template <typename... Ts>
struct empty<sequence<Ts...>> : std::false_type {};

template <>
struct empty<sequence<>> : std::true_type {};

}  // namespace dis::meta

#endif  // DIS_META_SEQUENCE_EMPTY_HPP
