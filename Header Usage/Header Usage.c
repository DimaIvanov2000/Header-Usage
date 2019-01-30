/*
	Dima Ivanov's C Programs:
	
	Header Files (And a gorgeous image)
	
	Usage of header files to store a function thats prints an image.
	Print toad's face from Super Mario 64 at any time, on the go!
	Simply place the BUP.h header file along with the BUP.txt file in your directory, include "BUP.h" and <windows.h>, and call the function!
*/

#include<stdio.h>
#include<windows.h>
#include"BUP.h"

int main(void)
{
	printBup("BUP.txt");
}
