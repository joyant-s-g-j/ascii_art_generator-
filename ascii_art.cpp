#include<bits/stdc++.h>
using namespace std;

void ascii_art_generator()
{
    string word;
    cout<<"Enter any word or sentence: ";
    getline(cin,word);
    //1st layer
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='A')
        cout<<"      ";
        if(word[i]=='a')
        cout<<"     ";
        if(word[i]=='B')
        cout<<" ,__  ";
        if(word[i]=='b')
        cout<<"     ";
        if(word[i]=='C')
        cout<<"  __ ";
        if(word[i]=='c')
        cout<<"    ";
        if(word[i]=='D')
        cout<<" ,__   ";
        if(word[i]=='d')
        cout<<"     ";
        if(word[i]=='E')
        cout<<",__ ";
        if(word[i]=='e')
        cout<<"     ";
        if(word[i]=='F')
        cout<<",__ ";
        if(word[i]=='f')
        cout<<"  _  ";
        if(word[i]=='G')
        cout<<" ,__  ";
        if(word[i]=='g')
        cout<<" __, ";
        if(word[i]=='H')
        cout<<"     ";
        if(word[i]=='h')
        cout<<"      ";
        if(word[i]=='I')
        cout<<"___ ";
        if(word[i]=='i')
        cout<<"  ";
        if(word[i]=='J')
        cout<<"__, ";
        if(word[i]=='j')
        cout<<"   ' ";
        if(word[i]=='K')
        cout<<"    ";
        if(word[i]=='k')
        cout<<"    ";
        if(word[i]=='L')
        cout<<"    ";
        if(word[i]=='l')
        cout<<"  ";
        if(word[i]=='M')
        cout<<"       ";
        if(word[i]=='m')
        cout<<"          ";
        if(word[i]=='N')
        cout<<"      ";
        if(word[i]=='n')
        cout<<"     ";
        if(word[i]=='O')
        cout<<"  __   ";
        if(word[i]=='o')
        cout<<"    ";
        if(word[i]=='P')
        cout<<",__  ";
        if(word[i]=='p')
        cout<<",__, ";
        if(word[i]=='Q')
        cout<<"  __   ";
        if(word[i]=='q')
        cout<<" __,  ";
        if(word[i]=='R')
        cout<<",__  ";
        if(word[i]=='r')
        cout<<"     ";
        if(word[i]=='S')
        cout<<" __  ";
        if(word[i]=='s')
        cout<<"   ";
        if(word[i]=='T')
        cout<<"_____ ";
        if(word[i]=='t')
        cout<<"     ";
        if(word[i]=='U')
        cout<<"      ";
        if(word[i]=='u')
        cout<<"       ";
        if(word[i]=='V')
        cout<<"       ";
        if(word[i]=='v')
        cout<<"     ";
        if(word[i]=='W')
        cout<<"        ";
        if(word[i]=='w')
        cout<<"       ";
        if(word[i]=='X')
        cout<<"    ";
        if(word[i]=='x')
        cout<<"   ";
        if(word[i]=='Y')
        cout<<"      ";
        if(word[i]=='y')
        cout<<"     ";
        if(word[i]=='Z')
        cout<<"___ ";
        if(word[i]=='z')
        cout<<"   ";
        if(word[i]==' ')
        cout<<"  ";
    }
    cout<<endl;
    //2ND LAYER
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='A')
        cout<<"  /\\  ";
        if(word[i]=='a')
        cout<<" __, ";
        if(word[i]=='B')
        cout<<" |  \\ ";
        if(word[i]=='b')
        cout<<"|    ";
        if(word[i]=='C')
        cout<<" /   ";
        if(word[i]=='c')
        cout<<" __ ";
        if(word[i]=='D')
        cout<<" |  \\  ";
        if(word[i]=='d')
        cout<<"   | ";
        if(word[i]=='E')
        cout<<"|   ";
        if(word[i]=='e')
        cout<<" ,__ ";
        if(word[i]=='F')
        cout<<"|   ";
        if(word[i]=='f')
        cout<<" /.) ";
        if(word[i]=='G')
        cout<<" /  \\ ";
        if(word[i]=='g')
        cout<<"/  | ";
        if(word[i]=='H')
        cout<<"|  | ";
        if(word[i]=='h')
        cout<<"|     ";
        if(word[i]=='I')
        cout<<" |  ";
        if(word[i]=='i')
        cout<<"' ";
        if(word[i]=='J')
        cout<<"  | ";
        if(word[i]=='j')
        cout<<"   | ";
        if(word[i]=='K')
        cout<<"| / ";
        if(word[i]=='k')
        cout<<"|   ";
        if(word[i]=='L')
        cout<<"|   ";
        if(word[i]=='l')
        cout<<"| ";
        if(word[i]=='M')
        cout<<"|\\  /| ";
        if(word[i]=='m')
        cout<<"          ";
        if(word[i]=='N')
        cout<<"|\\  | ";
        if(word[i]=='n')
        cout<<"     ";
        if(word[i]=='O')
        cout<<" /  \\  ";
        if(word[i]=='o')
        cout<<" _  ";
        if(word[i]=='P')
        cout<<"|  \\ ";
        if(word[i]=='p')
        cout<<"|  ! ";
        if(word[i]=='Q')
        cout<<" /  \\  ";
        if(word[i]=='q')
        cout<<"/  |  ";
        if(word[i]=='R')
        cout<<"|  \\ ";
        if(word[i]=='r')
        cout<<"     ";
        if(word[i]=='S')
        cout<<"/  \\ ";
        if(word[i]=='s')
        cout<<" _ ";
        if(word[i]=='T')
        cout<<"  |   ";
        if(word[i]=='t')
        cout<<"_|_  ";
        if(word[i]=='U')
        cout<<"|   | ";
        if(word[i]=='u')
        cout<<"       ";
        if(word[i]=='V')
        cout<<"|    | ";
        if(word[i]=='v')
        cout<<"     ";
        if(word[i]=='W')
        cout<<"|  |  | ";
        if(word[i]=='w')
        cout<<"       ";
        if(word[i]=='X')
        cout<<"\\ / ";
        if(word[i]=='x')
        cout<<"   ";
        if(word[i]=='Y')
        cout<<"\\   / ";
        if(word[i]=='y')
        cout<<"\\  / ";
        if(word[i]=='Z')
        cout<<"  / ";
        if(word[i]=='z')
        cout<<"__ ";
        if(word[i]==' ')
        cout<<"  ";
    }
    cout<<endl;
    //3RD LAYER
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='A')
        cout<<" /__\\ ";
        if(word[i]=='a')
        cout<<"/  | ";
        if(word[i]=='B')
        cout<<" |--< ";
        if(word[i]=='b')
        cout<<"|__, ";
        if(word[i]=='C')
        cout<<"|    ";
        if(word[i]=='c')
        cout<<"/   ";
        if(word[i]=='D')
        cout<<" |   | ";
        if(word[i]=='d')
        cout<<",__| ";
        if(word[i]=='E')
        cout<<"|-- ";
        if(word[i]=='e')
        cout<<"/___)";
        if(word[i]=='F')
        cout<<"|-- ";
        if(word[i]=='f')
        cout<<"-|-  ";
        if(word[i]=='G')
        cout<<"|  __ ";
        if(word[i]=='g')
        cout<<"\\__| ";
        if(word[i]=='H')
        cout<<"|--| ";
        if(word[i]=='h')
        cout<<"|---, ";
        if(word[i]=='I')
        cout<<" |  ";
        if(word[i]=='i')
        cout<<"| ";
        if(word[i]=='J')
        cout<<"  | ";
        if(word[i]=='j')
        cout<<"   | ";
        if(word[i]=='K')
        cout<<"|(  ";
        if(word[i]=='k')
        cout<<"|_/ ";
        if(word[i]=='L')
        cout<<"|   ";
        if(word[i]=='l')
        cout<<"| ";
        if(word[i]=='M')
        cout<<"| \\/ | ";
        if(word[i]=='m')
        cout<<"|---,---, ";
        if(word[i]=='N')
        cout<<"| \\ | ";
        if(word[i]=='n')
        cout<<"|---, ";
        if(word[i]=='O')
        cout<<"|    | ";
        if(word[i]=='o')
        cout<<"/ \\ ";
        if(word[i]=='P')
        cout<<"|__/ ";
        if(word[i]=='p')
        cout<<"|--! ";
        if(word[i]=='Q')
        cout<<"|    | ";
        if(word[i]=='q')
        cout<<"\\__|  ";
        if(word[i]=='R')
        cout<<"|__/ ";
        if(word[i]=='r')
        cout<<"|--\\ ";
        if(word[i]=='S')
        cout<<"`--. ";
        if(word[i]=='s')
        cout<<"(  ";
        if(word[i]=='T')
        cout<<"  |   ";
        if(word[i]=='t')
        cout<<" |   ";
        if(word[i]=='U')
        cout<<"|   | ";
        if(word[i]=='u')
        cout<<"|   |  ";
        if(word[i]=='V')
        cout<<" \\  /  ";
        if(word[i]=='v')
        cout<<"\\  / ";
        if(word[i]=='W')
        cout<<"|  |  | ";
        if(word[i]=='w')
        cout<<"\\    / ";
        if(word[i]=='X')
        cout<<" X  ";
        if(word[i]=='x')
        cout<<"\\/ ";
        if(word[i]=='Y')
        cout<<" \\ /  ";
        if(word[i]=='y')
        cout<<" \\/  ";
        if(word[i]=='Z')
        cout<<" /  ";
        if(word[i]=='z')
        cout<<" / ";
        if(word[i]==' ')
        cout<<"  ";
    }
    cout<<endl;
    //4th layer
    for(int i=0;i<word.size();i++)
    {
        if(word[i]=='A')
        cout<<"/    \\";
        if(word[i]=='a')
        cout<<"\\__| ";
        if(word[i]=='B')
        cout<<" |__/ ";
        if(word[i]=='b')
        cout<<"|__| ";
        if(word[i]=='C')
        cout<<" \\__ ";
        if(word[i]=='c')
        cout<<"\\__ ";
        if(word[i]=='D')
        cout<<" |__/  ";
        if(word[i]=='d')
        cout<<"|__| ";
        if(word[i]=='E')
        cout<<"|__ ";
        if(word[i]=='e')
        cout<<"\\___ ";
        if(word[i]=='F')
        cout<<"|   ";
        if(word[i]=='f')
        cout<<" |   ";
        if(word[i]=='G')
        cout<<" \\__/ ";
        if(word[i]=='g')
        cout<<"\\__| ";
        if(word[i]=='H')
        cout<<"|  | ";
        if(word[i]=='h')
        cout<<"|   | ";
        if(word[i]=='I')
        cout<<"_|_ ";
        if(word[i]=='i')
        cout<<"| ";
        if(word[i]=='J')
        cout<<"\\_| ";
        if(word[i]=='j')
        cout<<"\\__| ";
        if(word[i]=='K')
        cout<<"| \\ ";
        if(word[i]=='k')
        cout<<"| \\ ";
        if(word[i]=='L')
        cout<<"|__ ";
        if(word[i]=='l')
        cout<<"| ";
        if(word[i]=='M')
        cout<<"|    | ";
        if(word[i]=='m')
        cout<<"|   |   | ";
        if(word[i]=='N')
        cout<<"|  \\| ";
        if(word[i]=='n')
        cout<<"|   | ";
        if(word[i]=='O')
        cout<<" \\__/  ";
        if(word[i]=='o')
        cout<<"\\_/ ";
        if(word[i]=='P')
        cout<<"|    ";
        if(word[i]=='p')
        cout<<"|    ";
        if(word[i]=='Q')
        cout<<" \\__/\\ ";
        if(word[i]=='q')
        cout<<"   |/ ";
        if(word[i]=='R')
        cout<<"|  \\ ";
        if(word[i]=='r')
        cout<<"|  ` ";
        if(word[i]=='S')
        cout<<"\\__/ ";
        if(word[i]=='s')
        cout<<"_) ";
        if(word[i]=='T')
        cout<<"  |   ";
        if(word[i]=='t')
        cout<<" |_; ";
        if(word[i]=='U')
        cout<<" \\_/  ";
        if(word[i]=='u')
        cout<<" \\_/!/ ";
        if(word[i]=='V')
        cout<<"  \\/   ";
        if(word[i]=='v')
        cout<<" \\/  ";
        if(word[i]=='W')
        cout<<" \\/ \\/  ";
        if(word[i]=='w')
        cout<<" \\/\\/  ";
        if(word[i]=='X')
        cout<<"/ \\ ";
        if(word[i]=='x')
        cout<<"/\\ ";
        if(word[i]=='Y')
        cout<<"__|__ ";
        if(word[i]=='y')
        cout<<"_/   ";
        if(word[i]=='Z')
        cout<<"/__ ";
        if(word[i]=='z')
        cout<<"/_ ";
        if(word[i]==' ')
        cout<<"  ";
    }
    cout<<endl;
    
};
int main()
{
    while(1)
    {
        //clearScreen();
        ascii_art_generator();
        
        cout<<endl;
    }
    return 0;
}