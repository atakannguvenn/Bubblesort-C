#include<stdio.h>
#include<stdlib.h>

void swap(int a,int z,char *sentence);

int main()
{
	int i=0,j=0;
        char sentence[20]="ebrzaisnic";
        swap(i,j,sentence);
	printf("Origional : %s\n\n",sentence);
	printf("\n\n Final Result :    %s\n\n",sentence);
	system("pause");
	return 0;
}

void swap(int a,int z,char *sentence)
{
    	int k=0;
    	char tmp;
    	for(z=0;sentence[z]!='\0';z=z+1);
	z=z-1;
	while(z > k)
	{
		while(z>a)
    		{
			if(sentence[a] > sentence[a+1])
         		{
				tmp = sentence[a];
              			sentence[a] = sentence[a+1];
              			sentence[a+1] = tmp;
         		}
         		a = a+1;
 		}
		printf("In Progress :    %s\n",sentence);
		a = 0;
		k=k+1;
	}
}
