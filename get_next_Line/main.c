
#include <unistd.h> //has close() in it
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

// char	*okspollish(char *buffer) 
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while (buffer[i] && buffer[i] != '\n')
// 	{
// 		// printf("%c\n", buffer[i]);
// 		//buffer[i] = '\0';
// 		i++;
// 	}

// 	if (buffer[i] == '\n') // so apaga uma quebra
// 	{
// 		buffer[i] = 0;
// 		i++;
// 	}
// 	j = 0;
// 	while (buffer[i])
// 	{
// 		buffer[j] = buffer[i];
// 		j++;
// 		i++;
// 	}
// }
int main(void)
{
char *line;
//okspollish(line);
printf("%s\n", ft_strchr(line, '\n') + 1);
int i=0;
int fd = open("example.txt", O_RDONLY | O_CREAT);
if (fd <= 2)
{
  printf("ocurreu um erro");
  return(1);
}

 line = get_next_line(fd);
  printf("primeira chamada: %s\n", line);
  
 line = get_next_line(fd);
  printf("segunda chamada: %s\n", line);
  

 line = get_next_line(fd);
  printf("terceira chamada: %s\n", line);
 
// while (i < 3)
// {
//   line = get_next_line(fd);
//   printf("primeira chamada: %s\n", line);
//   // if (!line)
//   //   break;
// }

close(fd);
return(0);
}