#include <iostream>
#include <vector>

using namespace std;

int bfs(int m, int n);
void enqueue(int x, int y);
int zero_count = 0;

vector<int> x_queue;
vector<int> y_queue;

int main(void){
    int m, n;

    // cin >> m >> n;
    // cout << bfs(m, n) << endl;

    scanf("%d %d", &m, &n);
    printf("%d", bfs(m,n));

    return 0;
}

int bfs(int m, int n){
    int i, j;
    int temp;
    int x_pos, y_pos;
    int day = 0;

    vector<int> map[n];

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
        //    cin >> temp;
            scanf("%d", &temp);
            map[i].push_back(temp);
           
            if(temp == 1){
               enqueue(i, j);
            } 
            if(temp == 0){
               zero_count++;
            }
        } 
    }
    
    while(1){
        int queue_size = x_queue.size();
        
        if(queue_size == 0){
            if(zero_count != 0){
                return -1;
            }
            return day-1;
        }

        for(i = 0; i < queue_size; i++){
            x_pos = x_queue.front();
            y_pos = y_queue.front();

            x_queue.erase(x_queue.begin());
            y_queue.erase(y_queue.begin());

            //move right
            if(x_pos < m-1 && map[y_pos][x_pos+1] == 0){
                enqueue(y_pos, x_pos+1);
                map[y_pos][x_pos+1] = 1;
                zero_count--;
            }

            //move left
            if(x_pos > 0 && map[y_pos][x_pos-1] == 0){
                enqueue(y_pos, x_pos-1);
                map[y_pos][x_pos-1] = 1;
                zero_count--;
            }

            //move down
            if(y_pos < n-1 && map[y_pos+1][x_pos] == 0){
                enqueue(y_pos+1, x_pos);
                map[y_pos+1][x_pos] = 1;
                zero_count--;
            }

            //move up
            if(y_pos > 0 && map[y_pos-1][x_pos] == 0){
                enqueue(y_pos-1, x_pos);
                map[y_pos-1][x_pos] = 1;
                zero_count--;
            }
        }
        day++;
    }
}

void enqueue(int y, int x){
    x_queue.push_back(x);
    y_queue.push_back(y);
}