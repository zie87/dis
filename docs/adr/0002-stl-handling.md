# 2. STL handling

Date: 2023-04-01

## Status

Accepted

## Context

STL is only partial usable in an embedded context. Freestanding implementation 
are currently not well defined and not supported by each standard library.

## Decision

To make it easy to distinguish, between usable and unusable features the 
usable features should be mapped into the `dis` namespace.

## Consequences

Each use of the STL needs to be have some glue code inside this library.
