class Solution {
    public String decodeMessage(String key, String message) {
        HashMap<Character,Character> map=new HashMap<>();
        String S1="";
        int a=97;
        for(int i=0;i<key.length();i++){
            char ch=key.charAt(i);
            if(ch!= ' '){
                
                if(!(map.containsKey(ch))){
            map.put(ch,(char)a);
            a++;
                }
            System.out.println();
            if(a>122)
            break;
            }
        }
        for(int i=0;i<message.length();i++){
            char ch=message.charAt(i);
            if(ch==' ')
            S1=S1+" ";
            if(map.containsKey(ch))
            S1=S1+map.get(ch);
        }
        return(S1);
    }
}
