class Stack:
    def __init__(self):
        self.items=[]

    def push(self,x):
        self.items.append(x)

    def pop(self):
        return self.items.pop()

    def isempty(self):
        return len(self.items)==0 
    
    
class Solution:
    def isValid(self, s: str) -> bool:
        stack = Stack()
        pairs = {'(':')',
                '{':'}',
                '[':']'}

        for ch in s:
            if ch in pairs:
                stack.push(ch)
            else:
                if stack.isempty() or pairs[stack.pop()]!=ch:
                    return False

        return stack.isempty()
            
        