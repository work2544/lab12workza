#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
       updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void updateImage(bool image[][M],int s,int x,int y)
{

for(int i=0;i<N;i++)
{
    for (int j = 0; j < M; j++)
    {
        if(pow(pow(i-x,2)+pow(j-y,2),0.5)<=s-1)
        {
            image[i][j]=1;
        }

    }
    
}


}
void showImage(const bool image[][M])
{
string picture[32][72];
for(int i=0;i<32;i++)
{
    for (int j = 0; j < 72; j++)
    {
        if(i==0||i==31)
        {
            picture[i][j]='-';
        }
        else if(j==0||j==71)
        {
            picture[i][0]="|";
            picture[i][71]="|";
        }
        else
        {
            picture[i][j]=" ";
        }
    } 
}
for(int i=0;i<32;i++)
{
    for (int j = 0; j < 72; j++)
    {
    if(i<30&&j<70&&image[i][j])
    {picture[i+1][j+1]='*';}    
    cout<<picture[i][j];  
    } 
    cout<<endl;
}
}

