#include <bits/stdc++.h>
using namespace std;
int board[11][11];
bool isPossible(int n, int row, int col){
    // upper column check
    for(int i = row -1; i >= 0 ; i--){
        if(board[i][col] == 1){
            return false;
        }
    }
    // upper left diagnal check
    for(int i = row - 1, j = col -1; i >= 0 && j >= 0; i--,j--){
        if(board[i][j] == 1){
            return false;
        }
    }
    //upper right diagnal check
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 1){
            return false;
        }
    }
    return true;    
}


void NQueenPlaceholder(int n, int row){

    if(row == n){
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < n; j++){
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
    // Go for all possible solutions
    for(int col = 0; col < n; col++){
        if(isPossible(n,row,col)){
            board[row][col] = 1;
            NQueenPlaceholder(n, row + 1);
            board[row][col] = 0;
        }
    }
}
void placeNQueens(int n){
    NQueenPlaceholder(n,0);
}
int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}