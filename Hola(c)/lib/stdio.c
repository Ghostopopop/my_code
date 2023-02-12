#include <stdio.h>
int main()
{
  FILE *pFile;

  pFile = fopen("myfile.txt", "w+");
  if (pFile != NULL)
  {
    fputs("fopen example", pFile);
    fclose(pFile);
  }
  int result;
  char oldname[] = "myfile.txt";
  char newname[] = "newname.txt";
  result = rename(oldname, newname);
  if (result == 0)
    puts("File successfully renamed");
  else
    perror("Error renaming file");

  system("pause");
  
  if (remove("newname.txt") != 0)
    perror("Error deleting file");
  else
    puts("File successfully deleted");

  return 0;
}