class MinStack {
    stack<pair<int,int>> q;
public:
    MinStack() {
    }
    void push(int val) {
      if(q.empty()){
        q.push({val,val});
        return;
      }
    int mini=min(getMin(),val);
    q.push({val,mini});
    }
    void pop() {
        q.pop();
    }
    int top() {
        return q.top().first;
    }
    int getMin() {
        return q.top().second;
    }
};