/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#include "dis/meta/sequence.hpp"
#include "dis/meta/type_traits/is_same.hpp"

#include "test_framework.hpp"

TEST(meta_sequence_push_front) {
    {
        using seq_type  = dis::meta::sequence<>;
        using test_type = dis::meta::push_front_t<seq_type, char>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<test_type>));
        UT_CHECK_FALSE((dis::meta::empty_v<test_type>));
        UT_CHECK_EQUAL((dis::meta::size_v<test_type>), 1U);
        UT_CHECK_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<char>>));
    }
    {
        using seq_type  = dis::meta::sequence<char>;
        using test_type = dis::meta::push_front_t<seq_type, int>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<test_type>));
        UT_CHECK_FALSE((dis::meta::empty_v<test_type>));
        UT_CHECK_EQUAL((dis::meta::size_v<test_type>), 2U);
        UT_CHECK_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<int, char>>));
    }
    {
        using seq_type  = dis::meta::sequence<int, short, double>;
        using tmp_type  = dis::meta::push_front_t<seq_type, char>;
        using test_type = dis::meta::push_front_t<tmp_type, int>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<test_type>));
        UT_CHECK_FALSE((dis::meta::empty_v<test_type>));
        UT_CHECK_EQUAL((dis::meta::size_v<test_type>), 5U);
        UT_CHECK_TRUE((dis::meta::is_same_v<test_type, dis::meta::sequence<int, char, int, short, double>>));
    }
}
