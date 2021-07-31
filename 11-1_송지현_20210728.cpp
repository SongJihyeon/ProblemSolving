//LeetCode
//463. Island Perimeter
//C++

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result= 0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]!=0){
                    if(i>0){
                      if(grid[i-1][j] != 1){
                       result += 1;
                      }   
                    } else if(i==0){
                        result += 1;
                    }
                    if(i<grid.size()-1){
                      if(grid[i+1][j] != 1){
                       result += 1;
                      } 
                    } else if(i==grid.size()-1){
                       result += 1;
                    }  
                    if(j>0){
                      if(grid[i][j-1] != 1){
                        result += 1;
                     }
                    } else if(j==0){
                        result += 1;
                    } 
                    if(j<grid[0].size()-1){
                      if(grid[i][j+1] != 1){
                        result += 1;
                      }
                    } else if(j==grid[0].size()-1){
                        result += 1;
                    }
                }
            }
        }
        return result;
    }
};