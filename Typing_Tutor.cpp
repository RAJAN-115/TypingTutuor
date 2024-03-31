// Typing Tutor

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    
srand(time(NULL));
cout<<"Welcome to typing master"<<endl; 
cout<<".........................."<<endl<<endl;
cout<<"Enter the given sentence: "<<endl<<endl;
string sentences[]={
    "The quick brown fox jumps over the lazy dog.", 
    "Programming is fun and challenging.",
    "Practice makes perfect.", 
    "Coding improves problem-solving skills.",
    "I love learning new things!"
};
int total = sizeof(sentences) / sizeof(sentences[0]); 
int random = rand()% total; //random index
string sentence = sentences[random]; //random sentence
cout<<sentence<<endl;

time_t start = time(NULL);
string input;
getline(cin, input);

time_t end = time(NULL);
double timeUsed = difftime(end, start);
int words=1;
for(int i=0; i<input.length(); i++) {
if(input[i] == ' '){ 
    words++;
}
}
double wpm = (words/timeUsed) * 60;
cout<<"Time elapsed "<< timeUsed <<" seconds"<<endl;

cout<<"Your speed: "<<wpm<<" WPM"<<endl;

}
