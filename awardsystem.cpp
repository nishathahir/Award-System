#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;


struct node {
    int data;
    node *right, *down;
};


node* newNode(int d)
{
    node* temp = new node;
    temp->data = d;
    temp->right = temp->down = NULL;
    return temp;
}


void display(node* head)
{
    node *rp, *dp = head;

    while (dp)
    {
        rp = dp;
        while (rp)
        {
            cout << rp->data << " ";
            rp = rp->right;
        }
        cout << endl;
        dp = dp->down;
    }
}

node* constructLinkedMatrix(int mat[][5], int m, int n)
{
    node* mainhead = NULL;
    node* head[m];
    node *righttemp, *newptr;
    for (int i = 0; i < m; i++)
    {
        head[i] = NULL;
        for (int j = 0; j < n; j++)
        {
            newptr = newNode(mat[i][j]);
            if (!mainhead)
                mainhead = newptr;

            if (!head[i])
                head[i] = newptr;
            else
                righttemp->right = newptr;

            righttemp = newptr;
        }
    }

    for (int i = 0; i < m - 1; i++)
    {

        node *temp1 = head[i], *temp2 = head[i + 1];

        while (temp1 && temp2)
        {

            temp1->down = temp2;
            temp1 = temp1->right;
            temp2 = temp2->right;
        }
    }

    return mainhead;
}

void voting(node *head)
{
    int cnumber;
    node *rp;
    node *dp = head;
    dp = dp->down;
    char ch = 'y';
    while(ch == 'y'&&dp)
    {
        rp = dp;
        cout<<"\t\t\t\t\t Nominee :";
        cin>>cnumber;
        for(int i=0;i<cnumber ;i++)
        {
            rp = rp->right;
        }
        rp-> data = rp->data+1;
        dp = dp->down;
        cout<<"\t\t\t\t\t Do you want to continue(y/n)?";
        cin>>ch;

    }
}

void counting(node *head ,int votes[])
{
    int k=1;
    node *dp;
    node *rp = head;
    while(rp)
    {
        if(rp->data == k)
        {
            dp = rp->down;
            int sum = 0;
            while(dp)
            {
                sum = sum + dp->data;
                dp = dp->down;

            }
            votes[k-1] = sum;
            k++;
        }
        else
        {
            rp = rp->right;
        }
    }
}

