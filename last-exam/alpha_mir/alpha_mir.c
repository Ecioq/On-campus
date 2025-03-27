int main(int argc, char **argv)
{
	int i = 0;
	while(argv[1][i] >= 'a' && argv[1][i] <= 'z')
	{
		argv[1][i] =  'z' - argv[1][i] + 'a';
		write(1,&argv[1][i],1);
	       i++;
	}
}	
