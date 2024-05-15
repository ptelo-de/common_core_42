
#include <unistd.h> //has close() in it
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
char	*okspollish(char *buffer) 
{
	int i;
	int j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		// printf("%c\n", buffer[i]);
		//buffer[i] = '\0';
		i++;
	}

	if (buffer[i] == '\n') //so apaga uma quebra
	{
		buffer[i] = 0;
		i++;
	}
	j = 0;
	while (buffer[i])
	{
		buffer[j] = buffer[i];
		j++;
		i++;
	}
}
int main(void)
{
char *line;
//okspollish(line);
int i=0;
int fd = open("example.txt", O_RDONLY | O_CREAT);
if (fd <= 2)
{
  printf("ocurreu um erro");
  return(1);
}


 
while (i < 6)//para imprimir o null
{
  line = get_next_line(fd);
  printf("[%d]: %s\n",i, line);
  i++;
}
close(fd);
return(0);
}