C - File I/O:

File I/O (Input/Output) in C is a way to read data from and write data to files
on a computer's storage device. It is a crucial aspect of many programming tasks,
as it allows programs to read from or write to files, which can be used to store
data, settings, or other information.

In C, file I/O is performed using the standard I/O library.
The library provides several functions for opening, reading, writing, and closing files.
The basic steps involved in performing file I/O in C are as follows:

1. Open the file: To read from or write to a file, the file must first be opened.
This is done using the fopen() function, which takes two arguments:
the filename and the mode in which the file will be opened (e.g. read-only, write-only, or read-write).
2. Read from or write to the file: Once the file is opened, data can be read from or written
to the file using functions such as fscanf(), fgets(), fread(), fprintf(), fputs(), or fwrite().
3. Close the file: After the program has finished reading from or writing to the file,
the file should be closed using the fclose() function.
This ensures that any buffers or data still held in memory are written to the file
and any system resources allocated to the file are released.
