/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_META_SEQUENCE_PUSH_BACK_HPP
#define DIS_META_SEQUENCE_PUSH_BACK_HPP

#include "dis/meta/proto/push_back.hpp"
#include "dis/meta/sequence/base.hpp"

#include <type_traits>

namespace dis::meta {

template <typename... Ts, typename ELEMENT_T>
struct push_back<sequence<Ts...>, ELEMENT_T> {
    using type = sequence<Ts..., ELEMENT_T>;
};

}  // namespace dis::meta

#endif  // DIS_META_SEQUENCE_PUSH_BACK_HPP
