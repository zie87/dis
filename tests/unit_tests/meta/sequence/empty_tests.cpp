/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#include "dis/meta/sequence.hpp"

#include "test_framework.hpp"

TEST(meta_sequence_empty) {
    {
        using seq_type = dis::meta::sequence<>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<seq_type>));
        UT_CHECK_TRUE((dis::meta::empty_v<seq_type>));
    }
    {
        using seq_type = dis::meta::sequence<char>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<seq_type>));
        UT_CHECK_FALSE((dis::meta::empty_v<seq_type>));
    }
    {
        using seq_type = dis::meta::sequence<int, short, double>;

        UT_CHECK_TRUE((dis::meta::is_sequence_v<seq_type>));
        UT_CHECK_FALSE((dis::meta::empty_v<seq_type>));
    }
}
