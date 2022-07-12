#include<iostream>

class student{
    public:
        student(){
            std::cout << "I am a student." << std::endl;
        }
};

int main(){
    student s1, s2, s3;
    return 0;
}