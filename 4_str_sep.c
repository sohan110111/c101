#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	scanf("%s", str);
	//str sep with new line
	int i = 0;
	while(str[i] != '\0'){
		printf("%c\n", str[i++]);
	}

	return 0;
}
