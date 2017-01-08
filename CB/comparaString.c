#include <stdio.h>
#include <string.h>
 
int main ()
{
  char *str1 = "melancia";
  char *str2 = "laranja";
  int ret;
 
  ret = strncmp(str1, str2, 6);
 
  if(ret > 0)
  {
    printf("str1 é maior\n");
  }
  else if(ret < 0)
  {
    printf("str2 é maior\n");
  }
  else
  {
    printf("As duas palavras são iguais\n");
  }
 
  return(0);
}