class Solution {
public:
    bool isValid(string s) {
        int n =s.size();
        vector<char> new_string;
        if(n==0){
            return true;
        }
        else if(n==1){
            return false;;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='(' ||s[i]=='[' || s[i]=='{'){
                new_string.push_back(s[i]);
            }
            else {
                if(new_string.empty()){
                    return false;
                }
                if(s[i]==')'){
                    if(new_string.back()=='('){
                        new_string.erase(new_string.end());
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i]=='}') {
                    if(new_string.back()=='{'){
                        new_string.erase(new_string.end());
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i]==']') {
                    if(new_string.back()=='['){
                        new_string.pop_back();
                    }
                    else{
                        return false;
                    }
                }


            }
        }
        return (new_string.size()==0);
            
        
        
        
    }
};