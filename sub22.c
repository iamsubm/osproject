#include<stdio.h>
int main()
{
    int y,rS[90],fSize,s,x,len,frame[100],avail;
  int count=0;
printf("\nEnter the length Reference string:\n");
scanf("%d",&len);

  printf("\nEnter the reference string:\n");
  for(x=len;x>=1;x--)
  scanf("%d",&rS[x]);

  printf("\nEnter the number of Frames:");
  scanf("%d",&fSize);

  for(x=0;x<fSize;x++)
  frame[x]= -1;
  y=0;
  printf(" Reference string page frames\n");
  
  
  for(x=1;x<=len;x++)
  {
  	
  	
  	
    printf("\t%d",rS[x]);
    avail=0;
    for(s=0;s<fSize;s++)
    if(frame[s]==rS[x])
    avail=1;
    if (avail==0)
    {
      frame[y]=rS[x];
      y=(y+1)%fSize;
      count++;
       for (s=0;s<fSize;s++)
      printf("%d",frame[s]);
    }
  }
  printf("Fault is %d\n",count);
  return 0;
}
