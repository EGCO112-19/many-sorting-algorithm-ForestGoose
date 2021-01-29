#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
int main(int argc, char *argv[]){
  int i,*a,N = argc-2;
  char* type = argv[1];
  a = (int*)malloc(sizeof(int)*N);
  //printf("argument 0 is %s\n",*argv);
  for(i=2;i<argc;i++)
    a[i-2] = atoi(argv[i]);
  if(strcmp(type,"bubble") == 0) bubble(a,N);
  else if(strcmp(type,"selection") == 0) selection(a,N);
  else if(strcmp(type,"insertion") == 0) insertion(a,N);
  else printf("Error argument\n");
  return 0;
}
