#include <stdio.h>

int n, min;
int map[4][4];

void dfs(int x, int y, int l){
    //arrived at destination
   if(x == n-1 && y == n-1){
       if(min > l){
           min = l;
       }
       printf("l : %d min : %d\n\n", l, min);
       
       return;
   }

    map[y][x] = 0;  //visit
    
    //move up
    if(y > 0 && map[y-1][x] != 0){
        printf("up\n");
        dfs(x, y-1, l+1);
    }
    //move down
    if(y < n-1 && map[y+1][x] != 0){
        printf("down\n");
        dfs(x, y+1, l+1);
    //move left
    if(x > 0 && map[y][x-1] != 0){
        printf("left\n");
        dfs(x-1, y, l+1);
    }
    }
    //move right
    if(x < n-1 && map[y][x+1] != 0){
        printf("right\n");
        dfs(x+1, y, l+1);
    }

    map[y][x] = 1;
}

int main(void){
    int i, j;

    scanf("%d", &n);
    min = n * n;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &map[i][j]);
        }
    }

    printf("\nStart DFS Search!!\n\n");
    dfs(0, 0, 0); //start DFS
    
    printf("\nShortest distance : %d\n", min);

    return 0;
}

