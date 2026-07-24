class Solution {
public:

    bool parenthetis_closing(char a, char b){
        
        if(a == '(' && b == ')'){
            return true;
        }

        if(a == '{' && b == '}'){
            return true;
        }

        if(a == '[' && b == ']'){
            return true;
        }

        return false;

    }

    bool isValid(string s) {
        stack <char> parenthesis_check;

        for(int index=0; index<s.length(); index++){
            if(parenthesis_check.empty()){
                parenthesis_check.push(s[index]);
                continue;
            }

            if(parenthetis_closing(parenthesis_check.top(), s[index])){
                parenthesis_check.pop();
            } else {
                parenthesis_check.push(s[index]);
            }
        }

        if(parenthesis_check.empty()){
            return true;
        }

        return false;
    }
};
