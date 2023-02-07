class Solution {
    public ListNode oddEvenList(ListNode head) {
        int t=1;
        ListNode copy=head;
        ArrayList<Integer> odd=new ArrayList<>();
        ArrayList<Integer> even=new ArrayList<>();
        while(copy != null){
            if( t%2 == 0)
            even.add(copy.val);
            else
            odd.add(copy.val);
            t++;
            copy = copy.next;
        }
         copy = head;
        int i=0;
        while(i < odd.size()){
            copy.val=odd.get(i);
            i++;
            copy=copy.next;
        }
          i=0;
        while(i < even.size()){
            copy.val=even.get(i);
            i++;
            copy=copy.next;
        }
        return head;
    }
}
