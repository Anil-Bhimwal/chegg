 #include <stdio.h>

 void freqFun (int num, int counters[]){
    int map[256]={0};// for storing the frequencies of the numbers
    for(int i=0;i<num;){
         map[counters[i]-'0']++;//incrementing the frequency of the number
         i++;
    }
    printf("Number Frequenies are:\n");
    for(int i=0;i<256;i++){
        if(map[i]>0){
          printf("%d: %d \n",i, map[i]);
        }
    }
 }
int main (void)
 {
    int nums[500];   //up to 500 element int array
    FILE *fp1;      //file pointer
    int i;
    char ch;

    //******************  code starts here ***************
    for(i=0;i<50;i++){   //initialize array with 0
        nums[i]=0;
    }
    i=0;
    if ((fp1=fopen("demo_file.txt","r"))==NULL)
    {
        printf("demo_file.txt failed to open\n");
        return 0;
    }
    else{
         while ((ch = fgetc(fp1)) != EOF)
        {
            if(ch<='9'&&ch>='0'){
                nums[i]= ch;//storing digits in nums array
                i++;
            }
        }
    }
    freqFun(i, nums);// i:- number of digits in file
    return 0;
 }
