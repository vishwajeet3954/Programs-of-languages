{
	int row, n, col, i;
	
	printf("Enter the value of rows: ");
	scanf("%d",&n);
	
	for(col=1;col<=n;col++)
	{
	    for(i=col;i<=n;i++)
	    printf(" ");
	    {
	        for(row=1;row<=col;row++)
	        printf("* ");
	        printf("\n");
	    }
	}
	printf("\n");
}