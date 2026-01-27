/* 
- Chapter 1 
- Introduction to C programming language 
* C is a general-purpose programming language developed by Dennis Ritchie at Bell Labs in the early 1970s.
* C is a procedural programming language that follows a structured approach to programming.
* C is widely used for system programming, embedded systems, and developing operating systems.
* C is known for its efficiency, low-level memory manipulation capabilities, and portability across different platforms.
* C is the foundation for many other programming languages, including C++, Java, and Python.
* Operating systems, such as parts of Windows, Linux, and macOS
* Programs inside devices like cars, TVs, and home electronics
* Software that needs to be fast, including databases and system tools
* Game engines and programs that handle graphics
* Core libraries that other programming languages rely on
-------------------------------------------------------------
- to create a C program follow the below steps 
1.open any text editor 
2.write the c progam code in the text editor
3. save the file with extension with .c (eg: hello_world.c)
4. open the rterminal and navigate to the directory where the source file is present
5. compile the program using gcc compiler
6. run the output file to see the result on the screen
-------------------------------------------------------------
Compile : The process of converting the source code into machine code is called compiling the program.
Run : The process of executing the machine code on the computer is called running the program.
-------------------------------------------------------------
- to compile and run the C program use the below commands in the terminal
cmd to print the hello world on the screen
gcc  <program_name.c> -o <output_file_name>
and the output file will be created in the same directory where the source file is present.
then run the output file using below command
./<output_file_name.exe> 

The exe file is the exexutable file in which the machine code is present in which is understandable by the computer.

Example:

gcc hello_world.c
./hello_world.out   (on linux)
-------------------------------------------------------------



*/

#include<stdio.h>
// this is the a preprocessor directive in the c programming language.
// this is the header of the c programming language
int main()
// main () is function  The name of the function. In these languages, main is a reserved name that the system looks for to start the program. 
{

    printf("Hello World!");
printf("Have a good day!");
return 0;
    // printf() is a standard library function in C programming language used to print the output on the screen. 

    return 0;
}