#include"tool.h"
#include "declaration.h"





int main()


{   //初始密码
    char pwman[14],pwslman[14];
    char mpassward[14];
    char spassward[14];
    strcpy(pwman,"123456");
    strcpy(pwslman,"123456");
    struct Node1* head_customer = (struct Node1 *)malloc(sizeof(struct Node1));//创建表头
    head_customer->pnext1 = NULL;
    struct Node1* end_customer = head_customer;


    struct Node2* head_cliaison = (struct Node2 *)malloc(sizeof(struct Node2));//创建表头
    head_cliaison->pnext2 = NULL;
    struct Node2* end_cliaison = head_cliaison;


    struct Node3* head_salesman = (struct Node3 *)malloc(sizeof(struct Node3));//创建表头
    head_salesman->pnext3 = NULL;
    struct Node3* end_salesman = head_salesman;

    struct Node4* head_group = (struct Node4 *)malloc(sizeof(struct Node4));//创建表头
    head_group->pnext4 = NULL;
    struct Node4* end_group = head_group;


    struct comcontent *head = NULL;//声明一个指向通信内容的指针变量





    while(1)
    {
         welcome();//欢迎界面函数
         char ch=getch();//读取一个字符可以不按回车执行
         if(ch=='1')
            {
                 printf("请输入您的密码：\n");

                 scanf("%14s",mpassward);
                 if(strcmp(mpassward,pwman)==0)
                 {
                     printf("密码正确，欢迎使用通信管理系统！\n");
                     system("pause");
                     system("cls");//清屏
                     while(1)
                     {

                         mfunctionalinterface();//经理界面函数
                         char mh=getch();//读取一个字符可以不按回车执行
                         switch (mh)
                         {

                             case '1':
                                 while(1)
                                 {
                                     system("cls");
                                     mfunctionalinterface1();//经理基本信息管理界面
                                     char mh1=getch();
                                     switch(mh1)
                                     {
                                        case '1':
                                             end_salesman = creat_note_salesman(end_salesman);
                                             break;
                                         case '2':
                                             end_customer = creat_note_customer(end_customer);
                                             break;
                                         case '3':
                                             end_cliaison = creat_note_cliaison(end_cliaison);
                                             break;
                                         case '4':
                                            search_salesman(head_salesman);
                                             break;
                                         case '5':
                                             search_customer(head_customer);
                                             break;
                                         case '6':
                                             search_cliaison(head_cliaison);
                                             break;
                                         case '7':
                                             head_salesman = delete_salesman(head_salesman);
                                             break;
                                         case '8':
                                             head_customer = delete_customer(head_customer);
                                             break;
                                         case '9':
                                             head_cliaison = delete_cliaison(head_cliaison);
                                             break;
                                         case '0':break;
                                         default:
                                        {
                                                 printf("您的输入有误，请重新输入!\n");
                                                 system("pause");
                                                 system("cls");
                                         }
                                     }

                                     if(mh1=='0')
                                     {
                                         system("cls");
                                         break;
                                     }
                                 }
                                 break;
                             case '2':
                                 while(1)
                                 {
                                     system("cls");
                                     mfunctionalinterface2();//经理客户分配界面
                                     char mh2=getch();
                                     switch(mh2)
                                     {
                                         case '1':
                                             allocation(head_customer,head_salesman);
                                             break;
        