#include <stdio.h>

int main() {
    int done = 0, n;
    printf("Processes: ");
    scanf("%d", &n);

    int arrival_time[n], burst_time[n], remaining_time[n], execution, shortest;

    for (int i = 0; i < n; i++) {
        printf("AT P%d: ", i + 1);
        scanf("%d", &arrival_time[i]);
        printf("BT P%d: ", i + 1);
        scanf("%d", &burst_time[i]);
        remaining_time[i] = burst_time[i];
    }

    printf("\nProcess\tCT\tTA\tWT\n");

    int t = 0;
    while (done < n) {
        shortest = -1;
        int i = 0;

        while (i < n) {
            if (remaining_time[i] > 0 && (shortest == -1 || (arrival_time[i] <= t && remaining_time[i] < remaining_time[shortest]))) {
                shortest = i;
            }
            i++;
        }

        if (shortest != -1) {
            remaining_time[shortest]--;

            if (remaining_time[shortest] == 0) {
                done++;
                execution = t + 1;
                printf("\nP%d\t%d\t%d\t%d", shortest + 1, execution, execution - arrival_time[shortest], execution - burst_time[shortest] - arrival_time[shortest]);
            }
        }

        t++;
    }

    return 0;
}
