class Solution {
public:
    string interpret(string command) {
        int n = command.size();

        string ans = "";
        int i = 0;
        for(int i=0;i<n;i++){
            if(command[i] == 'G'){
                ans += command[i];
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                ans += 'o';
            }
            else if(command[i] == '(' && command[i+1] != ')'){
                ans += "al";
                i += 3;
            }
        }
        return ans;
    }
};