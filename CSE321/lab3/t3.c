#include<stdio.h>
int main(){

    int n=5,c=0,it;
    printf("Number of Processes : ");
    scanf("%d",&n);
    int arrival_time[n],burst_time[n],temp[n],turnaround_time[n],priority[n],waiting_time[n];
    for(int i=0;i<n;i++){
        printf("AT of Process P%d : ",i+1);
        scanf("%d",&arrival_time[i]);
        printf("BT of Process P%d : ",i+1);
        scanf("%d",&burst_time[i]);
        temp[i]=burst_time[i];
        printf("PT of Process P%d : ",i+1);
        scanf("%d",&priority[i]);
    }
    priority[n*2-1]=9999;
    for(int j=0;c!=n;j++){
        it=n*2-1;
        for(int i=0;i<n;i++){
            if(priority[it]>priority[i] && arrival_time[i]<=j && burst_time[i]>0){
                it=i;
            }
        }
        burst_time[it]=burst_time[it]-1;
        if(burst_time[it]==0){
            waiting_time[it]=j+1-arrival_time[it]-temp[it];
            turnaround_time[it]=j+1-arrival_time[it];
            c+=1;
        }
    }
    printf("\nProcess \tCT \tTAT \tWT\n");
    for(int i=0;i<n;i++){
        printf("\nProcess[%d]\t%d \t%d \t%d\n",i+1,arrival_time[i]+turnaround_time[i],waiting_time[i],turnaround_time[i]);
    }
    return 0;
}