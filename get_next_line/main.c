#include "get_next_line.h"

int main()
{
	char *line;
	int fd = open("get_next_line.c", O_RDONLY);
	int i;

	while ((i = get_next_line(fd, &line)) > 0)
	{
		printf("%d", i);
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	return 0;
}