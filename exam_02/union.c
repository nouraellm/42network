
#include <unistd.h>
int  ft_strchr(char *str, char c)
{
	for(;*str;str++)
		if(*str== c)
			return 1;
	return 0;
}

int main(int ac,  char **av)
{
	char used[255];
	int i = 0,j=-1,k =-1;
	if (ac == 3)
	{
		while (++i < 3)
		{
			j = -1;
			while(av[i][++j])
			{
				if(!ft_strchr(used,av[i][j]))
				{
					write(1,&av[i][j],1);
					used[++k] = av[i][j];
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
