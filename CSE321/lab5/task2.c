#include <stdio.h>
#include <stdbool.h>

int main(){
    int alloc[6][4] = { { 0, 1, 0, 3 },
                        { 2, 0, 0, 3 },
                        { 3, 0, 2, 0 },
                        { 2, 1, 1, 5 },
                        { 0, 0, 2, 2 },
                        {1, 2 , 3, 1 } };
    int max[6][4] = { { 6, 4, 3, 4 }, 
                    { 3, 2, 2, 4 },
                    { 9, 1, 2, 6 },
                    { 2, 2, 2, 8 },
                    { 4, 3, 3, 7 },
                    { 6, 2 , 6, 5 } };
    int avail[4] = { 2, 2, 2, 1 };
    int need[6][4];
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    bool finish[6];
    for(int i=0;i<6;i++){
        finish[i]=false;
    }
    bool less;
    int safe[6];
    int safe_i=0;
    for(int k=0;k<6;k++){
        for(int i=0;i<6;i++){
            less= true;
            for(int j=0;j<4;j++){
                if(need[i][j]<=avail[j]){
                    continue;
                }
                else{
                    less = false;
                    break;
                }
            }
            if(less == true && finish[i]==false){
                safe[safe_i]= i;
                safe_i++;
                finish[i]=true;
                for (int j=0;j<4; j++){
                    avail[j]+=alloc[i][j];
                }
            }
        }
    }
    for(int i=0;i<6;i++){
        if(finish[i]==false){
            printf("Deadlock in this scnerio. \n");
            break;
        }
        else if (i ==5){
            printf("Safe sequence. \n");

            for (int j=0; j<6; j++){
                printf("P%d ->",safe[j]);
            }
        }
    }
}