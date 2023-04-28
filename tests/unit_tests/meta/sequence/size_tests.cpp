/*
 * Copyright © Tobias Zindl 2023
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 *
 */

#include "dis/meta/sequence.hpp"

#include <utest.h>

UTEST(meta_sequence, size) {
    {
        using seq_type = dis::meta::sequence<>;

        ASSERT_TRUE((dis::meta::is_sequence_v<seq_type>));
        ASSERT_EQ((dis::meta::size_v<seq_type>), 0U);
    }
    {
        using seq_type = dis::meta::sequence<char>;

        ASSERT_TRUE((dis::meta::is_sequence_v<seq_type>));
        ASSERT_EQ((dis::meta::size_v<seq_type>), 1U);
    }
    {
        using seq_type = dis::meta::sequence<int, short, double>;

        ASSERT_TRUE((dis::meta::is_sequence_v<seq_type>));
        ASSERT_EQ((dis::meta::size_v<seq_type>), 3U);
    }
}
