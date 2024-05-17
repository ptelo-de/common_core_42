#include <stdio.h>
#include<unistd.h>
#include "get_next_line.h"
int main()
{
	char *literal = "abcd"; 	//*buffer[1] = 'b'; out :segfault stattic ou nao static  // string literal
	char buffer2[5] = "aaaa";
	char *literal;
	//buffer[0] = 'a'; //entao quer dizer que nem toda a sring e iteravel?
	//buffer++;
	//printf("buffer: %s\nbuffer++:%s\nbuffer2: %p\n",buffer,buffer +1, buffer2);
	//literal = "p";
	//printf("%c\n", literal[1]);

}