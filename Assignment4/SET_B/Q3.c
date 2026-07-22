#include <stdio.h>

int main() 
{
    int x,y,p=1,i;
    
    printf("Enter values: ");
    scanf("%d %d", &x, &y);
    
    if(x<y)
    {
        printf("Numbers between %d and %d are:\n",x,y);
        for(i=x+ 1;i<y;i++)
        printf("%d ",i);
        
    }
    else
        printf("Invalid range! x should be less than y.");
}
