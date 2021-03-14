#include <stdio.h>

int main(void) {
    char a, start; 
    scanf("%c", &a);
    for (start = 'a'; start <= a; start++)
    {
    	printf("%c\n",start);
	}
    
    return 0;
}

