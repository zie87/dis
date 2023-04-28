/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#include "dis/meta/sequence.hpp"
#include "dis/meta/type_traits/is_same.hpp"

#include <utest.h>

UTEST(meta_sequence, push_back) {
    {
        using seq_type  = dis::meta::sequence<>;
        using test_type = dis::meta::push_back_t<seq_type, char>;

        ASSERT_TRUE((dis::meta::is_sequence_v<test_type>));
        ASSERT_FALSE((dis::meta::empty_v<test_type>));
        ASSERT_EQ((dis::meta::size_v<test_type>), 1U);
        ASSERT_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<char>>));
    }
    {
        using seq_type  = dis::meta::sequence<char>;
        using test_type = dis::meta::push_back_t<seq_type, int>;

        ASSERT_TRUE((dis::meta::is_sequence_v<test_type>));
        ASSERT_FALSE((dis::meta::empty_v<test_type>));
        ASSERT_EQ((dis::meta::size_v<test_type>), 2U);
        ASSERT_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<char, int>>));
    }
    {
        using seq_type  = dis::meta::sequence<int, short, double>;
        using tmp_type  = dis::meta::push_back_t<seq_type, char>;
        using test_type = dis::meta::push_back_t<tmp_type, int>;

        ASSERT_TRUE((dis::meta::is_sequence_v<test_type>));
        ASSERT_FALSE((dis::meta::empty_v<test_type>));
        ASSERT_EQ((dis::meta::size_v<test_type>), 5U);
        ASSERT_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<int, short, double, char, int>>));
    }
}
