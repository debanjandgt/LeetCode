class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        HashMap<Integer,Integer> map=new HashMap<>();
        ListNode copy=head;
        if(copy == null)
        return copy;
        while(copy!=null){
            int val=copy.val;
            map.put(val,map.getOrDefault(val,0)+1);
            copy=copy.next;
        }
        ArrayList<Integer> al=new ArrayList<>();
        for(Map.Entry<Integer,Integer> entry : map.entrySet()){
        int key=entry.getKey();
        if(map.get(key)==1){
        System.out.println("value pushed -> "+key);
        al.add(key);
        }
        }
        Collections.sort(al);
        copy=head;
        for(int i=0;i<al.size();i++){
            copy.val=al.get(i);
            if(i!=al.size()-1)
            copy=copy.next;
        }
        if(al.size()>=1){
        copy.next=null;
        return head;
        }
        else return null;
    }
}
