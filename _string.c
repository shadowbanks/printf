#include <unistd.h>


int _string(char *str, int n)
{
	return (write(1, str, n));
}
