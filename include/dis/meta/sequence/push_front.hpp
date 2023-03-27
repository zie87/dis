/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_SEQUENCE_PUSH_FRONT_HPP
#define DIS_META_SEQUENCE_PUSH_FRONT_HPP

#include "dis/meta/proto/push_front.hpp"
#include "dis/meta/sequence/base.hpp"

#include <type_traits>

namespace dis::meta {

template <typename... Ts, typename ELEMENT_T>
struct push_front<sequence<Ts...>, ELEMENT_T> {
    using type = sequence<ELEMENT_T, Ts...>;
};

}  // namespace dis::meta

#endif  // DIS_META_SEQUENCE_PUSH_FRONT_HPP
