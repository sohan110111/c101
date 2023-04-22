#include <stdio.h>
#include <string.h>

int main(){
 // reverse string
 char rev[100];
 scanf("%s", rev);
 int len = strlen(rev);
 printf("len is : %d\n",len);
 for(int i = len; i >= 0; i--){
    printf("%c", rev[i]);
 }
 printf("\n");
 return 0;
}


