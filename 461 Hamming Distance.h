/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4

Output: 2

Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

The above arrows point to positions where the corresponding bits are different.
*/
/*首先比较两数大小，再每次比较两数二进制末位是否相等后右移，剩下大的数的剩下二进制位统计为1的个数*/
int hammingDistance(int x, int y) {
    int count = 0;
    int max = x > y ? x : y;
    int min = x <= y ? x : y;
    while(max){
        if(max && min){
            if((max&1) != (min&1)){
                count++;
            }
            max >>= 1;
            min >>= 1;
        }
        else if(max){
            if(max&1){
                count++;
            }
            max >>= 1;
        }
    }
    return count;
}
/*改进：两数异或，统计二进制位1的个数*/
