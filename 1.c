#include <stdio.h>

int main(void) {
	int row = 0, col = 0;
	char ans[90][90];

	while (1) {
		char ch = getchar();
		if (ch  == ' ') {
			ans[row][col] = '\0';
			row++;
			col = 0;
			continue;
		}
		if (ch == '\n') {
			ans[row][col] = '\0';
			break;
		}
		ans[row][col] = ch;
		col++;
	}
	for (int i = row; i >= 0; i--) {
		printf("%s", ans[i]);
		if (i > 0)printf(" ");
	}
	return 0;
}