#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
 FILE*pfile;

  srand(time(0));

 pfile = fopen("no.txt", "w+");
  if (pfile != NULL){

  
    for (int i = 0; i < 25; i++)
   {
   
    int random_number = rand()%(100+1+0)+0;
    fprintf(pfile,"%u\n", random_number);
  }
  fclose(pfile);
  
  }


  return 0;
}
