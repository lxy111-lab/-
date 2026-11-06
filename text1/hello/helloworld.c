
/* #include <windows.h>
#include<stdio.h>
int main ()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
   
    printf("hello,world!\n");
    printf("我的名字是%s \n","xiao");
    return 0;


} */

#include <windows.h>
#include<stdio.h>

/* int main ()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    printf("hello,world!\n");
    printf("我的名字是%s \n","xiao");

    printf("%d \n",10/2);
    printf("%d\n",10%2);

    return 0;
}
 */
/*  int main()
 {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    printf("请输入一个三位数：\n");
    int num;
    scanf("%d",&num);
   /*  printf("输出：%d",num);
 */
   /*  int a =num%10; //输出的是个位数
    int b =num/10%10; //输出的是十位数
    int c =num/100%10;  //输出百位数

    printf("个位数是：%d \n",a);
    printf("十位数是：%d \n",b);
    printf("百位数是：%d \n",c);


    



    return 0;
 } */

 //实现的功能是和试试去看电影，如果是同排且连着坐，那会很开心的看电影，否则会开心的打游戏
 /* int main ()

 {

    //先定义变量
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int rowA = 5;
    int numberA = 6;

    int rowB =5;
    int numberB = 5;

    //写判断

    if( (rowA == rowB)&&(numberA - numberB == 1 ||numberA - numberB == -1  ))
    {

        printf("我会开心的看电影");

    }
      else
    {
        printf("我会开心的打游戏");

    }

   return 0;

 }
 */

 int main ()
 {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    //需求是输入氪金数量，根据不同的范围制定等级


    //1.需要通过键盘输入

    int money;
    printf("输入氪金数量");
    scanf("%d",&money);
    

    //2.现在开始写判断语句

    if (money>1 && money <=99)
    {
        printf("尊贵的VIP1\n");
    }
    else if (money>100 && money<=499) 
    {
        printf("尊贵的VIP2\n");
    }
    else if (money>500 && money<=999)
     {
        printf("尊贵的VIP3\n");
     }
    else if (money>1000 && money<=1999) 
    {
         printf("尊贵的VIP4\n");
    }
    else
    {
         printf("尊贵的VIP5\n");

    }


     return 0;
 }
