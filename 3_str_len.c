#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", str);
	int i = 0;
	while (str[i] != '\0') {
            i++;
       }
       printf("String length is: %d\n", i);
}
