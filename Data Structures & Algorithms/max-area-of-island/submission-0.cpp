class Solution {
public:
int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis)
 { 
    int n=grid.size();
    int m=grid[0].size();
    vis[i][j]=0;
    int area=1;
    int dr[]={-1,1,0,0};
    int dc[]={0,0,-1,1};
    for(int ind=0;ind<4;ind++){
        int nr=i+dr[ind];
        int nc=j+dc[ind];
    if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==-1){
     area+=dfs(nr,nc,grid,vis);
     
    }    
    }
    return area;
 } 
   int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        //int temp;
        vector<vector<int>>vis(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==-1 && grid[i][j]==1){
                    int temp=dfs(i,j,grid,vis);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
};
