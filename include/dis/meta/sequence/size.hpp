/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_SEQUENCE_SIZE_HPP
#define DIS_META_SEQUENCE_SIZE_HPP

#include "dis/meta/proto/size.hpp"
#include "dis/meta/sequence/base.hpp"
#include "dis/meta/utility/bool_constant.hpp"

#include <cstddef>

namespace dis::meta {

template <typename... Ts>
struct size<sequence<Ts...>> : ::dis::meta::integral_constant<std::size_t, sizeof...(Ts)> {};

}  // namespace dis::meta

#endif  // DIS_META_SEQUENCE_SIZE_HPP
