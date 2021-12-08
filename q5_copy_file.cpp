#include<iostream>
#include<fstream>

using namespace std;
int main(int argc, char* argv[]){
        if(argc!=3){
            cout<<"Filename Not Found!\n";
            exit(1);
        }
        ifstream fs;
        ofstream ft;
        char* ch;
        fs.open(argv[1]);

        if(!fs){
            cout<<"Error in opening source file..!!";
            exit(1);
        }

        ft.open(argv[2],ios::app);
        if(!ft){
            cout<<"Error in opening target file..!!";
            fs.close();
            exit(1);
        }
        while(!fs.eof()){
            fs.read(ch,1);
            if(!fs.eof())
                ft.write(ch,1);
        }
        cout<<"File copied successfully..!!";
        fs.close();
        ft.close();
        return 0;
}