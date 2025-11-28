class Solution {
    public int arithmeticTriplets(int[] nums, int diff) {
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums){
            set.add(num);
        }

        int count = 0;
        for(int x : nums){
            if(set.contains(x+diff) && set.contains(x+2*diff)) count++;
        }
        return count;
    }
}