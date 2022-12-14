#include <iostream>
int linear_search(int arr[], int n, int x)
{
    for(int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int binary_search(int arr[], int n, int x)
{
    int l = 0;
    int r = n-1;
    int mid;
 
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            r = mid - 1;
        else 
            l = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {-996, -960, -944, -887, -865, -860, -846, -831, -790, -785, -700, -691, -662, -662, -647, 
    -640, -587, -532, -524, -519, -501, -497, -475, -471, -461, -457, -452, -442, -441, -416, 
    -412, -411, -390, -389, -358, -341, -306, -257, -253, -252, -248, -208, -143, -134, -82, 
    -79, -11, 21, 26, 48, 68, 69, 72, 93, 95, 99, 115, 120, 156, 164, 181, 200, 231, 252, 288, 
    304, 336, 343, 364, 402, 419, 486, 546, 584, 595, 596, 606, 627, 636, 666, 666, 683, 701, 
    740, 766, 780, 782, 794, 802, 829, 832, 837, 858, 875, 881, 882, 883, 883, 947, 959};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 120;
    int result = linear_search(arr, arr_size, x);
    int result2 = binary_search(arr, arr_size, x);
    std::cout << result << " " << result2 << std::endl;
    return 0;
} 