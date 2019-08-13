# cmake-tutorial

Hands-on exercises for a brief CMake tutorial.

The exercises are adapted from the [dev-cafe/cmake-cookbook
repository](https://github.com/dev-cafe/cmake-cookbook) and the [CodeRefinery
CMake lesson](https://coderefinery.github.io/cmake/).

[CMake Cookbook](https://www.packtpub.com/application-development/cmake-cookbook)
offers a more in-depth discussion of many additional topics.

Introductory slides are rendered [here](http://tinyurl.com/cmake-tutorial-MolSSI).

## [Example 1](./example-01)

Introduce basic CMake commands to successfully compile a project.
We will also show how to work with dependencies and switch generators.

Commands discussed:
- `project`
- `cmake_minimum_required`
- `message`
- `set`
- `option`
- `if`
- `add_executable`
- `find_package`
- `target_link_libraries`
- `target_sources`

## [Example 2](./example-02)

We will discuss how to structure a project and how to produce libraries, in
addition to executables.

Commands discussed:
- `add_library`

## [Example 3](./example-03)

We will have a first look at the [Catch2](https://github.com/catchorg/Catch2)
unit test framework and how to use it with
[CTest](https://cmake.org/cmake/help/latest/manual/ctest.1.html).

## [Example 4](./example-04)

CMake is not just for C/C++, it can be used also for Fortran projects. In this
example we will build a C++/Fortran project. We will also get acquainted with
CTest, the testing framework that is part of the CMake suite.

## [Example 5](./example-05)

This final example will focus on unit testing and present some of the available
C++ frameworks. We will focuse on [Catch2](https://github.com/catchorg/Catch2)
and introduce some of its features.


