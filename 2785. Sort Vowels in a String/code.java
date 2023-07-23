public class Solution {
    public String sortVowels(String s) {
        ArrayList<Character> vec = new ArrayList<>();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vec.add(ch);
            }
        }

        Collections.sort(vec);

        StringBuilder ans = new StringBuilder();
        int t = 0;
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
                ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                ans.append(ch);
            } else {
                ans.append(vec.get(t));
                t++;
            }
        }

        return ans.toString();
    }
}
