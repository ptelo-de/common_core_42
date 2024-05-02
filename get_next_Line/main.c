#include <stdio.h>
#include <unistd.h> //has close() in it
#include <fcntl.h>
#include <stdlib.h>

char  *get_next_line(int fd);
int main(void)
{
  int    fd;
  char  *line;
  int  count;

  count = 0;
  fd = open("example.txt", O_RDONLY);
  if (fd == -1)
 {
  printf("Error opening file\n");
  return (1);
 } 
  while(1)
  {
  line = get_next_line(fd);
  if (line == NULL)
    break;
  count++;
  printf("[%d]:%s\n", count, line); //count is to show you the line numbers
  free(line);
  //line = NULL;
  }
  close(fd);
  return (0);
}