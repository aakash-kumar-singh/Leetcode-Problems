class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int m=trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0;
        int j=0;
        for(int i=0;i<n;i++){
            for(j;j<m;j++){
                if(players[i]<=trainers[j]){
                    count++;
                    j=j+1;
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return count;
    }
};