class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for st in tokens:
            if st == "+":
                b = stack.pop()
                a = stack.pop()
                stack.append(a+b)

            elif st == "-":
                b = stack.pop()
                a = stack.pop()
                stack.append(a-b)

            elif st == "*":
                b = stack.pop()
                a = stack.pop()
                stack.append(a*b)

            elif st == "/":
                b = stack.pop()
                a = stack.pop()
                stack.append(int(a/b))

            else:
                stack.append(int(st))

        return stack.pop()
        