# 4. Iterator support

Date: 2023-04-01

## Status

Accepted

## Context

The library needs to support different containers at some point (intrusive lists, circular buffer).
Containers should provide iterators to allow the usage of standard algorithms. 
The implementation for iterators could be time consuming.

## Decision

Add an iterator facade like provided by [Boost.Iterator](https://www.boost.org/doc/libs/1_81_0/libs/iterator/doc/index.html) 
or decribed by [vector-of-bool](https://vector-of-bool.github.io/2020/06/13/cpp20-iter-facade.html). (see also [this sherd](../history/2023/2023-04/2023-04-01T08:50:51Z_post_FrEJMxh0sVuwqxOl.md))

## Consequences

Iterator Facade needs to be implemented, with full support for STL iterators. 
Each container needs to use this facade for there iterator support.
