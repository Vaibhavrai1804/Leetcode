class Solution {
public:
    string removeOccurrences(string s, string part) {
        int st=s.find(part);
        int end =part.size();
        //part is valid or not 
        if(s.find(part)<s.size()){
            s.erase(st,end);
            return removeOccurrences(s,part);


        }
        
    return s;
    }
};