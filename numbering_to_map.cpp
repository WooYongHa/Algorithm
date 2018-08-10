#include <iostream>
#include <vector>

using namespace std;

void dfs(struct numbering pos);

struct numbering{
    int xpos;
    int ypos;
};

int n;
int map[25][25];
int count;
vector<int> count_array;

int main(void){
    int i, j;
    
    cin >> n;
    
    /*
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }
    */
    
    struct numbering pos;
    pos.xpos = 1;
    pos.ypos = 1;

    dfs(pos);
    
    return 0;
}

void dfs(struct numbering pos){
    if(pos.xpos == n-1 && pos.ypos == n-1){
        return;
    }

    if( map[pos.ypos][pos.xpos] == 1){
        
    }

    map[pos.ypos][pos.xpos] = -1;

    //move right
    if(map[pos.ypos][pos.xpos+1] == 1){

    }
    //move left

    //move up

    //move down



}

/*
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << " ij " << i << j << " " << map[i][j] << endl;
        }
    }
    */