/*

The MIT License (MIT)

Copyright © 2022 <Frederic R. Cook (frcook.6060@gmail.com)>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Fork this project to create your own MIT license that you can always link to.

*/

#include <iostream>
#include <fstream>


int main(int argc, char** argv) {

    if(argc == 2) {
        uint64_t num = 0;

        std::ifstream in(argv[1], std::ios::binary);

        if(in.is_open()) {
            in.read((char*)&num, sizeof(uint64_t));
        }


        num += 1;

        std::cout << "build: " << num << "\n";

        std::ofstream out(argv[1], std::ios::binary);

        out.write((const char*)&num, sizeof(uint64_t));
    }

    return 0;
}