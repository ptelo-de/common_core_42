# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"

 void ft_bzero(void *s, size_t n);
 void *ft_calloc(size_t nmemb, size_t size);

char  *get_next_line(int fd)
{
  int  bytes_read;
  char *cup_buffer;
  
  cup_buffer = ft_calloc (BUFFER_SIZE + 1, sizeof(char));
  if (cup_buffer == NULL)
    return (NULL);
  bytes_read = read(fd, cup_buffer, BUFFER_SIZE);
  //printf("testing bytes read: %d\n",bytes_read);
  if (bytes_read <= 0)
  {
    free(cup_buffer);
    return(NULL);
  }
    
  return (cup_buffer);
}