class Solution {
public:
    vector<pair<int,int>>dir = {{0,1},{1,0},{0,-1},{-1,0}};
    int minPushBox(vector<vector<char>>& grid) {
        int sx = -1;
        int sy = -1;
        int bx = -1;
        int by = -1;
        int tx = -1;
        int ty = -1;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='B'){
                    bx = i;
                    by = j;
                }
                if(grid[i][j]=='S'){
                    sx = i;
                    sy = j;
                }
                if(grid[i][j]=='T'){
                    tx = i;
                    ty = j;
                }
            }
        }
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        pq.push({0,sx,sy,bx,by});
        int dist[20][20][20][20];
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                for(int k=0;k<20;k++){
                    for(int l=0;l<20;l++){
                        dist[i][j][k][l] = 1e9;
                    }
                }
            }
        }
        dist[sx][sy][bx][by] = 0;
        int count = 0;
        while(!pq.empty()){
            auto curr = pq.top();
            count++;
            pq.pop();
            int d = curr[0];
            int x = curr[1];
            int y = curr[2];
            int cbx = curr[3];
            int cby = curr[4];
            if(cbx==tx and cby==ty) return d;
            for(int i=0;i<4;i++){
                int nx = x + dir[i].first;
                int ny = y + dir[i].second;
                if(nx<0 or ny<0 or nx>=n or ny>=m) continue;
                if(grid[nx][ny]=='#') continue;
                else if(nx==cbx and ny==cby){
                    int nbx = cbx + dir[i].first;
                    int nby = cby + dir[i].second;
                    if(nbx<0 or nby<0 or nbx>=n or nby>=m or grid[nbx][nby]=='#') continue;
                    if(dist[nx][ny][nbx][nby]>d+1){
                        pq.push({d+1,nx,ny,nbx,nby});
                        dist[nx][ny][nbx][nby]=d+1;
                    }
                }
                else{
                    if(dist[nx][ny][cbx][cby]>d){
                        pq.push({d,nx,ny,cbx,cby});
                        dist[nx][ny][cbx][cby] = d;
                    }
                }
            }
        }
        return -1;
    }
};