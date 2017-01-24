#include<stdio.h>
void main()
{
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	int i,j, pos, temp, il = 0, s = 0;
	for(i=0;i<9;i++)
	{	
		pos = i;
		for(j=i+1;j<10;j++)
		{	
			printf("Inner loop---->> %d\n",il);
			il++;
			if(array[i] > array[j])
			{	
				printf("min changed ---->> %d\n",s);
				s++;
				pos = j;
			}
		}
		if(pos != i)
		{	
			printf("Swapped ---->>%d\n",array[pos]);
			temp = array[pos];
			array[pos] = array[i];
			array[i] = temp;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i] );
	}
}