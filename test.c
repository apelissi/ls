#include <dirent.h>
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include <sys/xattr.h>

int	main(int ac, char **av)
{
	DIR		*dirp;
	struct dirent	*dp;

	ac = 0;
	dirp = opendir(av[1]);
	while((dp = readdir(dirp)))
		printf("%s\n", dp->d_name);
	return(0);
}
