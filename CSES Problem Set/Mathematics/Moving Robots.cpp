#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
// #define double float
 
vector<vector<int>> adj={{0,-1},{0,1},{1,0},{-1,0}};
void test_case(){
    vector<vector<double>> fgrid(8,vector<double>(8,1));
    int n;cin>>n;
 
    for(int a=0;a<8;a++){
        for(int b=0;b<8;b++){
            vector<vector<double>> grid(8,vector<double>(8,0));
            grid[a][b]=1;
            for(int i=0;i<n;i++){
                double cnt=0;
                vector<vector<double>> ngrid(8,vector<double>(8,0));
                for(int x=0;x<8;x++){
                    for(int y=0;y<8;y++){
                        int cnt=0;
                        for(auto v:adj){
                            if(x+v[0]<8 and 0<=x+v[0]
                                and y+v[1]<8 and 0<=y+v[1]){
                                cnt+=1;
                            }
                        }
                        for(auto v:adj){
                            if(x+v[0]<8 and 0<=x+v[0]
                                and y+v[1]<8 and 0<=y+v[1]){
                                ngrid[x+v[0]][y+v[1]]+=grid[x][y]/cnt;
                            }
                        }
                    }
                }
                grid=ngrid;
            }
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    // cout<<grid[i][j]<<' ';
                    fgrid[i][j]*=(1-grid[i][j]);
                }
                // cout<<'\n';
            }
        }
    }
    double ans=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            ans+=fgrid[i][j];
    
        }
    }
    printf("%.6f\n",ans);
 
 
            
}
 
 
int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        test_case();
    }
}