`0x18-dynamic_libraries`

Dynamic libraries in C, also known as shared libraries, are precompiled code modules that contain
functions and data that can be used by multiple programs simultaneously. These libraries are loaded
into memory at runtime and linked to the executable code of a program, allowing the program to access
the library's functions and resources.

Dynamic libraries offer several advantages over static libraries, which are linked directly into an
executable at compile time. Here are some key points about dynamic libraries:

1.  Code reusability: Dynamic libraries promote code reusability because multiple programs can use
    the same library. Developers can create a set of common functions or resources in a library and
    share it among multiple applications, reducing duplication and improving maintainability.

2.  Efficient memory usage: Dynamic libraries are loaded into memory only when needed. They can be
    shared among multiple processes, reducing memory usage compared to static libraries, where each
    executable has its own copy of the library code.

3.  Runtime updates: Dynamic libraries can be updated independently of the programs that use them.
    When a library is updated, all the programs linked to that library can benefit from the changes
    without recompilation or relinking. This allows for easier bug fixes, performance improvements,
    and feature enhancements.

4.  Symbol resolution: When a program uses a dynamic library, the operating system's dynamic linker
    resolves symbols (functions, variables) from the library at runtime. This means that the library's
    code is not fully resolved until the program is executed, allowing for flexibility and runtime customization.

5.  Versioning: Dynamic libraries often support versioning, which allows multiple versions of the same
    library to coexist on a system. This enables backward compatibility for older programs that may
    depend on specific versions of the library.

To use a dynamic library in C, you typically include the library's header file in your source code and
use a special compiler flag or linker option to link against the library at compile time. At runtime,
the dynamic linker searches for the required library and loads it into memory, resolving symbols as needed.

Overall, dynamic libraries in C provide a flexible and efficient way to share code among multiple programs,
enabling modularity, code reuse, and easier maintenance and updates.
