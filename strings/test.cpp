#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    static int dfs(vector<vector<int>>& grid,int x,int y){
        if(grid[x][y] == 1){
            grid[x][y] = 0;
        }
        else{
            return 0;
        }
        return 1+dfs(grid,x,y+1)+dfs(grid,x+1,y);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        for(int i = 0;i < grid.size();++i){
            for(int j = 0;j < grid[i].size();++j){
                int ret = 0;
                ret = dfs( grid,i,j );
                if(ret > max){
                    max = ret;
                }
            }
        }
        return max;
    }
};






int main(void){
    vector<vector<int>> test = {{10,10,10,10},{100,100,100,100}};
    printf("%d\n",test.size());
    printf("%d\n",test[0].size());
    Solution solution;
    int ret = solution.maxAreaOfIsland(test);
    printf("%d",ret);
    return 0;
}
