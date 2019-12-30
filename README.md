This is a simple C program with buffer overflow problem, along with a shell script that automates the exploitation of the vulnerability using GDB debugger. This is a very simple situation, intended for study purposes only.

# *Buffer Overflow*:

	- The goal is overwrite parts of memory which aren’t supposed to be overwritten by an arbitrary input and making the process execute a different piece of code.

	- The memory is organized as follows:
		* code segment (instruction pointer, keeps the address of the code that will be executed next)
		* data segment (variables and dynamic buffers)
		* stack segment (used to pass arguments to functions and as a space for variable of functions)

# *Manual Process*:

Compiling and Checking the dump of the assembler structure and getting the return value.

```shell
# g++ —ggdbs drr -fno-stack-protector vuln_program.c -o vuln
# gdb vuln
#(gdb) disas main
#(gdb) disas target
```
Checking if the registers are being overwritten

```shell
# gdb vuln
#(gdb) run vuln < input
#(gdb) info registers
#(gdb) set disassemble-flavor intiel
```

# *Automated Process*:
The shell script was tested on Ubuntu and can be executed individually, it compiles and runs the program performing the exploit by itself.
```shell
./bufferOverflowExploit.sh
```

_Disclaimer: Developed as part of CS458 - Introduction to Computer Security class at Binghamton University_
