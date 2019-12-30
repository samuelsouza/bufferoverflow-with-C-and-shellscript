#include <stdio.h>
#include <stdlib.h>

static int x = 8;

void prompt(){
	char buf[100];

	gets(buf);
	printf("You entered: %s\n", buf);

}
void target(){
    printf("Haha! I made it!\n");
    exit(0);
}

int main(){
	prompt();
    //printf("Address of target: %p\n Hacking string:", target);
	return 0;
}

