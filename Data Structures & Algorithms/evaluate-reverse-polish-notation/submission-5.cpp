class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> op;
        for(auto& t: tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/"){
                int op1;
                int op2;
                int res;
                op1 = op.top();
                op.pop();
                op2 = op.top();
                op.pop();
                switch(t[0]){
                    case '+':
                        res = op1 + op2;
                        break;
                    case '-':
                        res = op2 - op1;
                        break;
                    case '*':
                        res = op1 * op2;
                        break;
                    case '/':
                        res = op2 / op1;
                        break;
                }
                op.push(res);
            }else{
                op.push(stoi(t));
            }
        }
        return op.top();
    }
};
