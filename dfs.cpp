#include <stdio.h>

int n;  //Number of vertices
int map[4][4], visit[4];

void dfs(int v){
    int i;

    visit[v] = 1;
    
    for(i = 1; i <= n; i++){
        if(map[v][i] == 1 && !visit[i]){
            printf("move %d to %d\n", v, i);
            dfs(i);
        }
    }
}

int main(void){
    int i;    
    int start;
    int v1, v2;

    scanf("%d%d", &n, &start);

    printf("vertex %d start %d\n", n, start);

    while(1){
        scanf("%d%d", &v1, &v2);
        
        printf("insert %d%d\n", v1, v2);

        if(v1 == -1 && v2 == -1){
            break;
        }

        map[v1][v2] = map[v2][v1] = 1;
    }

    printf("start dfs!!\n\n");

    //initialize
    for(i = 1; i <= 4; i++){
        visit[i] = 0;
    }

    dfs(start);

    return 0;
}