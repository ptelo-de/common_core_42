
#include <unistd.h> //has close() in it
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "libft.h"


int main(void)
{
  int    fd;
  char  *line;
  int  count;
  //char *buffer = malloc(sizeof(char *));

  count = 0;
  fd = open("example.txt", O_RDONLY);
  if (fd == -1)
 {
  printf("Error opening file\n");
  return (1);
 }
 printf("%s\n", get_next_line(fd));
  printf("%s\n", get_next_line(fd));  
//   while(count <2)
//   {
//   line = get_next_line(fd);
//   if (line == NULL)
//     break;
//   count++;
//   printf("[%d]:%s\n", count, line); //count is to show you the line numbers
//  // free(line);
//   //line = NULL;
//   }
  close(fd);
  return (0);
}