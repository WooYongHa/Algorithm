#include <iostream>
#include <vector>

using namespace std;

struct color_info{
    int x_pos;
    int y_pos;
    int value;
};

int* coloring(int m, int n);
void push_check(int i, int j);
void bfs_search(struct color_info v, int m, int n);

int picture[100][100];
int answer[2];
int count = 1;

vector<struct color_info> color;

int main(void){
    int i, j;
    int m, n;

    cin >> m >> n;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cin >> picture[i][j];
        }
    }

    coloring(m,n);

    /*
    for(i = 0; i < color.size(); i++){
        cout << "x_pos " << color[i].x_pos << endl;
        cout << "y_pos " << color[i].y_pos << endl;
        cout << "value " << color[i].value << endl;
    } 
    */   

    return 0;
}

int* coloring(int m, int n){
    int i, j;
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(picture[i][j] != 0){
                push_check(i, j);
            }
        }
    }    

    for(i = 0; i < color.size(); i++){
        bfs_search(color[i], m, n);
    }

    answer[0] = color.size();

    return answer;
}

void push_check(int m, int n){
    int i;
    struct color_info temp;

    for(i = 0; i < color.size(); i++){
        if(picture[m][n] == color[i].value){
            return;         
        }
    }

    temp.x_pos = n;
    temp.y_pos = m;
    temp.value = picture[m][n];

    color.push_back(temp);
}

void bfs_search(struct color_info v, int m, int n){
    int i;
    int x, y;

    cout << "Value " << v.value << endl;    

    vector<int> queue_x;
    vector<int> queue_y;

    queue_x.push_back(v.x_pos);
    queue_y.push_back(v.y_pos);

    while(1){
        int q_size = queue_x.size();
        
        if(q_size == 0){
            break;
        }

        for(i = 0; i < q_size; i++){
            x = queue_x.front();
            y = queue_y.front();

            queue_x.erase(queue_x.begin());
            queue_y.erase(queue_y.begin());

            //move right
            if(x < n && picture[y][x+1] == v.value){
                cout << "right" << endl;
                queue_y.push_back(y);
                queue_x.push_back(x+1);
                picture[y][x+1] = 0;
                count++;
            }
            //move down
            if(y < m && picture[y+1][x] == v.value){
                cout << "down" << endl;
                queue_y.push_back(y+1);
                queue_x.push_back(x);
                picture[y+1][x] = 0;
                count++;
            }
            //move left
            if(x > 0 && picture[y][x-1] == v.value){
                cout << "left" << endl;
                queue_y.push_back(y);
                queue_x.push_back(x-1);
                picture[y][x-1] = 0;
                count++;
            }
        }
    }

    cout << count << endl;
    count = 0;
}
   
