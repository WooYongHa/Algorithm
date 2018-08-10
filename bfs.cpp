#include <stdio.h>

int n;
int rear, front;
int map[4][4], queue[4], visit[4];

void bfs(int v){
    int i;

    visit[v] = 1;

    printf("Start at %d\n", v);

    printf("rear %d\n", rear);
    printf("front %d\n", front);

    queue[rear++] = v;
    
    while(front < rear){
        v = queue[front++];
        
        for(i = 1; i <= n; i++){
            if(map[v][i] == 1 && !visit[i]){
                visit[i] = 1;
                printf("move %d to %d\n", v, i);
                queue[rear++] = i;
            }
        }
    }
}

int main(void){
    int start;
    int v1, v2;

    scanf("%d%d", &n, &start);
    
    while(1){
        scanf("%d%d", &v1, &v2);

        if(v1 == -1 && v2 == -1){
            break;
        }

        map[v1][v2] = map[v2][v1] = 1;
    }

    printf("BFS Start!!\n\n");

    bfs(start);

    return 0;
}