int main()
{
    system("Color 0B ");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t    ________________________________________________________________________________________________   "<<endl;
    cout<<"\t\t\t\t                                                                                                       "<<endl;
    cout<<"\t\t\t\t    ------------------------------------------------------------------------------------------------   "<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                 FILM ERA AWARDS 2020                                           |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   |                                                                       -T.Nisha Fathima(19pt14) |"<<endl;
    cout<<"\t\t\t\t   |                                                                       -D.Lavanya(19pt05)       |"<<endl;
    cout<<"\t\t\t\t   |                                                                                                |"<<endl;
    cout<<"\t\t\t\t   ------------------------------------------------------------------------------------------------   "<<endl;
    cout<<"\t\t\t\t   ________________________________________________________________________________________________   "<<endl;
    system("pause");
    system("cls");

    int m, n,category;
    m = 20, n = 5;

    int hero[21][5] = {0},heroine[21][5] = {0},sfemale[21][5] = {0},smale[21][5] = {0},
    music[21][5]={0},movie[21][5]={0},song[21][5]={0},lyrics[21][5];
    for(int r=1;r<=4;r++)
    {
        hero[0][r] = r;
        heroine[0][r] = r;
        sfemale[0][r] = r;
        smale[0][r] = r;
        music[0][r]=r;
        movie[0][r]=r;
        song[0][r]=r;
        lyrics[0][r]=r;
    }
    for(int t=1;t<=20;t++)
    {
        hero[t][0] = t;
        heroine[t][0] = t;;
        sfemale[t][0] = t;
        smale[t][0] = t;
        music[t][0]=t;
        movie[t][0]=t;
        song[t][0]=t;
        lyrics[t][0]=t;
    }
    node *headptr1,*headptr2,*headptr3,*headptr4,
                *headptr5,*headptr6,*headptr7,*headptr8;
    int highest,i=0;
    flag1:
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
    std::string categorylist[10]={"[1] Actor","[2] Actress","[3] Playback Singer Male",
    "[4] Playback Singer Female","[5] Music Director","[6] Movie","[7] Song","[8] Lyrics"};
    for(i=0;i<10;i++)
    {
        cout<<"\t\t\t\t\t\t"<<categorylist[i]<<endl;
    }
    cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t Category :";
    cin>>category;
    system("pause");
    system("cls");
    switch(category)
    {
        case 1:
              {
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
                int votes1[4],i=0;
                std::string votes1name[4]={"[1]Actor1","[2]Actor2","[3]Actor3","[4]Actor4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes1name[i]<<endl;
               }
               cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               headptr1 = constructLinkedMatrix(hero,m,n);
               getch();
               voting(headptr1);
               system("cls");
               counting(headptr1,votes1);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee "<<i+1<<":"<<votes1[i]<<endl;
                   cout<<"\t\t\t\t\t Counting..."<<endl;
                   system("pause");

               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               system("pause");
               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes1[j]>votes1[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"\n\t\t\t\t\t Winner :"<<votes1name[highest]<<endl;
               break;}
        case 2:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               int votes2[4],i=0;
               std::string votes2name[4]={"[1]Actress1","[2]Actress2","[3]Actress3","[4]Actress4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes2name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               headptr2 = constructLinkedMatrix(heroine,m,n);
               getch();
               voting(headptr2);
               system("cls");
               counting(headptr2,votes2);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee "<<i+1<<":"<<votes2[i]<<endl;
                   cout<<"\t\t\t\t\t Counting..."<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes2[j]>votes2[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"\n\t\t\t\t\t Winner :"<<votes2name[highest]<<endl;
               break;}
        case 3:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               int votes3[4],i=0;
               std::string votes3name[4]={"[1] Singer1","[2] Singer2","[3] Singer3","[4] Singer4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes3name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               headptr3 = constructLinkedMatrix(smale,m,n);
               getch();
               voting(headptr3);
               system("cls");
               counting(headptr3,votes3);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes3[i]<<endl;
                   cout<<"Counting..."<<endl;
                   system("pause");
               }
               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes3[j]>votes3[highest])
                   {
                       highest = j;
                   }
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               cout<<"\n\t\t\t\t\tWinner :"<<votes3name[highest]<<endl;
               break;}
        case 4:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               int votes4[4],i=0;
               std::string votes4name[4]={"[1] Singer1","[2] Singer2","[3] Singer3","[4] Singer4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes4name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               headptr4 = constructLinkedMatrix(sfemale,m,n);
               getch();
               voting(headptr4);
               system("cls");
               counting(headptr4,votes4);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes4[i]<<endl;
                   cout<<"\t\t\t\t\t Counting..."<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes4[j]>votes4[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"\n\t\t\t\t\t Winner :"<<votes4name[highest]<<endl;
               break;}
        case 5:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               int votes5[4],i=0;
               std::string votes5name[4]={"[1] Musician1","[2] Musician2","[3] Musician3","[4] Musician4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes5name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               headptr5 = constructLinkedMatrix(music,m,n);
               getch();
               voting(headptr5);
               system("cls");
               counting(headptr5,votes5);
               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes5[i]<<endl;
                   cout<<"\t\t\t\t\t Counting ..."<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;


               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes5[j]>votes5[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"\n\t\t\t\t\tWinner :"<<votes5name[highest]<<endl;
               break;}
        case 6:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               int votes6[4],i=0;
               std::string votes6name[4]={"[1] Movie1","[2] Movie2","[3] Movie3","[4] Movie4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes6name[i]<<endl;
               }
               cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               headptr6 = constructLinkedMatrix(movie,m,n);
               getch();
               voting(headptr6);
               system("cls");
               counting(headptr6,votes6);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes6[i]<<endl;
                   cout<<"\t\t\t\t\t Counting..."<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes6[j]>votes6[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"\n\t\t\t\t\t\t Winner :"<<votes6name[highest]<<endl;
               break;}
        case 7:{
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               int votes7[4],i=0;
               std::string votes7name[4]={"[1] Song1","[2] Song2","[3] Song3","[4] Song4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes7name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               headptr7 = constructLinkedMatrix(movie,m,n);
               getch();
               voting(headptr7);
               system("cls");
               counting(headptr7,votes7);
                for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes7[i]<<endl;
                   cout<<"\t\t\t\t\t Counting"<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes7[j]>votes7[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"Winner :"<<votes7name[highest]<<endl;
               break;}
        case 8:{
                    for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               int votes8[4],i=0;
               std::string votes8name[4]={"[1] Lyrics1","[2] Lyrics2","[3] Lyrics3","[4] Lyrics4"};
               for(i=0;i<=3;i++)
               {
                    cout<<"\t\t\t\t\t"<<votes8name[i]<<endl;
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               headptr8 = constructLinkedMatrix(movie,m,n);
               getch();
               voting(headptr8);
               system("cls");
               counting(headptr8,votes8);
                    for(int loop1=0;loop1<10;loop1++)
                {
                    cout<<endl;
                }
                cout<<"\t\t\t\t\t\t\t THE EVERGREEN AWARDS 2020"<<endl;
                cout<<endl;
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;
               for(int i=0;i<=3;i++)
               {
                   cout<<"\t\t\t\t\t Nominee"<<i+1<<":"<<votes8[i]<<endl;
                   cout<<"\t\t\t\t\t Counting..."<<endl;
                   system("pause");
               }
                cout<<"\t\t\t\t\t--------------------------------------------------------------------------------------"<<endl;

               highest = 0;
               for(int j=0;j<4;j++)
               {
                   if(votes8[j]>votes8[highest])
                   {
                       highest = j;
                   }
               }
               cout<<"Winner :"<<votes8name[highest]<<endl;
               break;}
    }
    char home[2];
    cout<<"Do you want to continue (y/n)?"<<endl;
    cin>>home;
    if(strcmp(home,"y")==0)
    {
        system("cls");
        goto flag1;
    }
    else
        system("exit");

    return 0;
}
