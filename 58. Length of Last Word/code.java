class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;
        int i = s.length() - 1;
        while(i >= 0) {
            char ch = s.charAt(i);
            if(ch != ' ') {
                count++;
            } else if(count > 0){
                break;
            }
            i--;
        }
            
            
        return count;                 
    }
}
