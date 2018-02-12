#include <iostream>
#include <vector>

using namespace std;


bool givenPointFindPaths(int px, int py, int x,int y);
int field[4][5] = {{1,1,1,0,0},
                   {0,1,0,0,0},
                   {1,1,9,0,1},
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
}
