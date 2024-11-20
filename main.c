#include <stdio.h>

#define BUF_SIZE 1024
#define TOK_SIZE 512

int read_line(char buffer[BUF_SIZE]) {
	printf("> ");
	if (fgets(buffer, BUF_SIZE, stdin) == NULL) {
		printf("Have a good day!\n");
		return 1;
	}
	return 0;
}

int main() {
	char buffer[BUF_SIZE];
	//char *tokens[512];

	printf("Allocate your time for today! If you need help, enter 'help'. To exit, press CTRL-D.\n");

	while (read_line(buffer) == 0) {
		printf("%s\n", buffer);
	}


	return 0;
}
