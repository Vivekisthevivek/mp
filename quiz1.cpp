#include<iostream>
using namespace std;

class quiz{
    public:
        int number = 0;

        void question1(){
            char x;
            char y = 'b';
            cout << "What is the national animal of India?\n" " (a)Rabit\n" " (b)Tiger\n" " (c)Deer\n" "Answer: ";
            cin >> x;
            
            if(x==y)
                number++;            
        }

        void question4(){
            char x;
            char y = 'b';
            cout << "What is the national flower of India?\n" " (a)Rose\n" " (b)Lotus\n" " (c)Lily\n" "Answer: ";
            cin >> x;
            
            if(x==y)
                number++;            
        }

        void question5(){
            char x;
            char y = 'b';
            cout << "What is the national sport of India?\n" " (a)Cricket\n" " (b)Hockey\n" " (c)Chess\n" "Answer: ";
            cin >> x;
            
            if(x==y)
                number++;            
        }
        void question2(){
            char x;
            char y = 'c';
            cout << "What is the national bird of India?\n" " (a)Pegion\n" " (b)Crow\n" " (c)Peacock\n" "Answer: ";
            cin >> x;
            
            if(x==y)
                number++;            
        }
        void question3(){
            char x;
            char y = 'a';
            cout << "What is the national anthem of India?\n" " (a)Jan Gan Man\n" " (b)Vande Matram\n" " (c)Mera India\n" "Answer: ";
            cin >> x;
            
            if(x==y)
                number++;            
        }

        void answer(){
            cout << "Right Answers: " << number << "\nyou get " << number << " out of 5.";
        }
};

int main(){
    quiz q;
    q.question1();
    q.question2();
    q.question3();
    q.question4();
    q.question5();
    q.answer();
    return 0;
}