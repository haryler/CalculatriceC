
void puissance(int n1, int n2)
{
	int i;
	int res = n1;
	
	for(i=1;i<n2;i++)
	{
		res *= n1;
	}
	printf("%d à la puissance %d vaut %d\n" , n1, n2, res);
	
}
