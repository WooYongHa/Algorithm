#include <iostream>
#include <vector>

using namespace std;

int visit[1000001];

int bfs(int seek_pos, int hide_pos);

int main(void){
    int seek_pos, hide_pos;

    cin >> seek_pos >> hide_pos;

    // cout << bfs(seek_pos, hide_pos) << endl;
    bfs(seek_pos, hide_pos);

    return 0;
}

int bfs(int seek_pos, int hide_pos){
    int count = 0;

    vector<int> queue;
    queue.push_back(seek_pos);

    while(1){
        int i;
        int queue_size = queue.size();

        for(i = 0; i < queue_size; i++){
            seek_pos = queue.front();
            queue.erase(queue.begin());

            if(seek_pos == hide_pos){
                return count;
            }
            
            if(seek_pos > 0 && visit[seek_pos-1] == 0){
                queue.push_back(seek_pos-1);
                visit[seek_pos-1] = 1;
            }

            if(seek_pos < 1000000 && visit[seek_pos+1] == 0){
                queue.push_back(seek_pos+1);
                visit[seek_pos+1] = 1;
            }

            if(seek_pos*2 <= 1000000 && visit[seek_pos*2] == 0){
                queue.push_back(seek_pos*2);
                visit[seek_pos*2] = 1;
            }
        }
        count++;
    }
}
