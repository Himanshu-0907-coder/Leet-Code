class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        return (s+s).find(goal) != string::npos;
        // bool flag = false;  // 59/62 cases passed
        // string temp = "";
        // string t = "";
        // temp = s + s;
        // int j = 0;
        // for(int i=0;i<temp.size();i++){
        //     if(temp[i] == goal[j]){
        //         t += goal[j];
        //         j++;
        //     }
        //     else{
        //         t = "";
        //         j = 0;
        //         if(temp[i] == goal[0]){
        //             t += temp[i];
        //             j = 1;
        //         }
        //     }
        //     if(t == goal){
        //         flag = true;
        //         break;
        //     }
        // }

        // if(flag == true) return true;
        // return false;
    }
};