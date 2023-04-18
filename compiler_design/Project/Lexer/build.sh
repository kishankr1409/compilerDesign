#!/bin/sh -e
set -xe

flex x.l
gcc lex.yy.c -lfl
./a.out < input.tex