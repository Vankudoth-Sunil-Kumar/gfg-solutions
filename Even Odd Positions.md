## 01. Even Odd Positions

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-the-fine4353/1)

### Problem Description

**Task:** Given an array of car numbers car[], an array of penalties fine[], and an integer date, find the total fine collected on that date. The fine is collected based on parity, i.e., on an even date, fines are collected from odd-numbered cars, and on an odd date, fines are collected from even-numbered cars.

#### Examples

##### Example 1

- **Input:**
```text
date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
```
- **Output:**
```text
600
```
- **Explanation:** The date is 12 (even), so we collect the fine from odd-numbered cars. The odd-numbered cars and the fines associated with them are as follows: 2375 - > 250 2325 - > 350 The sum of the fines is 250+350 = 600

##### Example 2

- **Input:**
```text
date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]
```
- **Output:**
```text
300
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-02 15:09:56
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long n=car.size();
        long long ans=0;
        if(date%2==0){
            for(int i=0;i<n;i++){
                if(car[i]%2!=0) ans+=fine[i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(car[i]%2==0) ans+=fine[i];
            }
        }
        return ans;
    }
};
```

*Generated on: 30/10/2026, 00:27:33*