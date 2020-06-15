#include <stdio.h>

int main() {
	char * name;
	long int st_num;

	printf("name : ");
	scanf("%s", name);

	printf("student number : ");
	scanf("%ld", &st_num);

	printf("\n%ld / %s\n", st_num, name);

	return 0;
}
