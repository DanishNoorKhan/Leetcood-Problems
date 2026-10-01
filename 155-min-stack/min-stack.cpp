class MinStack {
public:
    vector<int> ans;
    vector<int> minis;
    MinStack() {
        ans.clear();
    }
    
    void push(int value) {
        ans.push_back(value);
        
        if(minis.empty()){
            minis.push_back(value);
        }
        else{
            minis.push_back(min(value, minis.back()));
        }
    }
    
    void pop() {
        ans.pop_back();
        minis.pop_back();
    }
    
    int top() {
        return ans.back();
    }
    
    int getMin() {
        return minis.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */