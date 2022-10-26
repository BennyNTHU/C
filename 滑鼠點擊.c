#include<windows.h>
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int times = 0;
    int x = 0;
    
    printf("請問要點幾下：");
    scanf("%d",&times);
    
    system("PAUSE");
    
    for (x = 0; x < times; x++)
	{
      	mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
      	printf("點擊第%3d 下\n",x+1); 
    	Sleep(300000); //留下時間給OS 的 CPU Time
    }
    
    system("PAUSE");
    return 0;
}
