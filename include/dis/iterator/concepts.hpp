/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#ifndef DIS_ITERATOR_CONCEPTS_HPP
#define DIS_ITERATOR_CONCEPTS_HPP

#include <iterator>

namespace dis::concepts {

template <typename I, typename T>
concept output_iterator = std::output_iterator<I, T>;

template <typename T>
concept input_iterator = std::input_iterator<T>;

template <typename T>
concept input_or_output_iterator = std::input_or_output_iterator<T>;

template <typename T>
concept forward_iterator = std::forward_iterator<T>;

template <typename T>
concept bidirectional_iterator = std::bidirectional_iterator<T>;

template <typename T>
concept random_access_iterator = std::random_access_iterator<T>;

template <typename T>
concept contiguous_iterator = std::contiguous_iterator<T>;
}

#endif  // DIS_ITERATOR_CONCEPTS_HPP
