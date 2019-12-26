#include<stdio.h>
#include<string.h>
struct process
{
	char id[3];
	int at;
	int bt;
	int ct;
	int wt;
	int tat;
};
int main()
{
	int n;
	printf("Enter the No. of processes:\n");
	scanf("%d",&n);
	int i,j,temp;
	char temp1[3];
	struct process p[n];
	printf("Enter the process id, its arrival time and burst time\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&p[i].id);
		scanf("%d",&p[i].at);
		scanf("%d",&p[i].bt);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(p[i].at > p[j].at)
			{
				temp=p[i].at;
				p[i].at=p[j].at;
				p[j].at=temp;
				temp=p[i].bt;
				p[i].bt=p[j].bt;
				p[j].bt=temp;
				strcpy(temp1,p[i].id);
				strcpy(p[i].id,p[j].id);
				strcpy(p[j].id,temp1);
			}
		}
	} 
	int ct1=0;
	float avg_wt=0;
	float avg_tat=0;
	for(i=0;i<n;i++)
	{
		if(p[i].at<=ct1)
			ct1+=p[i].bt;
		else
		{
			int x=p[i].at-ct1;
			ct1+=x+p[i].bt;
		}
		p[i].ct=ct1;
		p[i].tat=p[i].ct-p[i].at;
		p[i].wt=p[i].tat-p[i].bt;
		avg_wt+=p[i].wt;
		avg_tat+=p[i].tat;
		printf("pid: %s, ct: %d, wt: %d, tat: %d\n",p[i].id,p[i].ct,p[i].wt,p[i].tat);
	}
	avg_wt=avg_wt/n;
	avg_tat=avg_tat/n;
	printf("avg wt: %f, avg tat: %f",avg_wt,avg_tat);
}
