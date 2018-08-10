#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct vertex_info{
    int point;
    int x_pos;
    int y_pos;
};

struct query_info{
    int a;
    int b;
    int x;
};

vector<struct vertex_info> vertex;

double distance(int a, int b){
    int x1 = vertex[a-1].x_pos;
    int y1 = vertex[a-1].y_pos;
    int x2 = vertex[b-1].x_pos;
    int y2 = vertex[b-1].y_pos;

    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}

string execute_query(struct query_info query){
    int i, j;
    int x = 0;
    int booster = 0;
    double max_x = query.x;
    int q_vertex;

    //destination -> query.b
    //start -> query.a

    vector<int> queue;
    queue.push_back(query.a);

    int visit[vertex.size()];
        
    for(i = 0; i < vertex.size(); i++){
        visit[i] = 0;
    }

    while(1){
        int q_size = queue.size();

        if(q_size == 0){
            return "NO";
        }

        for(i = 0; i < queue.size(); i++){
            q_vertex = queue.front();
            queue.erase(queue.begin());
            queue.shrink_to_fit();

            visit[q_vertex-1] = 1;

            x = max_x;
            booster = 1;

            if(q_vertex ==  query.b){
                return "YES";
            }
                        
            if((vertex[q_vertex-1].x_pos == vertex[query.b-1].x_pos || 
                    vertex[q_vertex-1].y_pos == vertex[query.b-1].y_pos ) && booster == 1){
                return "YES";
            }

            for(j = 0; j < vertex.size(); j++){
                if(vertex[j].point == q_vertex && visit[vertex[j].point-1] == 1){
                    continue;
                }

                /*
                if(distance(q_vertex, vertex[j].point) <= max_x && visit[vertex[j].point-1] != 1){
                    queue.push_back(vertex[j].point);
                }
                */
                /*
                if((vertex[q_vertex-1].x_pos == vertex[j].x_pos || 
                    vertex[q_vertex-1].y_pos == vertex[j].y_pos ) && visit[vertex[j].point-1] != 1 && booster == 1){
                    queue.push_back(vertex[j].point);
                }
                */
            
                int dist1 = vertex[q_vertex-1].x_pos - vertex[j].x_pos;
                int dist2 = vertex[q_vertex-1].y_pos - vertex[j].y_pos;
                /*
                if((visit[vertex[j].point-1] != 1) && ((pow(dist1,2) <= pow(max_x,2) || pow(dist2,2) <= pow(max_x,2)) && booster == 1)){
                     queue.push_back(vertex[j].point);
                }
                */

                if((x >= abs(dist1) || x >= abs(dist2)) && booster == 1){
                     queue.push_back(vertex[j].point);
                }
            }      
        }    
    }
}

int main(void){
    int i;
    int n, q;

    vector<struct query_info> query;

    cin >> n >> q;

    for(i = 0; i < n; i++){
        struct vertex_info temp;
        temp.point = i+1;
        cin >> temp.x_pos;
        cin >> temp.y_pos;

        vertex.push_back(temp);
    }

    for(i = 0; i < q; i++){
        struct query_info temp;
        cin >> temp.a;
        cin >> temp.b;
        cin >> temp.x;

        query.push_back(temp);
    }

    for(i = 0; i < query.size(); i++){
        cout << execute_query(query[i]) << '\n';
    }
    
    return 0;
}