/*
 Copyright (c) 2017 waynezxcv <liuweiself@126.com>
 
 https://github.com/waynezxcv/Playground
 
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */



#ifndef BinarySearch_hpp
#define BinarySearch_hpp

#include <stdio.h>


namespace LWTL {
    
    //在一个有n个元素的数组a中，找到值为x的元素的下标
    template<class T>
    int binarySearch(T a[], int n, const T& x) {
        
        int low = 0;
        int high = n - 1;
        
        while (low <= high) {
            
            int mid = (low + high)/2;
            
            if (x < a[mid]) {
                high = mid - 1;
            } else if (x > a[mid]) {
                low = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;//没有找到
    }
}

#endif /* BinarySearch_hpp */
