#include<stdio.h>
int main()
{
    int new_scor = 5, old_score;
    FILE *pro;
    pro = fopen("4.txt","r");
    fscanf(pro,"%d",&old_score);
    if (new_scor<old_score)
    {
        pro = fopen("4.txt","w");
        fprintf(pro,"%d",new_scor);
    }
    fclose(pro);
    return 0;
}