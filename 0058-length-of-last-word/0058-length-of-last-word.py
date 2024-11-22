class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        tokens=[]
        a = s.strip()
        tokens = a.split(" ")
        token_length= len(tokens)
        return len(tokens[token_length-1])