#include<iostream>
using namespace std;
bool issafe(int x,int y,int sol[8][8])
{
    return(x>=0&&x<8&&y>=0&&y<8&&sol[x][y]==-1);
}
bool solutionhelper(int x,int y,int move_no,int sol[8][8],int x_move[8],int y_move[8])
{
    if(move_no==64)
    {
        return true;
    }

    for(int i=0;i<8;i++)
    {

        int next_x=x+x_move[i];
        int next_y=y+y_move[i];

        if(issafe(next_x,next_y,sol)==true)
        {
             sol[next_x][next_y] = move_no;
            if(solutionhelper(next_x,next_y,move_no+1,sol,x_move,y_move)==true)
            {
                return true;
            }
            else
            {
                sol[next_x][next_y]=-1;
            }
        }

    }
    return false;
}
void solutionKT()
{
    int sol[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            sol[i][j]=-1;
        }
    }
    sol[0][0]=0;

    int x_move[]={2,1,-1,-2,-2,-1,1,2};
    int y_move[]={1,2,2,1,-1,-2,-2,-1};

    if(solutionhelper(0,0,1,sol,x_move,y_move)==false)
    {
         cout<<"solution doesn't exist";
    }
    else
    {
       cout<<"solution exist"<<endl;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {

    solutionKT();

	//code
	return 0;
}
