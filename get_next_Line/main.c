
#include <unistd.h> //has close() in it
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(void)
{
	char *line= "aaa";
	int i=0;
	int fd = open("example.txt", O_RDONLY | O_CREAT);
	if (fd <= 2)
	{
  		printf("ocurreu um erro");
  		return(1);
	}
	while (line)//para imprimir o null
	{
		line = get_next_line(fd);
  		printf("%s",line);
  		if(!line)
			break;
	}
	close(fd);
	return(0);
}