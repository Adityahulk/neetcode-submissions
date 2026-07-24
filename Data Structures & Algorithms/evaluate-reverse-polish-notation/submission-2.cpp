class Solution {
public:

    using ll = long long;
    using pii = pair<int,int>;
    using vi = vector<int>;
    using vvi = vector<vector<int>>;

    bool isOperator(string symb){
        
        if(symb == "+" || symb == "-" || symb == "*" || symb == "/"){
            return true;
        }

        return false;

    }

    ll calculate(string a, string b, string symb){
        ll a_num = stoll(a);
        ll b_num = stoll(b);

        if(symb == "+"){
            return a_num + b_num;
        }

        if(symb == "-"){
            return b_num - a_num;
        }

        if(symb == "*"){
            return a_num * b_num;
        }

        return b_num/a_num;

    }

    int evalRPN(vector<string>& tokens) {
        stack <string> math_stack;

        for(string &arith_sym: tokens){
            if(!isOperator(arith_sym)){
                math_stack.push(arith_sym);
            }else{
                string val1 = math_stack.top();
                math_stack.pop();
                string val2 = math_stack.top();
                math_stack.pop();
                ll calculated_val = calculate(val1, val2, arith_sym);
                math_stack.push(to_string(calculated_val));
            }
        }

        return stoll(math_stack.top());
    }
};
