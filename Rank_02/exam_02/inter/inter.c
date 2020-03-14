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
	int j=-1,k =-1;
	if (ac == 3)
	{
			while(av[1][++j])
			{
				if(!ft_strchr(used,av[1][j]) && ft_strchr(av[2], av[1][j]))
				{
					write(1,&av[1][j],1);
					used[++k] = av[1][j];
				}
			}
	}
	write(1, "\n", 1);
	return (0);
}
