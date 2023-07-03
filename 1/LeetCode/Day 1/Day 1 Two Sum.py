class Solution:
    def twoSum(self, v: List[int], tar: int) -> List[int]:
        a = set()
        ans, flag = [0]*2, False
        for ind, i in enumerate(v): 
            a.add(i)
            if (tar-i) in a:
                ans[0] = ind
                for j in range(ind):
                    if v[j]==(tar-i):
                        ans[1] = j
                        flag = True
                        break
            if flag: break
        return ans
