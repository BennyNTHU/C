#include<windows.h>
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int times = 0;
    int x = 0;
    
    printf("�аݭn�I�X�U�G");
    scanf("%d",&times);
    
    system("PAUSE");
    
    for (x = 0; x < times; x++)
	{
      	mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
      	printf("�I����%3d �U\n",x+1); 
    	Sleep(300000); //�d�U�ɶ���OS �� CPU Time
    }
    
    system("PAUSE");
    return 0;
}
