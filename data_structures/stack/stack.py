class StackArray:
    def __init__(self):
        self.stack = []



    def add(self, data):
        self.stack.append(data)

    def delete(self):
        if not self.stack:  
            print("stack is empty")
            return None
        return self.stack.pop()




    def top(self):
        if not self.stack:
            print("stack is empty")
            return None
        return self.stack[-1]


    def display(self):
        if not self.stack:
            print("Stack is empty")
            return
        for i in range(len(self.stack) - 1,-1,-1): 
            print(self.stack[i], end=" -> ")
        print("end of stack")
        
        


stack_arr = StackArray()
stack_arr.add(10)
stack_arr.add(2)
stack_arr.add(18)
print("top", stack_arr.top()) 
stack_arr.display()
