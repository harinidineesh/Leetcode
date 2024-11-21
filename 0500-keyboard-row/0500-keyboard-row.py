class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        output=[]
        first_row ="qwertyuiopQWERTYUIOP"
        second_row = "asdfghjklASDFGHJKL"
        third_row ="zxcvbnmZXCVBNM"
        for i in range(len(words)):
            single= words[i]
            length= len(single)
            if single[0] in first_row:
                for j in range(1, length):
                    if single[j] not in first_row:
                        break
                else:
                    output.append(single)
            if single[0] in second_row:
                for j in range(1, length):
                    if single[j] not in second_row:
                        break
                else:
                     output.append(single)
            if single[0] in third_row:
                for j in range(1, length):
                    if single[j] not in third_row:
                        break
                else:
                    output.append(single)
        return output

        