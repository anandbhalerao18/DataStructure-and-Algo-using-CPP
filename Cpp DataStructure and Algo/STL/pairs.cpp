#include <bits/stdc++.h>
#include <math.h>
#include <string.h>

using namespace std;

int main(){
    cout<<"hello world"<<endl;
}

// Pairs 
void explainPair(){

    pair<int, int>  p = {1, 3};
    cout<< p.first << " " << p.second;
    pair<int, pair<int , int>> q = { 3, {4, 5}};
    cout<< q.first << " " << q.second.second << " " << q.second.first ;
    pair <int,int> arr[] = {{1,2}, {2,5}, {4,6}, {5,9} }; 
    // index nos ==>         0       1      2      3
    cout << arr[1].second;
}