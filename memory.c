
#include<stdio.h>

void pmem(int a[], int n)
{
    int i;
    printf("Memory:\t");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("\n");
}

int main()
{
	int n,a[1000],i,j,p,temp,flag,a1[1000],pro[1000],m,mi,n1,no[1000];
	
	printf("Press -1 to exit\n\n");
    	while(1)
    		{
        		printf("Enter the memory block size %d: ",i+1);
        		scanf("%d",&temp);

        		if(temp==-1)
        		{
            			n=i;
            			break;
        		}

        		a[i]=temp;
			a1[i]=temp;
			i++;
			
    		}
		i=0;
	while(1)
    		{
        		printf("Enter the process size %d: ",i+1);
        		scanf("%d",&temp);

        		if(temp==-1)
        		{
            			n1=i;
            			break;
        		}
			pro[i++]=temp;
			
        		
    		}
	printf(" **************** first fit *************** \n");
	
	for(i=0;i<n1;i++)
		{
			flag=0;
		for(j=0;j<n;j++)
		{
			if(pro[i]<=a[j])
			{
				a[j]-=pro[i];
				no[i]=j+1;
				flag=1;
			}
			if(flag==1)
				break;
		}	 

        }
	
	pmem(a,n);
	for(i=0;i<n1;i++)
	{
		printf("process id %d : %d \n" ,i+1,no[i]); 
	}
	for(i=0;i<n;i++)
	{
		a[i]=a1[i];
	}
		int flag1=0;
	printf(" **************** worst fit *************** \n");
	for(i=0;i<n1;i++)
		{
			m=-1;
			mi=0;
			flag=0;
		for(j=0;j<n;j++)
		{
			 if(a[j]>m&&pro[i]<=a[j])
            			{
                		m=a[j];
                		mi=j;
				flag=1;
            			}
		}	 
				if(flag==0)
					{flag1=1;
						no[i]=-1;}
				else
            				{
					a[mi]-=pro[i];
					no[i]=mi+1;}
				
        }
	

pmem(a,n);
	for(i=0;i<n1;i++)
	{
		if(no[i]!=-1)	
		printf("process id %d : %d \n" ,i+1,no[i]);
		else
		printf("insufficent memory"); 
	}
	for(i=0;i<n;i++)
	{
		a[i]=a1[i];
	}


for(i=0;i<n;i++)
	{
		a[i]=a1[i];
	}
printf(" **************** best fit *************** \n");
flag1=0;
for(i=0;i<n1;i++)
		{
			m=999999;
			mi=0;
			flag=0;
		for(j=0;j<n;j++)
		{
			 if(a[j]<m&&pro[i]<=a[j])
            			{
                		m=a[j];
                		mi=j;
				flag=1;
            			}
		}	 
				if(flag==0)
					{flag1=1;
						no[i]=-1;}
				else
            				{
					a[mi]-=pro[i];
					no[i]=mi+1;}
				
        }

pmem(a,n);
	for(i=0;i<n1;i++)
	{
		if(no[i]!=-1)	
		printf("process id %d : %d \n" ,i+1,no[i]);
		else
		printf("insufficent memory"); 
	}
	for(i=0;i<n;i++)
	{
		a[i]=a1[i];
	}


}


