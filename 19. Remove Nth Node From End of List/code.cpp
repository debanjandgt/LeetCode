class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
      ListNode temp=head;
      ArrayList<ListNode> al=new ArrayList<>();
      while(temp != null)
      {
          al.add(temp);
          temp=temp.next;
      }

      if(al.size() == 1 && n == 1)
      return null;
      if(n>al.size())
      return null;
      int k=n;
        int l=al.size()-k;
      al.remove(l);
      if(al.size() == 1)
      {
          al.get(0).next=null;
          return al.get(0);
      }
      for(int i=0;i<al.size()-1;i++)
      {
          al.get(i).next=al.get(i+1);
      }
      al.get(al.size()-1).next=null;
      return al.get(0);
    }
}
