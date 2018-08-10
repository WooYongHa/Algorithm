#include <iostream>
#include <vector>

using namespace std;

void solve_sudoku(void);
void check_one(void);
void check_all(void);
int not_zero(void);
void check_vertical(int s, int x, int y);
void check_horizontal(int s, int x, int y);
void check_matrix(void);

struct zero_pos{
    int solved;
    int x_pos;
    int y_pos;
};

int map[9][9];
int number_array[10] = {0,9,9,9,9,9,9,9,9,9};
int number[9];

vector<struct zero_pos> zero_array;

int main(void){
    int i, j;
    int temp;

    zero_pos pos;

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            cin >> temp; 
            map[i][j] = temp;
            number_array[temp] -= 1;

            if(temp == 0){
                pos.x_pos = j;
                pos.y_pos = i;
                pos.solved = 0;

                zero_array.push_back(pos);
            }
        }
    }

    cout << '\n';
    solve_sudoku();

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }

    cout << '\n';

    for(i = 0; i < 9; i++){
        cout << number[i] << " ";
    }

    return 0;
}

void solve_sudoku(void){
    check_one();
    // check_matrix();
}

int not_zero(void){
    int i;
    int result;

    for(i = 0; i < 9; i++){
        if(number[i] == 0){
            result = i;
        } else {
            number[i] = 0;
        }
    }

    return result;
}

void check_vertical(int s, int x, int y){
    int i;
    int count = 0;

    for(i = 0; i < 9; i++){    
        if(map[i][x] == 0){
            count++;
        }
    }

    if(count >= 2){
        return;
    } else {
        for(i = 0; i < 9; i++){
            if(map[i][x] != 0){
                number[map[i][x]-1] = 1;
            }
        }
        map[y][x] = not_zero()+1;
        zero_array[s].solved = 1;
    }
}

void check_horizontal(int s, int x, int y){
    int i;
    int count = 0;

    for(i = 0; i < 9; i++){    
        if(map[y][i] == 0){
            count++;
        }
    }

    if(count >= 2){
        return;
    } else {
        for(i = 0; i < 9; i++){
            if(map[y][i] != 0){
                number[map[y][i]-1] = 1;
            }
        }
        map[y][x] = not_zero()+1;
        zero_array[s].solved = 1;
    }
}

void check_one(void){
    int i, j;
    int x, y;

    for(i = 0; i < zero_array.size(); i++){
        x = zero_array[i].x_pos;
        y = zero_array[i].y_pos;

        //vertical
        if(zero_array[i].solved == 0){
            check_vertical(i, x, y);
        }
        //horizontal
        if(zero_array[i].solved == 0){
            check_horizontal(i, x, y);
        }
    }
}

void check_matrix(void){
    int i, j, n;
    int x, y;

    for(n = 0; n < zero_array.size(); n++){
        int count = 0;

        if(zero_array[i].solved == 0){
            x = zero_array[i].x_pos;
            y = zero_array[i].y_pos;
        
            if(x <= 2) j = 0;
            if(x >= 3 && x <= 5) j = 3;
            if(x >= 6) j = 6;

            if(y <= 2) i = 0;
            if(y >= 3 && y <= 5) i = 3;
            if(y >= 6) i = 6;

            for(; i < i+3; i++){
                for(j; j < j+3; j++){
                    if(map[i][j] == 0){
                        count++;
                    }
                }
            }

            if(x <= 2) j = 0;
            if(x >= 3 && x <= 5) j = 3;
            if(x >= 6) j = 6;

            if(y <= 2) i = 0;
            if(y >= 3 && y <= 5) i = 3;
            if(y >= 6) i = 6;

            cout << "count "  << count << endl; 
            
            if(count >= 2){
                return;
            } else {
                for(; i < i+3; i++){
                    for(j; j < j+3; j++){
                        if(map[i][j] != 0){
                            number[map[i][j]-1] = 1;
                        }
                    }
                }

                map[y][x] = not_zero()+1;
                zero_array[n].solved = 1;                  
            }
        }
    }
}