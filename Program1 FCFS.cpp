#include<iostream>
 
using namespace std;
 
int main()
{
	
    int n,burstt[10],waitt[10],turnat[10],avgwaitt=0,avgturnat=0,i,j;
    one :
    cout<<"Enter the total number of processes you want(P.S:- max entry 10):";
    cin>>n;
    while(n<=10)
{
 
    cout<<"\nEnter the Burst Time of the process : \n";
    for(i=0;i<n;i++)
    {
        cout<<"Process["<<i+1<<"]:";
        cin>>burstt[i];
    }
 
    waitt[0]=0;    //waiting time for the  first process will be 0
 
    //calculating the waiting time of processes
    for(i=1;i<n;i++)
    {
        waitt[i]=0;
        for(j=0;j<i;j++)
            waitt[i]+=burstt[j];
    }
 
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
 
    //calculating the turnaround time of processes
    for(i=0;i<n;i++)
    {
        turnat[i]=burstt[i]+waitt[i];
        avgwaitt+=waitt[i];
        avgturnat+=turnat[i];
        cout<<"\nProcess["<<i+1<<"]"<<"\t\t"<<burstt[i]<<"\t\t"<<waitt[i]<<"\t\t"<<turnat[i];
    }
 
    avgwaitt/=i;
    avgturnat/=i;
    cout<<"\n\nThe Average Waiting Time is :"<<avgwaitt;
    cout<<"\nThe Average Turnaround Time :"<<avgturnat;
 
    return 0;
}
cout<<"ERROR LIMIT EXCEEDED\n\n";
goto one;
} 
