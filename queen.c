//place 8 queens in a chess board without intersecting 
#include<stdio.h>
int main(){
    int cb[8][8]={{0,0,0,0,0,1,0,0},{0,0,0,1,0,0,0},{0,1}};
    for(int z=0;z<8;z++){
    for(int i=0;i<8;i++){
    int flag =0;
    for(int j=i;j>=0;j--){
        if(cb[z][j]==1){flag++;break;}
    }
    for(int j=i;j<8;j++){
        if(cb[z][j]==1){flag++;break;}
    }
    for(int j=i;j>=0;j--){
        if(cb[j][i]==1){flag++;break;}
    }
    for(int j=i;j<8;j++){
        if(cb[j][i]==1){flag++;break;}
    }int y=z;
    for(int j=i;j>=0&&y>=0;j--){
        if(cb[y][j]==1){flag++;break;}
     y--;}int k=z;
    for(int j=i;j<8&&k>=0;j++){
        if(cb[k][j]==1){flag++;break;}
    k--;}
    printf(" z %d i%d flag%d\n",z,i,flag);
    //need checking for diagonal intersection 
if(flag==0){cb[z][i]=1;}
}

}
for(int i=0;i<8;i++){
    for (int k=0;k<8;k++){
        printf("%d ",cb[i][k]);

    }
    printf("\n");
}
}
