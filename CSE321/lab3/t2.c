#include <stdio.h>

int main() {
    int n, time_quantum;
    printf("Number of Processes: ");
    scanf("%d", &n);
    
    int burst_time[n], remaining_time[n], waiting_time[n], completion_time[n], turnaround_time[n];
    
    for (int i = 0; i < n; i++) {
        printf("Burst Time for Process P%d: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i];
        waiting_time[i] = 0;
        completion_time[i] = 0;
    }

    printf("Time Quantum: ");
    scanf("%d", &time_quantum);
    
    int current_time = 0, completed = 0;
    while (completed < n) {
        for (int i = 0; i < n; i++) {
            if (remaining_time[i] > 0) {
                int execute_time = (remaining_time[i] > time_quantum) ? time_quantum : remaining_time[i];
                remaining_time[i] -= execute_time;
                current_time += execute_time;
                
                if (remaining_time[i] == 0) {
                    completion_time[i] = current_time;
                    turnaround_time[i] = current_time;
                    turnaround_time[i] -= 0;  
                    completed++;
                }
                
                for (int j = 0; j < n; j++) {
                    if (i != j && remaining_time[j] > 0) {
                        waiting_time[j] += execute_time;
                    }
                }
            }
        }
    }
    
    printf("\nProcess \tCompletion Time \tTurnaround Time \tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", i + 1, completion_time[i], turnaround_time[i], waiting_time[i]);
    }
    
    return 0;
}