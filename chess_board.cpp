#include <iostream>

using namespace std;

char toggle_put(void);

char map[50][50];
char mask_1[8][8];
char mask_2[8][8];

int toggle = 1;

int main(void){
    int i, j;
    int n, m;
    
    cin >> n >> m;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> map[i][j];
        }
    }
    
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            mask_1[i][j] = toggle_put();
        }
        toggle_put();
    }

    toggle_put();
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            mask_2[i][j] = toggle_put();
        }
        toggle_put();
    }
    
    int a = 0;
    int b = 0;
    int count_1 = 0;
    int count_2 = 0;
    int min = 64;

    while (a < n - 7){
        while(b < m - 7){
            for(i = a; i < a + 8; i++){
                for(j = b; j < b + 8; j++){
                    if(mask_1[i-a][j-b] != map[i][j]){
                        count_1++;      
                    }

                    if(mask_2[i-a][j-b] != map[i][j]){
                        count_2++;
                    }
                }
            }

            if(min > count_1){
                min = count_1;
            }
            if(min > count_2){
                min = count_2;
            }
            count_1 = 0;
            count_2 = 0;
            b++;
        }
        b = 0;
        a++;
    }

    cout << min << endl;
}

char toggle_put(void){
    if(toggle){
        toggle = 0;
        return 'W';
    } else {
        toggle = 1;
        return 'B';
    }
}

