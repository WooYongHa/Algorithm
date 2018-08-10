#include <stdio.h>

int n, count;
int map[4][4];
int x[16], y[16], l[16];

void enqueue(int _x, int _y, int _l){
    x[count] = _x;
    y[count] = _y;
    l[count] = _l;
    count++; 
}

void bfs(int _x, int _y){
    int pos = 0;

    enqueue(_x, _y, 0); //start position

    while(pos < count && (x[pos] != n-1 || y[pos] != n-1)){
        //already pass position
        map[y[pos]][x[pos]] = 0;

        //move up
        if(y[pos] > 0 && map[y[pos-1]][x[pos]] == 1){
            printf("move up\n");
            enqueue(x[pos], y[pos]-1, l[pos]+1);
        }
        //move down
        if(y[pos] < n-1 && map[y[pos]+1][x[pos]] == 1){
            printf("move down\n");
            enqueue(x[pos], y[pos]+1, l[pos]+1);
        }
        //move left
        if(x[pos] > 0 && map[y[pos]][x[pos]-1] == 1){
            printf("move left\n");
            enqueue(x[pos]-1, y[pos], l[pos]+1);
        }
        //move right
        if(x[pos] < n-1 && map[y[pos]][x[pos]+1] == 1){
            printf("move right\n");
            enqueue(x[pos]+1, y[pos], l[pos]+1);
        }

        //next position
        pos++;
    }

    // printf("pos %d count %d\n", pos, count);

    if(pos < count){
        printf("Shortest distance: %d\n", l[pos]);
    }
}

int main(void){
    int i, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &map[i][j]);
        }
    }

    printf("\nStart BFS\n\n");

    bfs(0,0);

    return 0;
}