# 3. Library content

Date: 2023-04-01

## Status

Accepted

## Context

The library is intended to be used for a variety of embedded projects. This 
includes bare metal embedded systems and also handhelds or embedded linux 
software. This means we can not rely on operating system or hardware dependend 
implemntations.

## Decision

Only provide platform independend functionality. Do not include any kind of 
hardware or operating system abstraction.

## Consequences

For hardware or operating system dependen code other libraries needs to be 
created, which can use this library.
