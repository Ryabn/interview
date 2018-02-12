#include <iostream>
#include <vector>

using namespace std;


bool givenPointFindPaths(int px, int py, int x,int y);
int field[4][5] = {{1,1,1,0,0},
                   {0,1,0,0,0},
                   {1,1,9,0,0},
                   {1,0,1,0,1}};

vector< vector< int > > nodes;

int main(){
    givenPointFindPaths(0,0,0,0);
    return 0;
}

bool givenPointFindPaths(int px, int py, int x,int y){
    cout << x << y << endl;
    //path available going up
    if(x != 0 && field[x-1][y] != 0 && x-1 != px){
        if(field[x-1][y] == 9){
            cout << x-1 << y << "Found" << endl;
            return true;
        }
        else{
            givenPointFindPaths(x,y,x-1,y);
        }
    }
    // " "down
    if(x != 3 && field[x+1][y] != 0 && x+1 != px){
        if(field[x+1][y] == 9){
            cout << x+1 << y << "Found" << endl;
            return true;
        }
        else{
            givenPointFindPaths(x,y,x+1,y);
        }
    }
    // " " left
    if(y != 0 && field[x][y-1] != 0 && y-1 != py){
        if(field[x][y-1] == 9){
            cout << x << y-1 << "Found" << endl;
            return true;
        }
        else{
            givenPointFindPaths(x,y,x,y-1);
        }
    }
    // " " right
    if(y != 4 && field[x][y+1] != 0 && y+1 != py){
        if(field[x][y+1] == 9){
            cout << x << y+1 << "Found" << endl;
            return true;
        }
        else{
            givenPointFindPaths(x,y,x,y+1);
        }
    }
    cout << endl;
}

/*
#include <iostream>

using namespace std;


void findPair(int test[4], int &small, int &big, int sum);

int main(){
    int test[4] = {1,2,3,9};
    int test2[4] = {1,2,4,4};

    int sum = 8, small = 0, big = 0;

    findPair(test, small, big, sum);


    findPair(test2, small, big, sum);

    return 0;
}

void findPair(int test[4], int &small, int &big, int sum){
    small = 0; big = 3;
    bool pairNotFound = true;
    while(pairNotFound){
        if(small == big){
                cout << "nothing"<< endl;
                pairNotFound = false;
        }else if(test[small] + test[big] == sum){
            cout << test[small] << test[big] <<  endl;
            pairNotFound = false;

        }else if(test[small] + test[big] > sum){
            big--;
        }else{
            small++;
        }
    }
}
*/
