C90 Compiler 
==============================

The goal of this course work is to write a program that can translate a subset of C code into Python and compile to MIPS assembly.

## Specifications

- [*Test suite*](c_test_suite.md): Each submission must contain a set of test programs which are able to determine whether a given compiler implements certain C language features correctly.

- [*C-translator*](c_translator.md): Your compiler will be able to translate a sub-set of C into equivalent Python. This allows each submission to demonstrate lexing and parsing functionality, even if the code generation is weak.

- [*C-compiler*](c_compiler.md): This is a compiler from C to MIPS assembly.
  
In all cases, the source language is pre-processed C90. The target environment is Ubuntu 16.04, so the lab Ubuntu distribution, or equivalently an Ubuntu 16.04 VM as configured in the attached Vagrantfile.

Associated with all deliverables is a

- [time-tracking/project management component](management.md).

## C-to-Python Translator 

To build the compiler, run the following command:

```make bin/c_compiler```

The translator function is invoked using the flag --translate, with the source file and output file specified on the command line:

```bin/c_compiler --translate [source-file.c] -o [dest-file.py]```

## C Compiler 

To build the compiler, run the following command:

```make bin/c_compiler```

The compilation function is invoked using the flag -S, with the source file and output file specified on the command line:

```bin/c_compiler -S [source-file.c] -o [dest-file.s]```
