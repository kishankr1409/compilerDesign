#!/bin/sh -e
set -xe

flex lexer.l
bison -d parser.y
gcc yy.tab.c -lfl
./a.out < input.tex