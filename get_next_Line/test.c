#include <stdio.h>
#include<unistd.h>
int main()
{
	write(1, "running", 8);
	sleep(100);


}