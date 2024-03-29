class Solution {

        public boolean uniqueOccurrences(int[] arr) {
        Map<Integer, Integer> counts = new HashMap<>();
        
        for(int num : arr) {
            counts.put(num, counts.getOrDefault(num, 0) + 1);
        }
        
        Set<Integer> occurrences = new HashSet<>(counts.values());
        
        return occurrences.size() == counts.size();
    }
}
