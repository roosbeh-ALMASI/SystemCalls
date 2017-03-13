#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

 int i= 0;
  
 char arr[] = "Metasphere"; 
 char *ptr;
 ptr=arr;


for(i=0; i<10; i++)
{
 
  fprintf(stdout,"%s\n", ptr);

}


 

  return 0;
}
