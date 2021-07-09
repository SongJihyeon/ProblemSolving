//프로그래머스 스킬트리 
//C++

#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    bool flag;
    int tmp=0;
    map<char, int> skill_tree;
    
    for (int i = 0; i < skill.size(); i++) { 
        skill_tree.insert(make_pair(skill[i] , i+1)); 
    }
    
    for(int i=0; i<skill_trees.size(); i++){
        tmp = 1;
        flag = true;
       for(int j=0; j<skill_trees[i].size(); j++){
           auto num = skill_tree[skill_trees[i][j]];
           if(num >tmp){
               flag = false;
               break;
           }
           else if(num == tmp){
               tmp++;
           }
       }
        if(flag == true){
            answer++;
        }
    }
    
    return answer;
}