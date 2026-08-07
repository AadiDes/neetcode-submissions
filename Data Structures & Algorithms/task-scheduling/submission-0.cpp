class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int timer=0;
        vector<int> count(26,0);
        for(char task: tasks){
            count[task-'A']++;
        }

        priority_queue<int> maxH;
        for(int c: count){
            if(c>0){
                maxH.push(c);
            }
        }

        queue<pair<int,int>> q;
        while(!maxH.empty() || !q.empty()){
            timer++;

            if(maxH.empty()){
                timer=q.front().second;
            } else{
                int cnt= maxH.top()-1;
                maxH.pop();
                if(cnt>0){
                    q.push({cnt, timer+n});
                }
            }
            if(!q.empty() && q.front().second==timer){
                maxH.push(q.front().first);
                q.pop();
            }
        }
        return timer;

    }
};
