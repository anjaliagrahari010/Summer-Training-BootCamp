#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>mat(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    char choice;
    cin>>choice;
    int pos;
    cin>>pos;
    if(choice=='R'||choice=='r'){
        vector<int>newRow(c);
        for(int i=0;i<c;i++){
            cin>>newRow[i];
        }
        mat.insert(mat.begin()+pos,newRow);
    }
    else if(choice=='C'||choice=='c'){
        vector<int>newColumn(r);
        for(int i=0;i<r;i++){
            cin>>newColumn[i];
        }
        for(int i = 0; i < r; i++) {
            mat[i].insert(mat[i].begin() + pos, newColumn[i]);
        }
    }
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}