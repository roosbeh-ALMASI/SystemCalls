 /******************************************************************************************************************************

    int  open(const char *pathname, int flags ,mode_t mode)             return file-des
ssize_t  read(int file-des, void *buf, size_t nBytes)                reads nBytes from file-des into buf, retuns number of red bytes   
ssize_t write(int file-des, const void *buf, size_t nBytes)         writes nBytes form the buf into file-des 
    int close(int file_des)                                        returns 0 on success 


  FILE  *fopen(const char *path, const char *mode)
size_t   fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
size_t  fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)


int  printf(const char *format, ...)               writes to stdout, returns No. of written characters, negative value on error             
int fprintf(FILE *stream, const char *format, ...) writes to a file, same
int sprintf(char *str, const char *format, ...)    writes to a string, same


void itoa(int input, char *buf, int radix)        covert int to ascii and saves in buf
 int atoi(const char *str)


******************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include <fcntl.h>       // open(), read(), write(), close() 
//#include <sys/types>
//#include <sys/stat>


void ts_itoa(char **buf, unsigned int d, int base)
{
	int div = 1;
	while (d/div >= base)
		div *= base;

	while (div != 0)
	{
		int num = d/div;
		d = d%div;
		div /= base;
		if (num > 9)
			*((*buf)++) = (num-10) + 'A';
		else
			*((*buf)++) = num + '0';
	}
}



int main(int argc, char *argv[])
{

 
unsigned int var = 77;

char arr[100];

char *ptr;
char **p;
p=&ptr;
ptr=arr;

ts_itoa(p ,var, 10);

puts(arr);
  return 0;
}
