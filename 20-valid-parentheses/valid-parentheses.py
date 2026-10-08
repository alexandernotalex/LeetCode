class Solution(object):
    def isValid(self, s):
        stack = []
        for char in s:
            if char == '(':
                stack.append(0)
            if char == ')':
                if len(stack) > 0 and stack[-1] == 0:
                    stack.pop()
                else:
                    return False
            if char == '{':
                stack.append(1)
            if char == '}':
                if len(stack) > 0 and stack[-1] == 1:
                    stack.pop()
                else:
                    return False
            if char == '[':
                stack.append(2)
            if char == ']':
                if len(stack) > 0 and stack[-1] == 2:
                    stack.pop()
                else:
                    return False
        return (True if len(stack) == 0 else False)