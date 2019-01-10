//
//  main.cpp
//  AtCoderABC081APlacingMarbles
//
//  Created by osu on 2018/12/25.
//  Copyright © 2018 osu. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string str;

    // input
    std::cin >> str;

    // parse
    int arr[3] = {0};
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        arr[i] = str[i] - '0';
    }

    // count
    int count = 0;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        if(arr[i] == 1) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}
