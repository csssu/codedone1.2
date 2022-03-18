#include <stdio.h>
#include <stdlib.h>

int compareFunction (const void * a, const void * b)
{
   return (*(int*)a - *(int*)b);
}

int main() 
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		
		long int array[n];
		
		for(int j = 0; j < n; j++)
		{
			scanf("%ld", &array[j]);
		}

		qsort(array, n, sizeof(long int), compareFunction);
		
		char answer[] = {'N', 'O', '\0'};
		
		long int
			redSum = 0,
			blueSum = array[0];
			
		for(int j = 1; j < (n + 1) / 2; j++)
		{
			blueSum += array[j];
			redSum += array[n - j];
			
			if(blueSum < redSum)
			{
				answer[0] = 'Y';
				answer[1] = 'E';
				answer[2] = 'S';
				break;
			}
		}
		
		printf("%s\n", answer);
	}
  
  return(0);
}