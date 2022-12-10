# ALX Software Engineer Cohort-10 First Trimester Course on C

## Learning C With Peers

## Static Libraries

Static libraries are the files that end with `.a` . They are compiled object files containing all symbols requested by the main program to operate some of the components of a C program instead of pulling in separate entities and files.

Static libraries create relocatable object files that are concatenated into one file. Executable object files only contain code and data for functions that will be called in other files as needed.

Static files are not usually loaded by the compiler at run-time as only the executable files are loaded. During the end of compiling the executable files is the time when static  library object files can be loaded near the linking phase.

By doing so a static library's functions and data are indexed. This means that the program can easily reference a single archived object file (.a) that will order each of the entities together instead of scanning through storage for the necessary files for compilation.

The program becomes much faster because of this.

## Creating Static Libraries

- Create header files containing declarations
- Create source files containing definitions for the declarations.
- Compile all source files to be included in the library.
- Link the resulting object files into a static library.
- Make the header and the library available to clients.

To create static library files we first need to have object files (.o). We might have some functions written in C that we want to include into our library. 

By using the `-c` option with the GNU compiler `gcc` that will stop the compiling process after the assembling stage, it will translate our files from `.c` to `.o`

```commandline
    $ gcc -c pow.c 
```

The command above produces a `pow.o` object file. From our object file we created above we are now able to archive it and create a static libray using an archiving software.

A given type of archiving software such as `ar` can take one or more object files (these are files that end with `.o`), the software will zip up these files and generate an archive file (.a files) to have a "static library".

```commandline
    $ ar -rc libcreate.a pow.o
```

The command above will create a static library called "libcreate.a" insde the library we have our pow() function that has been translated to an object file via the gcc command earlier.

The `-rc` command replaces any existing object file in the library with an archive with the same name.

Some archivers automatically  organize and index the library, but in case indexing didn't occur, we can use a command called ranlib to generate and store an index in the archive.
