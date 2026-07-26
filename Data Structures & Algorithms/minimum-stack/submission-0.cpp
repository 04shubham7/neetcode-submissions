class MinStack {
private:
    stack<long long>st;
    long long min;
public:
    MinStack() {
        min=LLONG_MAX;
    }
    
    void push(int val) {
        if(st.empty()){
            min=val;
            st.push(val);
        }else{
            if(val>min){
                st.push(val);
            }else{
             st.push(2LL*val-min); min=val;
            }    
        }
    }
    
    void pop() {
        if(st.empty()){
            return;
        }else{
            long long x=st.top();
            st.pop();
            if(x<min){
                min=2LL*min-x;
            }
        }
    }
    
    int top() {
        if(st.empty()){
            return 0;
        }else{
            long long x=st.top();
            if(min<x){
                return x;
            }else{
                return min;
            }
        }
    }
    
    int getMin() {
        return min;
    }
};
