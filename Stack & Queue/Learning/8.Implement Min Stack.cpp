/* Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class: */

class MinStack {
public:
    stack<long long> s;
    long long mini; 
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        long long value = val;
        if(s.empty()){
            mini=value;
            s.push(value);
        }
        else{
            if(value<mini){
                s.push(2*value-mini);
                mini =value;
            }
            else{
                s.push(value);
            }
        }
    }
    
    void pop() {
        long long curr = s.top();
        s.pop();
        if(curr<mini){
            mini=2*mini-curr;
        }
    }
    
    int top() {
        long long curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }
    
    int getMin() {
        return mini;
    }
};

/* Push operation:

Now if there is a push operation just check whether that number is less than the min number. If it is smaller than min we will push a modified value which is a push(2 * Val – min) into the stack and will update min to the value of the original number. If it’s not then we will just push it as it is.

getMin() operation:

We will just return the value of min.

Top operation:

While returning the top value we know that it is a modified value. We will check if the top value is lesser than min, If it is then we will return the min as the top value.

Pop operation:

While making pop we will check if the top value is lesser than min, If it is then we must update our min to its previous value. In order to do that min = (2 * min) – (modified value) and we will pop the element. */