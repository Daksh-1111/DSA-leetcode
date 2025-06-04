public class linear_search_zero {
    public static void main(String[] args) {
        int[] numbers = {2, 4, 6, 8, 9, 10, 12};
        int key = 10;
        int index = linear_search(numbers, key);
        System.out.println(index);
    }
 public static int linear_search(int[] numbers, int key) {
        for (int i = 0; i < numbers.length; i++) {  
            if (numbers[i] == key) {
                return i;
            }
        }
        return -1; 
    }
}
