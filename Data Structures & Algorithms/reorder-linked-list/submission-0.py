# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        res =[]
        cur = head
        while cur:
            res.append(cur)
            cur = cur.next

        i = 0
        j = len(res) - 1
        while i < j:
            res[i].next = res[j]
            i = i + 1
            res[j].next = res[i]
            j = j - 1

        res[i].next = None