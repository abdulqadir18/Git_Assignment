#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *sgs_clib_strcat(char *dest, const char *src)
{
  char *ptr=dest+ strlen(dest);
  while(*src!='\0')
  {
    *ptr++ = *src++;
  }
  *ptr = '\0';
  return dest;
}

int main()
{
  char* dest = (char*)calloc(100, 1);
  char* src="Abdul";
  sgs_clib_strcat(dest,src);
  puts(dest);

  return 0;
}