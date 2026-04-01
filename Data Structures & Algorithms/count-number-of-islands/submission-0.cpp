class Solution {
public:
   void dfs(vector<vector<char>>&grid,int u,int v){
       
    int n=grid.size();
    int m=grid[0].size();
    if(u<0 || v<0|| u>=n || v>=m || grid[u][v]=='0') return ;
    else{
        grid[u][v]='0';
        dfs(grid,u+1,v);
        dfs(grid,u,v+1);
        dfs(grid,u,v-1);
        dfs(grid,u-1,v);

    }


   }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
           if(grid[i][j]=='1'){
              ans++;
              dfs(grid,i,j);}
            }
        }
        return ans;     
    }
};
