#include <stdio.h>
#include <stdbool.h>

int main(){
    int alloc[5][4] = { { 0, 1, 0, 3 },
                        { 2, 0, 0, 0 },
                        { 3, 0, 2, 0 },
                        { 2, 1, 1, 5 },
                        { 0, 0, 2, 2 } };
    int max[5][4] = { { 6, 4, 3, 4 },
                        { 3, 2, 2, 1 },
                        { 9, 1, 2, 6 },
                        { 2, 2, 2, 8 }, 
                        { 4, 3, 3, 7 } };
    int avail[4] = { 3, 3, 2, 1 };
    int need[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    bool finish[5];
    for(int i=0;i<5;i++){
        finish[i]=false;
    }
    bool less;
    for(int k=0;k<5;k++){
        for(int i=0;i<5;i++){
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
                finish[i]=true;
                for (int j=0;j<4; j++){
                    avail[j]+=alloc[i][j];
                }
            }
        }
    }
    for(int i=0;i<5;i++){
        if(finish[i]==false){
            printf("Deadlock in this scenerio. \n");
            break;
        }
        else if (i ==4){
            printf("Safe sequence. \n");
        }
    }
    
}