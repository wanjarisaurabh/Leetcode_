/* creat a map and upload with frequency 
creat a ans string 
creat a priority queue 
push all element 
ans took top element of pq and push element acoding frequency
*/

class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;

        for(int i =0; i < s.size(); i++){
            mp[s[i]]++;

        }

        string ans = "";
        priority_queue<pair<int,char>> pq;

        for(auto i : mp){

            pq.push({i.second,i.first});

        }

        while(!pq.empty()){
            int m = pq.top().first;
            while(m--){
                ans += pq.top().second;
            }

            pq.pop();
        }
        return ans;

    }
};