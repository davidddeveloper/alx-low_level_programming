#include <stdio.h>
int main(void)
{
	char arr[1000] = "the quick brown fox";
	printf("%p\n", arr);
	printf("%c\n", *arr);
	printf("%c\n", **arr);
	
	return (0);
}
