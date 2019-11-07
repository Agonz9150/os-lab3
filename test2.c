#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main(int argv, char* argc[]){
  int i = 0;
  for(i=0;i<10;i++){
    fork(); 
    printf(" Memory avalable:%d Memory requested:%d \n",syscall(314),syscall(313));
  }  
    
  return 0;
}
