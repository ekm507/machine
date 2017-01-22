//hardware properties and things.

//THIS IS AN 8-BIT MACHINE.
//a 64-bit machine is also avilable in branch 'master64'.

/// consts to set machine properties.

const unsigned long long RAM_SIZE=3000;
//ram size per bytes.
//maximum size is 24 KB.
//you know this is an 8 bit machine
//I wonder why I'm not making a 64 bit machine?!
//or variable? 32 bit or 16 bit? so it is a todo! !<<<<<<TODO>>>>>>>!

const unsigned int REGISTER_SIZE=32;
//cpu's register size per bytes.

const unsigned long long STACK_SIZE=120;
//address stack size our machine uses.
//if you set this a short number, it's so near to get a stackoverflow.


char ram[RAM_SIZE];
//our machine's ram.

char cpu_register[REGISTER_SIZE];
//register emory of our machine's CPU.

unsigned long long stack[STACK_SIZE];
//address stack , used for functions and returnable jumpings.

unsigned long long stack_pointer=0;
//this shows the last address of the stack. 
//we assume that numbers bigger than this are out of stack.

char* program_meory;
//memory used to store the program. ew have a lot to do with this!
//we can store some of this in hard disk if it is too large. 
// but I don't think so!
//yet we should notice everything . so it is a todo! !<<<<<<<<TODO>>>>>>>!

unsigned long long program_size=0;
//program size (auto calculate in main)
//(per words used as bytes)




//DESIGN THE CPU REGISTER MEMORY
/*
........DESIGN THE REGISTER MEMORY......
	register memory consists of variables , flags and some other thing.
	to be able to use this memory we should design it first.

with register:
[A]:--------
[A]:12345678
..

[0]:
	[1]:set: if program wants to be closed.
[1]:
	
*/


