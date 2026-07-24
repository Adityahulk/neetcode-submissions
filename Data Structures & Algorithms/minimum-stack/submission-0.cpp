class MinStack {
public:

    vector <int> vector_stack;
    vector <int> min_vector_stack;

    MinStack() {
        vector <int> new_empty_vector;
        vector_stack = new_empty_vector;

        vector <int> new_min_vector;
        min_vector_stack = new_min_vector;
    }
    
    void push(int val) {
        vector_stack.push_back(val);

        if(min_vector_stack.size() == 0){
            min_vector_stack.push_back(val);
        }else {
            int min_val = min(min_vector_stack[min_vector_stack.size() - 1], val);
            min_vector_stack.push_back(min_val);
        }

    }
    
    void pop() {
        vector_stack.pop_back();
        min_vector_stack.pop_back();
    }
    
    int top() {
        int vector_size = vector_stack.size();
        return vector_stack[vector_size - 1];
    }
    
    int getMin() {
        int vector_size = min_vector_stack.size();
        return min_vector_stack[vector_size - 1];
    }
};
