
#include"tool.h"
#include"declaration.h"
void welcome()//欢迎
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信管理系统\t\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择您的身份:\t\t\t*\n");
    printf("*\t\t1.公司经理\t\t\t*\n");
    printf("*\t\t2.公司业务员\t\t\t*\n");
    printf("*\t\t0.退出系统\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface()//经理功能界面函数
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信管理系统\t\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.基本信息管理\t\t\t*\n");
    printf("*\t\t2.客户分配管理\t\t\t*\n");
    printf("*\t\t3.客户分组管理\t\t\t*\n");
    printf("*\t\t4.基本信息排序\t\t\t*\n");
    printf("*\t\t5.基本信息统计\t\t\t*\n");
    printf("*\t\t6.通信记录分析\t\t\t*\n");
    printf("*\t\t7.系统维护\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface1()//经理基本信息管理界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息管理功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.录入业务员信息\t\t*\n");
    printf("*\t\t2.录入客户基本信息\t\t*\n");
    printf("*\t\t3.录入客户联络员信息\t\t*\n");
    printf("*\t\t4.修改和查找业务员信息\t\t*\n");
    printf("*\t\t5.修改和查找客户基本信息\t*\n");
    printf("*\t\t6.修改和查找客户联络员信息\t*\n");
    printf("*\t\t7.删除业务员信息\t\t*\n");
    printf("*\t\t8.删除客户基本信息\t\t*\n");
    printf("*\t\t9.删除客户联络员信息\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");

}
void mfunctionalinterface2()//经理客户分配界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用客户分配功能\t\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.业务员分配客户\t\t*\n");
    printf("*\t\t2.显示业务员客户\t\t*\n");
    printf("*\t\t3.修改业务员客户\t\t*\n");
    printf("*\t\t4.客户分配客户联络员\t\t*\n");
    printf("*\t\t5.显示客户的客户联络员\t\t*\n");
    printf("*\t\t6.修改客户客户联络员\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface3()//经理客户分组管理界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用客户分组管理功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.新建客户分组\t\t\t*\n");
    printf("*\t\t2.查找分组\t\t\t*\n");
    printf("*\t\t3.修改分组\t\t\t*\n");
    printf("*\t\t4.删除分组\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}

void mfunctionalinterface5()//经理信息排序界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息排序功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.排序业务员信息\t\t*\n");
    printf("*\t\t2.排序客户信息\t\t\t*\n");
    printf("*\t\t3.排序客户联络员信息\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface6()//经理信息统计界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息统计功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.统计业务员数量\t\t*\n");
    printf("*\t\t2.统计客户数量\t\t\t*\n");
    printf("*\t\t3.统计客户联络员数量\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface7()//经理通信记录分析界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信记录分析功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.查询通信情况\t\t\t*\n");
    printf("*\t\t2.排序通信情况\t\t\t*\n");
    printf("*\t\t3.统计通信情况\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void mfunctionalinterface8()//经理系统维护界面
{
     printf("*************************************************\n");
    printf("*\t\t欢迎使用系统维护功能\t\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.密码维护\t\t\t*\n");
    printf("*\t\t2.数据备份\t\t\t*\n");
    printf("*\t\t3.数据恢复\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}

void sfunctionalinterface()//业务员功能界面函数
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信管理系统\t\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.基本信息查询\t\t\t*\n");
    printf("*\t\t2.基本信息排序\t\t\t*\n");
    printf("*\t\t3.基本信息统计\t\t\t*\n");
    printf("*\t\t4.通信记录管理\t\t\t*\n");
    printf("*\t\t5.通信记录分析\t\t\t*\n");
    printf("*\t\t6.系统维护\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void sfunctionalinterface1()//业务员基本信息查询界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息查询功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.简单查询\t\t\t*\n");
    printf("*\t\t2.组合查询\t\t\t*\n");
    printf("*\t\t3.模糊查询\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void sfunctionalinterface2()//业务员基本信息排序界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息排序功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.简单排序\t\t\t*\n");
    printf("*\t\t2.组合排序\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void sfunctionalinterface3()//业务员基本信息统计界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用基本信息统计功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.单属性统计\t\t\t*\n");
    printf("*\t\t2.多属性统计\t\t\t*\n");
    printf("*\t\t3.预设统计\t\t\t*\n");
    printf("*\t\t4.条件统计\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void sfunctionalinterface4()//业务员通信记录管理界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信记录管理功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.增加通信情况\t\t\t*\n");
    printf("*\t\t2.修改通信情况\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}
void sfunctionalinterface5()//业务员通讯记录分析界面
{
    printf("*************************************************\n");
    printf("*\t\t欢迎使用通信记录分析功能\t*\n");
    printf("*************************************************\n");
    printf("*\t\t请选择功能列表:\t\t\t*\n");
    printf("*\t\t1.查询通信情况\t\t\t*\n");
    printf("*\t\t2.排序通信情况\t\t\t*\n");
    printf("*\t\t3.统计通信情况\t\t\t*\n");
    printf("*\t\t0.返回上一界面\t\t\t*\n");
    printf("*************************************************\n");
}


//刘瑞鑫的函数定义

struct Node1* creat_note_customer(struct Node1* end_)//创建客户的链表节点
{
    struct Node1* fresh = (struct Node1*)malloc(sizeof(struct Node1));
    fresh->pnext1 = NULL;
    end_->pnext1 = fresh;
    for(int i = 0 ; i < 20 ; i++)
    {
        fresh->headcliaison[i] = NULL;
    }
    printf("请输入客户编号（数字）：");
    while (1)
    {
        if(scanf("%d",&fresh->cli.clicount)!=1||fresh->cli.clicount<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    printf("请输入客户姓名：");
    while(1)
    {
        scanf("%12s",fresh->cli.cliname);
        if(strlen(fresh->cli.cliname)>10)
        {
            printf("您输入的客户姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户所在区域：");
    while(1)
    {
        scanf("%10s",fresh->cli.cliarea);
        if(strlen(fresh->cli.cliarea)>8)
        {
            printf("您输入的客户所在区域过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户所在地址：");
    while(1)
    {
        scanf("%30s",fresh->cli.cliaddress);
        if(strlen(fresh->cli.cliaddress)>28)
        {
            printf("您输入的客户所在地址过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户法人姓名：");
    while(1)
    {
        scanf("%12s",fresh->cli.clilegalman);
        if(strlen(fresh->cli.clilegalman)>10)
        {
            printf("您输入的客户法人姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户规模（大，中，小）：");
    while(1)
    {
        scanf("%3s",fresh->cli.cliscale);
        if(strcmp(fresh->cli.cliscale,"大")==0||strcmp(fresh->cli.cliscale,"中")==0||strcmp(fresh->cli.cliscale,"小")==0)
        {
            break;
        }
        else if(strlen(fresh->cli.cliscale)>1)
        {
            printf("您输入的客户规模过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请按规定重新输入：\n");
        }
    }

    printf("请输入客户联系程度（高，中，低）：");
    while(1)
    {
        scanf("%3s",fresh->cli.cliconlevel);
        if(strcmp(fresh->cli.cliconlevel,"高")==0||strcmp(fresh->cli.cliconlevel,"中")==0||strcmp(fresh->cli.cliconlevel,"低")==0)
        {
            break;
        }
        else if(strlen(fresh->cli.cliconlevel)>1)
        {
            printf("您输入的客户联系程度过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请按规定重新输入：\n");
        }
    }

    printf("请输入客户邮箱：");
    while(1)
    {
        scanf("%15s",fresh->cli.climailbox);
        if(strlen(fresh->cli.climailbox)>13)
        {
            printf("您输入的客户邮箱过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }

    printf("请输入客户电话号码个数：");
    while (1)
    {
        if(scanf("%d",&fresh->cli.clitelcount)!=1||fresh->cli.clitelcount<0||fresh->cli.clitelcount>10)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    for(int i = 0 ; i < fresh->cli.clitelcount ; i++)
    {
        printf("%d:",i + 1);
        while(1)
        {
            scanf("%13s",fresh->cli.clitel[i]);
            if(strlen(fresh->cli.clitel[i])>11)
            {
                printf("您输入的客户电话号码过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
    }
    end_ = fresh;
    return end_;

}

struct Node2* creat_note_cliaison(struct Node2* end_)//创建客户联络员的链表节点
{
    struct Node2* fresh = (struct Node2*)malloc(sizeof(struct Node2));
    fresh->pnext2 = NULL;
    end_-> pnext2 = fresh;
    printf("请输入客户联络员编号（数字）：");
    while (1)
    {
        if(scanf("%d",&fresh->cli.clcount)!=1||fresh->cli.clcount<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    printf("请输入客户联络员姓名：");
    while(1)
    {
        scanf("%12s",fresh->cli.clname);
        if(strlen(fresh->cli.clname)>10)
        {
            printf("您输入的客户联络员姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户联络性别（男，女）：");
    while(1)
    {
        scanf("%s",fresh->cli.clsex);
        if(strcmp(fresh->cli.clsex,"女")==0||strcmp(fresh->cli.clsex,"男")==0)
        {
            break;
        }
        else if(strlen(fresh->cli.clsex)>1)
        {
            printf("您输入的客户联络员性别过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请重新输入：\n");
        }
    }
    printf("请输入客户联络员生日：");
    while(1)
    {
        scanf("%12s",fresh->cli.clbirthday);
        if(strlen(fresh->cli.clbirthday)>10)
        {
            printf("您输入的客户联络员生日过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入客户联络员邮箱：");
    while(1)
    {
        scanf("%15s",fresh->cli.clmailbox);
        if(strlen(fresh->cli.clmailbox)>13)
        {
            printf("您输入的客户联络员邮箱过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("客户联络员电话号码个数：");
    while (1)
    {
        if(scanf("%d",&fresh->cli.cltelcount)!=1||fresh->cli.cltelcount<0||fresh->cli.cltelcount>10)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    for(int i = 0 ; i < fresh->cli.cltelcount ; i++)
    {
        printf("%d:",i + 1);
        while(1)
        {
            scanf("%13s",fresh->cli.cltel[i]);
            if(strlen(fresh->cli.cltel[i])>11)
            {
                printf("您输入的客户电话号码过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
    }
    end_ = fresh;
    return end_;
}

struct Node3* creat_note_salesman(struct Node3* end_)//创建业务员的链表节点
{
    struct Node3* fresh = (struct Node3*)malloc(sizeof(struct Node3));
    fresh->pnext3 = NULL;
    end_->pnext3 = fresh;
    int num = 0;
    printf("请输入业务员编号（数字）：");
    while (1)
    {
        if(scanf("%d",&fresh->sal.scount)!=1||fresh->sal.scount<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    printf("请输入业务员姓名：");
    while(1)
    {
        scanf("%12s",fresh->sal.sname);
        if(strlen(fresh->sal.sname)>10)
        {
            printf("您输入的业务员姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入业务员性别（男，女）：");
    while(1)
    {
        scanf("%s",fresh->sal.ssex);
        if(strcmp(fresh->sal.ssex,"女")==0||strcmp(fresh->sal.ssex,"男")==0)
        {
            break;
        }
        else if(strlen(fresh->sal.ssex)>1)
        {
            printf("您输入的客户联络员性别过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请重新输入：\n");
        }
    }

    printf("请输入业务员生日：");
    while(1)
    {
        scanf("%12s",fresh->sal.sbirthday);
        if(strlen(fresh->sal.sbirthday)>10)
        {
            printf("您输入的业务员员生日过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入业务员邮箱：");
    while(1)
    {
        scanf("%15s",fresh->sal.smailbocx);
        if(strlen(fresh->sal.smailbocx)>13)
        {
            printf("您输入的业务员邮箱过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("业务员电话号码个数：");
    while (1)
    {
        if(scanf("%d",&fresh->sal.stelcount)!=1||fresh->sal.stelcount<0||fresh->sal.stelcount>10)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    for(int i = 0 ; i < fresh->sal.stelcount ; i++)
    {
        printf("%d:",i + 1);
        while(1)
        {
            scanf("%13s",fresh->sal.stel[i]);
            if(strlen(fresh->sal.stel[i])>11)
            {
                printf("您输入的业务员电话号码过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
    }
    fresh->sal.saleclient_size = 0;
    end_ = fresh;
    return end_;
}



void show_cliasion(struct Node2* head)//简单显示客户联络员的姓名编号
{
    while(head->pnext2 != NULL)
    {
        printf("编号：%d 名字：",head->pnext2->cli.clcount);
        puts(head->pnext2->cli.clname);
        head = head->pnext2;
    }
}

void show_customer(struct Node1* head)//简单显示客户的姓名编号
{
    struct Node1* current = head->pnext1;
    while(current!=NULL)
    {
        printf("编号：%d 名字：",current->cli.clicount);
        puts(current->cli.cliname);
        current = current->pnext1;
    }
}

void show_salesman(struct Node3* head)//简单显示业务员的姓名编号
{
    while(head->pnext3!= NULL)
    {
        printf("编号：%d 名字：%s\n",head->pnext3->sal.scount,head->pnext3->sal.sname);
        head = head->pnext3;
    }
}



void search_customer(struct Node1* head)//查询具体基本信息的函数
{
    char name[12];
    char n[3];
    int m = 0;
    show_customer(head);
    printf("1.姓名查找\n");
    printf("2.编号查找\n");
    printf("3.模糊查询\n");
    printf("输入其他数字退出");
    printf("请输入客户编号（数字）：");
     while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    system("cls");
    if(n[0] == '1')
    {
        printf("请输入要查询的客户姓名：");
        while(1)
        {
            scanf("%12s",name);
            if(strlen(name)>10)
            {
                printf("您输入的客户姓名过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
        search_customer_name(head,name);
    }
    if(n[0] =='2')
    {
        printf("请输入要查询的客户的编号：");
        while (1)
        {
            if(scanf("%d",&m)!=1||m<0)
            {
                printf("输入错误，请重新输入客户编号：\n");
                while((getchar())!='\n');
                continue;
            }
            else
            {
                break;
            }
        }
        search_customer_num(head,m);
    }
    if(n[0]=='3')
    {
        fuzzyquery_client(head->pnext1);
    }
}

void search_customer_num(struct Node1* head,int n)//通过编号来查询
{
    struct Node1 *t = head->pnext1;
    int time = 0;
    while (t!=NULL)
    {
        if(t->cli.clicount == n)
        {
            printf("客户编号:%d\n",t->cli.clicount);
            printf("客户姓名:");
            puts(t->cli.cliname);
            printf("客户所在区域:");
            puts(t->cli.cliarea);
            printf("客户所在地址:");
            puts(t->cli.cliaddress);
            printf("客户法人:");
            puts(t->cli.clilegalman);
            printf("客户规模:");
            puts(t->cli.cliscale);
            printf("客户联系程度:");
            puts(t->cli.cliconlevel);
            printf("客户邮箱:");
            puts(t->cli.climailbox);
            time = 1;
            exchange_customer(t);
        }

        t = t->pnext1;

    }
    if(time == 0)
    {
        printf("没有此用户");
    }
        system("pause");
}

void search_customer_name(struct Node1* head,char* a)//通过姓名来查询
{
    struct Node1 *t = head->pnext1;
    int time = 0;
    while (t!=NULL)
    {
        if(strcmp(t->cli.cliname,a) == 0)
        {
            printf("客户编号:%d\n",t->cli.clicount);
            printf("客户姓名:");
            puts(t->cli.cliname);
            printf("客户所在区域:");
            puts(t->cli.cliarea);
            printf("客户所在地址:");
            puts(t->cli.cliaddress);
            printf("客户法人:");
            puts(t->cli.clilegalman);
            printf("客户规模:");
            puts(t->cli.cliscale);
            printf("客户联系程度:");
            puts(t->cli.cliconlevel);
            printf("客户邮箱:");
            puts(t->cli.climailbox);
            time = 1;
            exchange_customer(t);
        }
        t = t->pnext1;
    }
    if(time == 0)
    {
        printf("没有此用户");
    }
            system("pause");
}





void search_cliaison(struct Node2* head)//查询具体基本信息的函数
{
    char name[10];
    char n[3];
    int  m = 0;
    show_cliasion(head);
    printf("1.姓名查找\n");
    printf("2.编号查找\n");
    printf("3.模糊查询\n");
    printf("输入其他数字退出\n");
    printf("请输入客户编号（数字）：");
     while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    if(n[0] == '1')
    {
        system("cls");
        printf("请输入要查询的客户联络员姓名：");
        while(1)
        {
            scanf("%12s",name);
            if(strlen(name)>10)
            {
                printf("您输入的客户联络员姓名过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
        search_customer_name(head,name);
        search_cliaison_name(head,name);
    }
    if(n[0] == '2')
    {
        system("cls");
        printf("请输入要查询的客户联络员的编号：");
        while (1)
        {
            if(scanf("%d",&m)!=1||m<0)
            {
                printf("输入错误，请重新输入客户联络员编号：\n");
                while((getchar())!='\n');
                continue;
            }
            else
            {
                break;
            }
        }
        scanf("%d",&m);
        search_cliaison_num(head,m);
    }
    if(n[0]=='3')
    {
        fuzzyquery_cliaison(head->pnext2);
    }
}

void search_cliaison_num(struct Node2 * head,int n)//通过编号来查询
{
    struct Node2* t = head->pnext2;
    int time = 0;
    while (t!=NULL)
    {
        if(t->cli.clcount == n)
        {
            printf("客户联络员编号:%d\n",t->cli.clcount);
            printf("客户联络员姓名:");
            puts(t->cli.clname);
            printf("客户联络员性别:");
            puts(t->cli.clsex);
            printf("客户联络员生日:");
            puts(t->cli.clbirthday);
            printf("客户联络员邮箱:");
            puts(t->cli.clmailbox);
            time = 1;
            exchange_cliaison(t);

        }

        t = t->pnext2;

    }
    if(time == 0)
    {
        printf("没有此业务联络员");
    }
        system("pause");
}

void search_cliaison_name(struct Node2 * head,char* a)//通过姓名来查询
{
    struct Node2* t = head->pnext2;
    int time = 0;
    while (t!=NULL)
    {
        if(strcmp(t->cli.clname,a) == 0)
        {
            printf("客户联络员编号:%d\n",t->cli.clcount);
            printf("客户联络员姓名:");
            puts(t->cli.clname);
            printf("客户联络员性别:");
            puts(t->cli.clsex);
            printf("客户联络员生日:");
            puts(t->cli.clbirthday);
            printf("客户联络员邮箱:");
            puts(t->cli.clmailbox);
            time = 1;
            exchange_cliaison(t);
        }
        t = t->pnext2;
    }
    if(time == 0)
    {
        printf("没有此业务联络员");
    }

    system("pause");
}




void search_salesman(struct Node3* head)//查询具体基本信息的函数
{
    char name[10];
    char n[3];
    int m = 0;
    show_salesman(head);
    printf("1.姓名查找\n");
    printf("2.编号查找\n");
    printf("3.模糊查询\n");
    printf("输入其他数字退出");
    while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    if(n[0] == '1')
    {
        system("cls");
        printf("请输入要查询的业务员姓名：");
        while(1)
        {
            scanf("%12s",name);
            if(strlen(name)>10)
            {
                printf("您输入的业务员姓名过长，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
         }
        search_salesman_name(head,name);
    }
    if(n[0] == '2')
    {
        system("cls");
        printf("请输入要查询业务员的编号：");
        while (1)
        {
            if(scanf("%d",&m)!=1||m<0)
            {
                printf("输入错误，请重新输入客户联络员编号：\n");
                while((getchar())!='\n');
                continue;
            }
            else
            {
                break;
            }
        }
        search_salesman_num(head,m);
    }
    if(n[0]=='3')
    {
        fuzzyquery_salesman(head->pnext3);
    }
}

void search_salesman_num(struct Node3 * head,int n)//通过编号来查询
{
    struct Node3* t = head->pnext3;
    int time = 0;
    while (t!=NULL)
    {
        if(t->sal.scount == n)
        {
            printf("业务员编号:%d\n",t->sal.scount);
            printf("业务员姓名:");
            puts(t->sal.sname);
            printf("业务员性别:");
            puts(t->sal.ssex);
            printf("业务员生日:");
            puts(t->sal.sbirthday);
            printf("业务员邮箱:");
            puts(t->sal.smailbocx);
            time = 1;
            exchange_salesman(t);
        }
        t = t->pnext3;
    }
    if(time == 0)
    {
        printf("没有此业务员！\n");
    }
    system("pause");
}

void search_salesman_name(struct Node3 * head,char* a)//通过姓名来查询
{
    struct Node3* t = head->pnext3;
    int time = 0;
    while (t!=NULL)
    {
        if(strcmp(t->sal.sname,a) == 0)
        {
            printf("业务员编号:%d\n",t->sal.scount);
            printf("业务员姓名:");
            puts(t->sal.sname);
            printf("业务员性别:");
            puts(t->sal.ssex);
            printf("业务员生日:");
            puts(t->sal.sbirthday);
            printf("业务员邮箱:");
            puts(t->sal.smailbocx);
            time = 1;
            exchange_salesman(t);
        }
        t = t->pnext3;
    }
    if(time == 0)
    {
        printf("没有此业务员!\n");
    }
    system("pause");
}


void fuzzyquery_client(struct Node1* head1)//模糊查询客户
{
    char ncliname[12];
    int i;
    printf("请输入要查找的客户姓名的关键字：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名关键字过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node1*p=head1;
    if(p==NULL)
    {
        printf("未查询到该顾客信息！\n");
    }
     while(p!=NULL)
    {
        if(strstr (p->cli.cliname,ncliname)!=NULL)//用于在一个字符串中查找另一个字符首次出现，找到了返回在其首次出现位置的指针，没有返回NULL
        {
            printf("客户编号:%d\n",p->cli.clicount);
            printf("客户姓名:");
            puts(p->cli.cliname);
            printf("客户所在区域:");
            puts(p->cli.cliarea);
            printf("客户所在地址:");
            puts(p->cli.cliaddress);
            printf("客户法人:");
            puts(p->cli.clilegalman);
            printf("客户规模:");
            puts(p->cli.cliscale);
            printf("客户联系程度:");
            puts(p->cli.cliconlevel);
            printf("客户邮箱:");
            puts(p->cli.climailbox);
            for(i=0;i<p->cli.clitelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
            }
            printf("\n");
            exchange_customer(p);
        }
        p=p->pnext1;
    }
    system("pause");
    system("cls");
}
void fuzzyquery_cliaison(struct Node2* head1)//模糊查询客户联络员
{
    char ncliname[12];
    int i;
    printf("请输入要查找的客户联络员姓名的关键字：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户联络员姓名关键字过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node2*p=head1;
    if(p==NULL)
    {
        printf("未查询到该顾客信息！\n");
    }
     while(p!=NULL)
    {
        if(strstr (p->cli.clname,ncliname)!=NULL)//用于在一个字符串中查找另一个字符首次出现，找到了返回在其首次出现位置的指针，没有返回NULL
        {
            printf("客户联络员编号:%d\n",p->cli.clcount);
            printf("客户联络员姓名:");
            puts(p->cli.clname);
            printf("客户联络员性别:");
            puts(p->cli.clsex);
            printf("客户联络员生日:");
            puts(p->cli.clbirthday);
            printf("客户联络员邮箱:");
            puts(p->cli.clmailbox);
            for(i=0;i<p->cli.cltelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->cli.cltel[i]);
            }
            printf("\n");
            exchange_cliaison(p);

        }
        p=p->pnext2;
    }
    system("pause");
    system("cls");
}
void fuzzyquery_salesman(struct Node3* head1)//模糊查询业务员
{
    char ncliname[12];
    int i;
    printf("请输入要查找的业务员姓名的关键字：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名关键字过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node3*p=head1;
    if(p==NULL)
    {
        printf("未查询到该顾客信息！\n");
    }
     while(p!=NULL)
    {
            printf("业务员编号:%d\n",p->sal.scount);
            printf("业务员姓名:");
            puts(p->sal.sname);
            printf("业务员性别:");
            puts(p->sal.ssex);
            printf("业务员生日:");
            puts(p->sal.sbirthday);
            printf("业务员邮箱:");
            puts(p->sal.smailbocx);
            for(i=0;i<p->sal.stelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->sal.stel[i]);
            }
            printf("\n");
            exchange_salesman(p);
            p=p->pnext3;
    }
    system("pause");
    system("cls");
}


void exchange_customer(struct Node1* t)//在查询后进行修改（客户）
{
    printf("是否进行修改 1-是，2-否");
    char n[3],m[3];
    int end_ = 0;
     while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    if(n[0] == '1')
    {
        printf("1.客户编号 ");
        printf("2.客户姓名 ");
        printf("3.客户所在区域 ");
        printf("4.客户所在地址 ");
        printf("5.客户法人 ");
        printf("6.客户规模 ");
        printf("7.客户联系程度 ");
        printf("8.客户邮箱 ");
        printf("0.退出\n");
        while(end_ == 0)
        {
        printf("请输入修改的项:  ");
         while(1)
        {
            scanf("%2s",m);
            m[2]='\0';
            if(strlen(m)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        switch(m[0])
        {
            case '1' :
                printf("请输入更改后结果：  ");
                scanf("%d",&t->cli.clicount);
                printf("客户修改成功！\n");
                break;
            case '2' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.cliname);
                printf("客户姓名修改成功！\n");
                break;
            case '3' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.cliarea);
                printf("客户所在区域修改成功！\n");
                break;
            case '4' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.cliaddress);
                printf("客户所在地址修改成功！\n");
                break;
            case '5' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.clilegalman);
                printf("客户法人修改成功！\n");
                break;
            case '6' :
                printf("请输入更改后结果：  ");
                scanf("%d",&t->cli.cliscale);
                printf("客户规模修改成功！\n");
                break;
            case '7' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.cliconlevel);
                printf("客户联系程度修改成功！\n");
                break;
            case '8' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.climailbox);
                printf("客户邮箱修改成功！\n");
                break;
            case '0' :
                end_ = 1;
                break;
            default : break;
        }
        }
    }

}

void exchange_cliaison(struct Node2* t)//在查询后进行修改（客户联络员）
{
    printf("是否进行修改 1-是，2-否");
    char n[3];
    char m[3];
    int end_;
     while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    if(n[0] == '1')
    {
        printf("1.客户联络员编号");
        printf("2.客户联络员姓名");
        printf("3.客户联络员性别");
        printf("4.客户联络员生日");
        printf("5.客户联络员邮箱");
        printf("0.退出");
        while(end_ == 0)
        {
        printf("请输入要更改的项:    ");
        while(1)
        {
            scanf("%2s",m);
            m[2]='\0';
            if(strlen(m)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        switch(m[0])
        {
            case '1' :
                printf("请输入更改后结果：  ");
                scanf("%d",&t->cli.clcount);
                printf("客户联络员编号修改成功！\n");
                break;
            case '2' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.clname);
                printf("客户联络员姓名修改成功！\n");
                break;
            case '3' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.clsex);
                printf("客户联络员性别修改成功！\n");
                break;
            case '4' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.clbirthday);
                printf("客户联络员生日修改成功！\n");
                break;
            case '5' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->cli.clmailbox);
                printf("客户联络员邮箱修改成功！\n");
                break;
            case '0' :
                end_ = 1;
                break;
            default:
                break;
        }
        }
    }

}

void exchange_salesman(struct Node3* t)//在查询后进行修改（业务员）
{
    printf("是否进行修改 1-是，2-否");
    char n[3];
    char m[3];
    int end_ = 0;
     while(1)
    {
        scanf("%2s",n);
        n[2]='\0';
        if(strlen(n)>1)
        {
            printf("您的输入有误，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    if(n[0]== '1')
    {
        printf("1.业务员编号");
        printf("2.业务员姓名");
        printf("3.业务员性别");
        printf("4.业务员生日");
        printf("5.业务员邮箱");
        printf("0.退出");
        while(end_ == 0)
        {
        printf("请输入要更改的项:   ");
        while(1)
        {
            scanf("%2s",m);
            m[2]='\0';
            if(strlen(m)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        switch(m[0])
        {
            case '1' :
                printf("请输入更改后结果：  ");
                scanf("%d",&t->sal.scount);
                printf("业务员编号修改成功！\n");
                break;
            case '2' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->sal.sname);
                printf("业务员姓名修改成功！\n");
                break;
            case '3' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->sal.ssex);
                printf("业务员性别修改成功！\n");
                break;
            case '4' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->sal.sbirthday);
                printf("业务员生日修改成功！\n");
                break;
            case '5' :
                printf("请输入更改后结果：  ");
                scanf("%s",&t->sal.smailbocx);
                printf("业务员邮箱修改成功！\n");
                break;
            case '0' :
                end_ = 1;
                break;
            default:
                break;
        }
        }
    }

}


struct Node1* delete_customer(struct Node1 *head)//删除客户节点
{
    show_customer(head);
    printf("请输入要删除的节点的编号：");
    int cli_count = 0;
    while (1)
    {
        if(scanf("%d",&cli_count)!=1||cli_count<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    struct Node1 *current = head;
    struct Node1 *prev = NULL;
    int found = 0;

    // 遍历链表查找要删除的节点
    while (current != NULL) {
        if (current->cli.clicount == cli_count) {
            found = 1;
            break;
        }
        prev = current;
        current = current->pnext1;
    }

    if (found) {
        // 如果找到了要删除的节点
        if (prev == NULL) {
            // 删除的是头节点
            head = current->pnext1;
        } else {
            // 删除的不是头节点
            prev->pnext1 = current->pnext1;
        }

        // 释放被删除节点的内存
        free(current);
    } else {
        printf("没有找到编号为 %d 的客户\n", cli_count);
    }

    return head; // 返回更新后的头节点
}

struct Node2* delete_cliaison(struct Node2 *head)//删除客户联络员节点
{
    show_cliasion(head);
    printf("请输入要删除的节点的编号：");
    int cl_count = 0;
    while (1)
    {
        if(scanf("%d",&cl_count)!=1||cl_count<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    struct Node2 *current = head;
    struct Node2 *prev = NULL;
    int found = 0;

    // 遍历链表查找要删除的节点
    while (current != NULL) {
        if (current->cli.clcount == cl_count) {
            found = 1;
            break;
        }
        prev = current;
        current = current->pnext2;
    }

    if (found) {
        // 如果找到了要删除的节点
        if (prev == NULL) {
            // 删除的是头节点
            head = current->pnext2;
        } else {
            // 删除的不是头节点
            prev->pnext2 = current->pnext2;
        }

        // 释放被删除节点的内存
        free(current);
    } else {
        printf("没有找到编号为 %d 的业务联络员\n", cl_count);
    }

    return head; // 返回更新后的头节点
}

struct Node3* delete_salesman(struct Node3 *head)//删除业务员节点
{
    show_salesman(head);
    printf("请输入要删除的节点的编号：");
    int scount = 0;
    while (1)
    {
        if(scanf("%d",&scount)!=1||scount<0)
        {
            printf("输入错误，请重新输入：\n");
            while((getchar())!='\n');
            continue;
        }
        else
        {
            break;
        }
    }
    struct Node3 *current = head;
    struct Node3 *prev = NULL;
    int found = 0;

    // 遍历链表查找要删除的节点
    while (current != NULL) {
        if (current->sal.scount == scount) {
            found = 1;
            break;
        }
        prev = current;
        current = current->pnext3;
    }

    if (found) {
        // 如果找到了要删除的节点
        if (prev == NULL) {
            // 删除的是头节点
            head = current->pnext3;
        } else {
            // 删除的不是头节点
            prev->pnext3 = current->pnext3;
        }

        // 释放被删除节点的内存
        free(current);
    } else {
        printf("没有找到编号为 %d 的业务员\n", scount);
    }

    return head; // 返回更新后的头节点
}





//赵鸿轩的函数定义




void clsort(struct Node2* head2) //对客户联络员信息排序
{
    if (head2 == NULL) {
        printf("输入链表为空！\n");
        return;
    }

    struct Node2* p = head2;
    struct Node2* t = NULL;
    struct Node2* cur = p->pnext2;
    struct Node2* prev = head2;
    struct Node2* end = NULL;
    int i;
    int swap = 0;
    p = head2;
    printf("请选择排序方式\n");
    printf("1-按联络员姓名进行排序\n");
    printf("2-按联络员编号进行排序\n");
    char sortType = getch();
    printf("请选择升降序:\n");
    printf("1-升序 2-降序\n");
    char sortorder = getch();

    while (cur != end) {
        swap = 0;

        while (cur->pnext2 != end) {
            if (sortType == '1') {
                if ((sortorder == '1' && strcmp(cur->cli.clname, cur->pnext2->cli.clname) > 0) ||
                    (sortorder == '2' && strcmp(cur->cli.clname, cur->pnext2->cli.clname) < 0)) {
                    t = cur->pnext2->pnext2;
                    prev->pnext2 = cur->pnext2;
                    cur->pnext2->pnext2 = cur;
                    cur->pnext2 = t;
                    prev = prev->pnext2;
                    swap = 1;
                } else {
                    prev = cur;
                    cur = cur->pnext2;
                }
            } else if (sortType == '2') {
                if ((sortorder == '1' && cur->cli.clcount > cur->pnext2->cli.clcount) ||
                    (sortorder == '2' && cur->cli.clcount < cur->pnext2->cli.clcount)) {
                    t = cur->pnext2->pnext2;
                    prev->pnext2 = cur->pnext2;
                    cur->pnext2->pnext2 = cur;
                    cur->pnext2 = t;
                    prev = prev->pnext2;
                    swap = 1;
                } else {
                    prev = cur;
                    cur = cur->pnext2;
                }
            }
        }

        if (swap == 0) {
            break;
        }

        end = cur;
        prev = p;
        cur = p->pnext2;
    }

    p = head2->pnext2;
    while (p != NULL) {
        printf("联络员编号：%d 联络员姓名:%s 联络员性别:%s 联络员生日:%s 联络员邮箱:%s 电话号码数量:%d ",
               p->cli.clcount, p->cli.clname, p->cli.clsex, p->cli.clbirthday, p->cli.clmailbox, p->cli.cltelcount);

        for (i = 0; i < p->cli.cltelcount; i++) {
            printf("电话号码%d：%s ", i + 1, p->cli.cltel[i]);
        }

        printf("\n");
        p = p->pnext2;
    }

    system("pause");
}
void salsort(struct Node3* head3)//对业务员信息排序
{
    if (head3 == NULL) {
        printf("输入链表为空！\n");
        return;
    }

    struct Node3* p = head3;
    struct Node3* t = NULL;
    struct Node3* cur = p->pnext3;
    struct Node3* prev = head3;
    struct Node3* end = NULL;
    int i;
    int swap = 0;
    p = head3;
    printf("请选择排序方式\n");
    printf("1-按业务员姓名进行排序\n");
    printf("2-按业务员编号进行排序\n");
    char sortType = getch();

    printf("请选择升降序:\n");
    printf("1-升序 2-降序\n");
    char sortorder = getch();

    while (cur != end) {
        swap = 0;

        while (cur->pnext3 != end) {
            if (sortType == '1') {
                if ((sortorder == '1' && strcmp(cur->sal.sname, cur->pnext3->sal.sname) > 0) ||
                    (sortorder == '2' && strcmp(cur->sal.sname, cur->pnext3->sal.sname) < 0)) {
                    t = cur->pnext3->pnext3;
                    prev->pnext3 = cur->pnext3;
                    cur->pnext3->pnext3 = cur;
                    cur->pnext3 = t;
                    prev = prev->pnext3;
                    swap = 1;
                } else {
                    prev = cur;
                    cur = cur->pnext3;
                }
            } else if (sortType == '2') {
                if ((sortorder == '1' && cur->sal.scount > cur->pnext3->sal.scount) ||
                    (sortorder == '2' && cur->sal.scount < cur->pnext3->sal.scount)) {
                    t = cur->pnext3->pnext3;
                    prev->pnext3 = cur->pnext3;
                    cur->pnext3->pnext3 = cur;
                    cur->pnext3 = t;
                    prev = prev->pnext3;
                    swap = 1;
                } else {
                    prev = cur;
                    cur = cur->pnext3;
                }
            }
        }

        if (swap == 0) {
            break;
        }

        end = cur;
        prev = p;
        cur = p->pnext3;
      }
      p = head3->pnext3;
      while (p != NULL) {
        printf("业务员编号：%d 业务员姓名:%s 业务员性别:%s 业务员生日:%s 业务员邮箱:%s 电话号码数量:%d ",
               p->sal.scount, p->sal.sname, p->sal.ssex, p->sal.sbirthday, p->sal.smailbocx, p->sal.stelcount);

        for (i = 0; i < p->sal.stelcount; i++) {
            printf("电话号码%d：%s ", i + 1, p->sal.stel[i]);
        }

        printf("\n");
        p = p->pnext3;
    }

    system("pause");
}
void cliareasinglestatistic(struct Node1* head)//按区域对客户进行统计
{
      struct Node1*p=head;
      char narea[10];
      int count=0;
      printf("请输入要统计的区域:\n");
      while(1)
      {
         scanf("%10s",narea);
         //检测输入区域
         if(strlen(narea)>9)
         {
               printf("您输入的客户所在区域过长，请重新输入：\n");
               while((getchar())!='\n');
         }
         else
         {
               break;
         }
      }
      while(p!=NULL)
      {
            if(strcmp(p->cli.cliarea,narea)==0)
            {
               count+=1;
            }
            p=p->pnext1;
      }
      printf("%s区域的客户人数为:%d\n",narea,count);
      system("pause");
}
void cliscalesinglestatistic(struct Node1* head)//按规模对客户进行统计
{
      struct Node1*p=head;
      char nscale[3];
      int count=0;
      int i;
      printf("请输入客户规模（大，中，小）：");
      while(1)
      {
         scanf("%3s",nscale);
         //检测输入规模
         if(strcmp(nscale,"大")==0||strcmp(nscale,"中")==0||strcmp(nscale,"小")==0)
         {
               break;
         }
         else if(strlen(nscale)>2)
         {
               printf("您输入的客户规模过长，请重新输入：\n");
               while((getchar())!='\n');
         }
         else
         {
               printf("您的输入有误，请按规定重新输入：\n");
         }
      }
      while(p!=NULL)
      {
         if(strcmp(p->cli.cliscale,nscale)==0)
         {
             count+=1;
         }
         p=p->pnext1;
      }
      printf("%s规模的客户人数为:%d\n",nscale,count);
      system("pause");
}
void clilevelsinglestatistic(struct Node1* head)//按联系程度对客户进行统计
{
      struct Node1*p=head;
      char nlevel[3];
      int count=0;
      int i;
      printf("请输入客户联系程度（高，中，低）：");
      while(1)
      {
         scanf("%3s",nlevel);
         //检测输入联系程度
         if(strcmp(nlevel,"高")==0||strcmp(nlevel,"中")==0||strcmp(nlevel,"低")==0)
         {
               break;
         }
         else if(strlen(nlevel)>2)
         {
               printf("您输入的客户联系程度过长，请重新输入：\n");
               while((getchar())!='\n');
         }
         else
         {
               printf("您的输入有误，请按规定重新输入：\n");
         }
      }
      while(p!=NULL)
      {
         if(strcmp(p->cli.cliconlevel,nlevel)==0)
         {
             count+=1;
         }
         p=p->pnext1;
      }
      printf("%s联系程度的客户人数为:%d\n",nlevel,count);
      system("pause");
}
void climultistatistic(struct Node1* head1)//按规模和联系程度对客户进行统计
{
      struct Node1*p=head1;
      int count=0;
      int i;
      char nscale[3];
      char nlevel[3];
      printf("请输入客户规模（大，中，小）：");
      while(1)
      {
         scanf("%3s",nscale);
         if(strcmp(nscale,"大")==0||strcmp(nscale,"中")==0||strcmp(nscale,"小")==0)
         {
               break;
         }
         else if(strlen(nscale)>2)
         {
               printf("您输入的客户规模过长，请重新输入：\n");
               while((getchar())!='\n');
         }
         else
         {
               printf("您的输入有误，请按规定重新输入：\n");
         }
      }
      printf("请输入客户联系程度（高，中，低）：");
      while(1)
      {
         scanf("%3s", nlevel);
         if(strcmp( nlevel,"高")==0||strcmp( nlevel,"中")==0||strcmp( nlevel,"低")==0)
         {
               break;
         }
         else if(strlen( nlevel)>2)
         {
               printf("您输入的客户联系程度过长，请重新输入：\n");
               while((getchar())!='\n');
         }
         else
         {
               printf("您的输入有误，请按规定重新输入：\n");
         }
      }
      while(p!=NULL)
      {
         if(strcmp(p->cli.cliscale,nscale)==0&&strcmp(p->cli.cliconlevel,nlevel)==0)
         {
               count+=1;
         }
         p=p->pnext1;
      }
      printf("客户规模为%s和客户联系程度为%s的人数为:%d\n",nscale,nlevel,count);
      system("pause");
}
void cliconditionquery(struct Node1* head1)//条件统计查找客户的联络员数量
{
      char ncliname[14];
      printf("请输入客户姓名：\n");
      scanf("%s",ncliname);
      struct Node1*p1=head1;
      int n = 0;
      while(p1!=NULL)
      {
         if(strcmp (p1->cli.cliname,ncliname)==0)
         {
               n = 1;
               break;
         }
         p1=p1->pnext1;
      }
      if(n == 0)
      {
         printf("无此客户信息！\n");
         system("pause");
      }
      else
      {
         int count = 0;
         for (int i = 0; i < p1->cliaison_size; i++)
         {
               struct Node2* p2 = p1->headcliaison[i];
               while (p2 != NULL)
               {
                  count += 1;
                  p2 = p2->pnext2;
               }
         }
        printf("该客户的联络员数量为%d\n", count);
        system("pause");
    }

}
void displaygroupclientcount(struct Node4* head)//对指定分组下客户数量进行统计
{
      struct Node4* current = head->pnext4;
      int found = 0;//添加一个标志表示是否找到分组
      char groupName[12];
      printf("请输入组名\n");
      scanf("%s",groupName);
      if(strlen(groupName)>12)
      {
            printf("组名过长！请重新输入\n");
            while((getchar())!='\n');
      }
      while (current != NULL)
      {
         if (strcmp(current->crgroup.cusname,groupName) == 0)
         {
               printf("分组名称: %s\n", current->crgroup.cusname);
               printf("客户数量: %d\n", current->crgroup.size_);
               found = 1;
               return;
         }
         current = current->pnext4;
      }
      if (!found) // 如果未找到匹配的分组
      {
         printf("未找到分组 '%s'\n", groupName);

      }
      system("pause");
}
void clistatistics(struct Node1 *head,struct Node4* head_cusgroup)//统计客户信息
{
      int clicount = 0;
      int targetcliaison =0;
      int targetclient = 0;
      struct Node1 *current = head->pnext1;
      struct Node4* headgroup = NULL;
      if (head == NULL)
      {
         printf("无法进行统计\n");
         system("pause");
         system("cls");
         return;
      }
      printf("请选择统计方式\n");
      printf("1-统计客户数量\n");
      printf("2-统计指定区域客户数量\n");
      printf("3-统计指定规模客户数量\n");
      printf("4-统计指定联系程度客户数量\n");
      printf("5-统计指定规模及联系程度的客户数量\n");
      printf("6-统计指定客户所有联络员数量\n");
      printf("7-统计指定分组下客户数量\n");
      printf("0-返回上一界面\n");
      while (1)
      {
         char sortType=getch();
         switch(sortType)
         {
            case '1':
               while (current != NULL)
               {
               clicount++;
               current = current->pnext1;
               }
               printf("客户有%d位\n",clicount);
               system("pause");
               break;
            case '2':
               {
               cliareasinglestatistic(head);
               break;
               }
            case '3':
               {
               cliscalesinglestatistic(head);
               break;
               }
            case '4':
               {
               clilevelsinglestatistic(head);
               break;
               }
            case '5':
               {
               climultistatistic(head);
               break;
               }
            case '6':
               {
               cliconditionquery(head);
               break;
               }
            case '7':
               {
               displaygroupclientcount(head_cusgroup);
               break;
               }
            case '0':
               {
               break;
               }
            default:
               {
               printf("输入错误，请重新输入！\n");
               system("pause");
               break;
               }
         }
         if(sortType=='0')
         {
            system("cls");
            break;
         }
      }
}
void clstatistics(struct Node2 *head)//统计客户联络员数量
{
         int clcount = 0;
         struct Node2 *current2 = head->pnext2;
         if (head == NULL)
         {
         printf("无法进行统计\n");
         return;
         }
         while (current2 != NULL)
         {
         clcount++;
         current2 = current2->pnext2;
         }
         printf("客户联络员有%d位\n",clcount);
         system("pause");
}
void salstatistics(struct Node3 *head)//统计业务员数量
{
         int salcount = 0;
         struct Node3 *current = head->pnext3;
         if (head == NULL)
         {
         printf("无法进行统计\n");
         system("pause");
         return;
         }
         while (current != NULL)
         {
            salcount++;
            current = current->pnext3;
         }
         printf("业务员有%d位\n",salcount);
         system("pause");
}


void clisort(struct Node1 *head1)
{
   struct Node1*p=head1->pnext1;
   int i;
   printf("请选择排序方式\n");
   printf("1-根据客户编号进行排序\n");
   printf("2-根据客户所在区域进行排序\n");
   printf("3-根据客户规模进行排序\n");
   printf("4-先根据客户所在区域进行排序，后根据客户编号进行排序\n");
   printf("5-先根据客户规模进行排序，后根据客户编号进行排序\n");
   char sortType=getch();
   switch(sortType)
   {
   case '1':
      sortByClientCount(head1->pnext1);
      while(p!=NULL)
      {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;
      }
      system("pause");
      system("cls");
      break;
   case '2':
      sortByClientArea(head1->pnext1);
      while(p!=NULL)
      {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;
      }
      system("pause");
      system("cls");
      break;
   case '3':
      sortByClientScale(head1->pnext1);
      while(p!=NULL)
      {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;
      }
      system("pause");
      system("cls");
      break;
   case '4':
      sortByClientArea(head1->pnext1);
      sortByClientCount(head1->pnext1);
      while(p!=NULL)
      {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;
      }
      system("pause");
      system("cls");
      break;
   case '5':
      sortByClientScale(head1->pnext1);
      sortByClientCount(head1->pnext1);
      while(p != NULL)
      {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p = p->pnext1;
      }
      system("pause");
      system("cls");
      break;
   }
}
// 插入客户节点
void insertClient(struct Node1 **head, struct client newClient)
{
    struct Node1 *newNode = (struct Node1 *)malloc(sizeof(struct Node1));
    newNode->cli = newClient;
    newNode->pnext1 = *head;
    *head = newNode;
}
// 交换两个客户节点
void swap(struct Node1 *a, struct Node1 *b)
{
    struct client temp = a->cli;
    a->cli = b->cli;
    b->cli = temp;
}
// 根据客户编号进行排序
void sortByClientCount(struct Node1 *head)
{
    int swapped;
    struct Node1 *ptr1 = NULL;
    struct Node1 *lptr = NULL;

    /* 检查链表是否为空 */
    if (head == NULL) return;
    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->pnext1 != lptr)
        {
            if (ptr1->cli.clicount > ptr1->pnext1->cli.clicount)
            {
                swap(ptr1, ptr1->pnext1);
                swapped = 1;
            }
            ptr1 = ptr1->pnext1;
        }
        lptr = ptr1;
    } while (swapped);
}
// 根据客户所在区域进行排序
void sortByClientArea(struct Node1 *head)
{
    int swapped;
    struct Node1 *ptr1;
    struct Node1 *lptr = NULL;

    /* 检查链表是否为空 */
    if (head == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->pnext1 != lptr)
        {
            if (strcmp(ptr1->cli.cliarea, ptr1->pnext1->cli.cliarea) > 0)
            {
                swap(ptr1, ptr1->pnext1);
                swapped = 1;
            }
            ptr1 = ptr1->pnext1;
        }
        lptr = ptr1;
    } while (swapped);
}
// 根据客户规模进行排序
void sortByClientScale(struct Node1 *head)
{
    int swapped;
    struct Node1 *ptr1;
    struct Node1 *lptr = NULL;

    /* 检查链表是否为空 */
    if (head == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->pnext1 != lptr)
        {
            if (ptr1->cli.cliscale > ptr1->pnext1->cli.cliscale)
            {
                swap(ptr1, ptr1->pnext1);
                swapped = 1;
            }
            ptr1 = ptr1->pnext1;
        }
        lptr = ptr1;
    } while (swapped);
}






//计林敏的函数定义

void pwmaintenance(char mpw[],char spw[])//密码维护
{
    char nmpw[14],nnmpw[14],nspw[14],nnspw[14];
    char i[3];
    printf("1.修改经理密码 2.修改业务员密码 3.重置经理密码 4.重置业务员密码 0.退出密码维护功能\n请输入您要执行的操作：");
    while(1)
    {

        while(1)
        {
            scanf("%2s",i);
            i[2]='\0';
            if(strlen(i)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        if(i[0]=='1')
        {
            printf("请输入您的12位以内的新密码：\n");
            while(1)
            {
                while(1)
                {
                    scanf("%13s",nmpw);
                    nmpw[13]='\0';
                    if(strlen(nmpw)>12)
                    {
                        printf("您输入的密码过长，请重新输入：\n");
                        while((getchar())!='\n');
                    }
                    else
                    {
                        break;
                    }
                }
                printf("请再次输入您的12位以内新密码：\n");
                while(1)
                {
                    scanf("%13s",nnmpw);
                    nnmpw[13]='\0';
                    if(strlen(nnmpw)>12)
                    {
                        printf("您输入的密码过长，请重新输入：\n");
                        while((getchar())!='\n');
                    }
                    else
                    {
                        break;
                    }
                 }
                 if(strcmp(nmpw,nnmpw)==0)
                 {
                     strcpy(mpw,nmpw);
                     printf("您的密码修改成功！\n");
                     break;
                 }
                 else
                 {
                     printf("两次输入的密码不一致，请重新输入您的12位以内的新密码：\n");
                 }
            }
            system("pause");
            break;
        }

        else if(i[0]=='2')
        {
            printf("请输入业务员的12位以内的新密码：\n");
            while(1)
            {
                while(1)
                {
                    scanf("%13s",nspw);
                    nmpw[13]='\0';
                    if(strlen(nspw)>12)
                    {
                        printf("您输入的密码过长，请重新输入：\n");
                        while((getchar())!='\n');
                    }
                    else
                    {
                        break;
                    }
                }
                printf("请再次输入您的12位以内新密码：\n");
                while(1)
                {
                    scanf("%13s",nnspw);
                    nnmpw[13]='\0';
                    if(strlen(nnspw)>12)
                    {
                        printf("您输入的密码过长，请重新输入：\n");
                        while((getchar())!='\n');
                    }
                    else
                    {
                        break;
                    }
                 }
                 if(strcmp(nspw,nnspw)==0)
                 {
                     strcpy(spw,nspw);
                     printf("您的密码修改成功！\n");
                     break;
                 }
                 else
                 {
                     printf("两次输入的密码不一致，请重新输入您的12位以内的新密码：\n");
                 }
            }
            system("pause");
            break;

        }
        else if(i[0]=='3')
        {
            strcpy(mpw,"123456");
            printf("您的密码重置成功！\n");
            system("pause");
            break;
        }
        else if(i[0]=='4')
        {
            strcpy(spw,"123456");
            printf("业务员的密码重置成功！\n");
            system("pause");
            break;
        }
        else if(i[0]=='0')
        {
            break;
        }
        else
        {
            printf("您的输入有误，请重新输入：\n");
        }

    }

}


void datebackup(struct Node1* np1,struct Node2* np2,struct Node3* np3)//数据备份
{
    struct Node1* p1=np1->pnext1;
    struct Node2* p2=np2->pnext2;
    struct Node3* p3=np3->pnext3;
    char i[3];
    int j;
    printf("1.备份客户数据 2.备份客户联络员数据 3.备份业务员数据  0.退出数据备份功能\n请选择要执行的操作：");
    while(1)
    {
        while(1)
        {
            scanf("%2s",i);
            i[2]='\0';
            if(strlen(i)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        if(i[0]=='1')
        {
            //打开文件
            FILE *fp= fopen("C:\\customer.data","w");//写入，如果文件不存在创建文件，文件存在清空内容再写入
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }
            if(p1==NULL)
            {
                printf("您没有客户数据可备份！\n");
                system("pause");
                break;
            }
            while(p1!=NULL)
            {
                fprintf(fp,"客户编号：%d 客户姓名：%s 客户所在区域：%s 客户所在地址：%s 客户法人：%s 客户规模：%s 客户联系程度：%s 客户邮箱：%s 客户电话号码数量：%d ",
                        p1->cli.clicount,p1->cli.cliname,p1->cli.cliarea,p1->cli.cliaddress,
                        p1->cli.clilegalman,p1->cli.cliscale,p1->cli.cliconlevel,p1->cli.climailbox,
                        p1->cli.clitelcount);
                for(j=0;j<p1->cli.clitelcount;j++)
                {
                    fprintf(fp,"客户电话号码%d：%s ",j+1,p1->cli.clitel[j]);
                }
                fprintf(fp,"\n");
                p1=p1->pnext1;
            }
            fclose(fp);//释放对该文件的占用，避免数据丢失
            printf("客户数据备份成功！\n");
            system("pause");
            break;
        }
        else if(i[0]=='2')
        {
            //打开文件
            FILE *fp= fopen("C:\\cliaison.data","w");
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }
            if(p2==NULL)
            {
                printf("您没有客户联络员数据可备份！\n");
                system("pause");
                break;
            }

            while(p2!=NULL)
            {
                fprintf(fp,"联络员编号：%d 联络员姓名：%s 联络员性别：%s 联络员生日：%s 联络员邮箱：%s 联络员电话号码数量：%d ",
                        p2->cli.clcount,p2->cli.clname,p2->cli.clsex,p2->cli.clbirthday,p2->cli.clmailbox,p2->cli.cltelcount);
                for(j=0;j<p2->cli.cltelcount;j++)
                {
                    fprintf(fp,"联络员电话号码%d：%s ",j+1,p2->cli.cltel[j]);
                }
                fprintf(fp,"\n");
                p2=p2->pnext2;
            }
            fclose(fp);
            printf("客户联络员数据备份成功！\n");
            system("pause");
            break;
        }
        else if(i[0]=='3')
        {
            //打开文件
            FILE *fp= fopen("C:\\salesman.data","w");
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }
            if(p3==NULL)
            {
                printf("您没有业务员数据可备份！\n");
                system("pause");
                break;
            }
            while(p3!=NULL)
            {
                fprintf(fp,"业务员编号：%d 业务员姓名：%s 业务员性别：%s 业务员生日：%s 业务员邮箱：%s 业务员电话号码数量：%d ",
                        p3->sal.scount,p3->sal.sname,p3->sal.ssex,p3->sal.sbirthday,p3->sal.smailbocx,p3->sal.stelcount
                        );
                for(j=0;j<p3->sal.stelcount;j++)
                {
                    fprintf(fp,"业务员电话号码%d：%s ",j+1,p3->sal.stel[j]);
                }
                fprintf(fp,"\n");
                p3=p3->pnext3;
            }
            fclose(fp);
            printf("业务员数据备份成功！\n");
            system("pause");
            break;
        }

        else if(i[0]=='0')
        {
            break;
        }
        else
        {
            printf("您的输入有误，请重新输入：\n");
        }
    }
}

void recoverydata(struct Node1* p1,struct Node2* p2,struct Node3* p3)//数据恢复
{

    char i[3];
    int j;
    printf("1.恢复客户数据 2.恢复客户联络员数据 3.恢复业务员数据  0.退出数据恢复功能\n请选择要执行的操作：");
    while(1)
    {

         while(1)
        {
            scanf("%2s",i);
            i[2]='\0';
            if(strlen(i)>1)
            {
                printf("您的输入有误，请重新输入：\n");
                while((getchar())!='\n');
            }
            else
            {
                break;
            }
        }
        if(i[0]=='1')
        {
            //打开文件
            FILE *fp= fopen("C:\\customer.data","r");//只读，不能进行修改
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }
            //feof(fp) 只有在尝试从文件中读取数据，并且读取操作到达文件末尾时，才会返回非零值（通常是 true）。
            //所以循环不退出是因为feof（）这个函数只有读到文件末尾才会返回true，而我是用feof（）判断的，然后再读，
            //在循环中读到最后之后还要判断一次feof（）但是循环中已经读不了数据了，此时feof（）返回false，然后就会造成无限循环
            while(!feof(fp))
            {

                struct Node1 *np1=(struct Node1*)malloc(sizeof(struct Node1));
                if(fscanf(fp,"客户编号：%d 客户姓名：%s 客户所在区域：%s 客户所在地址：%s 客户法人：%s 客户规模：%s 客户联系程度：%s 客户邮箱：%s 客户电话号码数量：%d ",
                        &np1->cli.clicount,np1->cli.cliname,np1->cli.cliarea,np1->cli.cliaddress,
                        np1->cli.clilegalman,np1->cli.cliscale,np1->cli.cliconlevel,np1->cli.climailbox,
                        &np1->cli.clitelcount)==EOF)
                        {
                            free(np1);
                            break;
                        }
                for(j=1;j<(np1->cli.clitelcount+1);j++)
                {
                    fscanf(fp,"客户电话号码%d：%s ",&j,np1->cli.clitel[j-1]);
                }
                np1->pnext1=NULL;
                if(p1==NULL)
                {
                    p1=np1;
                }
                else
                {
                    while(p1->pnext1!=NULL)
                    {
                        p1=p1->pnext1;
                    }
                    p1->pnext1=np1;
                }
            }
            fclose(fp);
            printf("客户数据恢复成功！\n");
            system("pause");
            break;
         }
        else if(i[0]=='2')
        {
            //打开文件
            FILE *fp= fopen("C:\\cliaison.data","r");
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }

            while(!feof(fp))
            {
                struct Node2 *np2=(struct Node2*)malloc(sizeof(struct Node2));
                if(fscanf(fp,"联络员编号：%d 联络员姓名：%s 联络员性别：%s 联络员生日：%s 联络员邮箱：%s 联络员电话号码数量：%d ",
                   &np2->cli.clcount, np2->cli.clname, np2->cli.clsex, np2->cli.clbirthday, np2->cli.clmailbox, &np2->cli.cltelcount)==EOF)
                   {
                       free(np2);
                       break;
                   }
                for(j=1;j<(np2->cli.cltelcount+1);j++)
                {
                    fscanf(fp,"联络员电话号码%d：%s ",&j,np2->cli.cltel[j-1]);
                }
                np2->pnext2=NULL;
                if(p2==NULL)
                {
                    p2=np2;
                }
                else
                {
                    while(p2->pnext2!=NULL)
                    {
                        p2=p2->pnext2;
                    }
                    p2->pnext2=np2;
                }
            }
            fclose(fp);
            printf("客户联络员数据恢复成功！\n");
            system("pause");
            break;

        }
        else if(i[0]=='3')
        {
            //打开文件
            FILE *fp= fopen("C:\\salesman.data","r");
            if(fp==NULL)
            {
                printf("打开文件失败!\n");
                perror("错误原因：");//显示错误原因
                system("pause");
                break;
            }
            while(!feof(fp))
            {
                struct Node3 *np3=(struct Node3*)malloc(sizeof(struct Node3));
                 if(fscanf(fp,"业务员编号：%d 业务员姓名：%s 业务员性别：%s 业务员生日：%s 业务员邮箱：%s 业务员电话号码数量：%d ",
                        &np3->sal.scount,np3->sal.sname,np3->sal.ssex,np3->sal.sbirthday,np3->sal.smailbocx,&np3->sal.stelcount
                        )==EOF)
                {
                    free(np3);
                    break;
                }
                for(j=1;j<(np3->sal.stelcount+1);j++)
                {
                    fscanf(fp,"业务员电话号码%d：%s ",&j,np3->sal.stel[j-1]);
                }

                np3->pnext3=NULL;
                if(p3==NULL)
                {
                    p3=np3;
                }
                else
                {
                    while(p3->pnext3!=NULL)
                    {
                        p3=p3->pnext3;
                    }
                    p3->pnext3=np3;
                }
            }
            fclose(fp);
            printf("业务员数据恢复成功！\n");
            system("pause");
            break;
        }


        else if(i[0]=='0')
        {
            break;
        }
        else
        {
            printf("您的输入有误，请重新输入：\n");
        }
    }
}



void simplequery(struct Node1* head1)//简单查询
{
    char ncliname[12];
    int i;
    printf("请输入要查找的客户姓名：\n");
    while(1)
    {
        scanf("%12s",ncliname);

        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node1*p=head1;
    while(p!=NULL)
    {
        if(strcmp (p->cli.cliname,ncliname)==0)
        {
            break;
        }
        p=p->pnext1;

    }
    if(p!=NULL)
    {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
               p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
    }
    else
    {
        printf("未查询到该顾客信息！\n");
    }
    system("pause");
    system("cls");
}
void combinedquery(struct Node1* head1)//组合查询
{
    char ncliname[12];//客户姓名
    char ncliarea[10];//客户所在区域
    char ncliaddress[30];//客户所在地址
    int i;
    printf("请输入要查找的客户姓名：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入要查找的客户所在区域：\n");
    while(1)
    {
        scanf("%10s",ncliarea);
        if(strlen(ncliname)>8)
        {
            printf("您输入的客户所在区域过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    printf("请输入要查找的客户所在地址：\n");
    while(1)
    {
        scanf("%30s",ncliaddress);
        if(strlen(ncliaddress)>28)
        {
            printf("您输入的客户所在地址过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node1*p=head1;
    while(p!=NULL)
    {
        if(strcmp (p->cli.cliname,ncliname)==0&&strcmp(p->cli.cliarea,ncliarea)==0&&strcmp (p->cli.cliaddress,ncliaddress)==0)
        {
            break;
        }
        p=p->pnext1;

    }
    if(p!=NULL)
    {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
               p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");

    }
    else
    {
        printf("未查询到该顾客信息！\n");
    }
    system("pause");
    system("cls");
}

void fuzzyquery(struct Node1* head1)//模糊查询
{
    char ncliname[12];
    int i;
    printf("请输入要查找的客户姓名的关键字：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名关键字过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node1*p=head1;
    if(p==NULL)
    {
        printf("未查询到该顾客信息！\n");
    }
     while(p!=NULL)
    {
        if(strstr (p->cli.cliname,ncliname)!=NULL)//用于在一个字符串中查找另一个字符首次出现，找到了返回在其首次出现位置的指针，没有返回NULL
        {
            printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
                   ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                   p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
            for(i=0;i<p->cli.clitelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
            }
            printf("\n");

        }
        p=p->pnext1;
    }
    system("pause");
    system("cls");
}

void slightsort(struct Node1* head1)//单一排序
{

    if (head1 == NULL)
    {
        printf("输入链表为空！\n");
        return;
    }
    struct Node1*p=head1;
    struct Node1*t=NULL;//避免野指针
    struct Node1*cur=p->pnext1;
    struct Node1*prev=head1;
    struct Node1*end=NULL;//避免野指针
    int i;
    int swap=0;
    while(p!=NULL)
    {
        if(strcmp(p->cli.cliscale,"大")==0)
        {
            p->cli.cliordernumber=3;
        }
        else if(strcmp(p->cli.cliscale,"中")==0)
        {
            p->cli.cliordernumber=2;
        }
        else
        {
            p->cli.cliordernumber=1;
        }
        p=p->pnext1;
    }
    //排序
    p=head1;
    while(cur!=end)
    {
        swap=0;
        while(cur->pnext1!=end)
        {
            if(cur->cli.cliordernumber<cur->pnext1->cli.cliordernumber)
            {
                t=cur->pnext1->pnext1;
                prev->pnext1=cur->pnext1;
                cur->pnext1->pnext1=cur;
                cur->pnext1=t;
                prev=prev->pnext1;
                swap=1;
            }
            else
            {
                prev=cur;
                cur=cur->pnext1;

            }
        }
        if(swap==0)
        {
            break;
        }
        end=cur;
        prev=p;
        cur=p->pnext1;
    }
    p=head1->pnext1;
    while(p!=NULL)
    {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;

    }
    system("pause");
    system("cls");
}
void combinsort(struct Node1* head1)//组合排序
{
    if (head1 == NULL)
    {
        printf("输入链表为空!\n");
        return;
    }
    struct Node1*p=head1;
    struct Node1*t=NULL;//避免野指针
    struct Node1*cur=p->pnext1;
    struct Node1*prev=head1;//避免野指针
    struct Node1*end=NULL;//避免野指针
    int i;
    int swap=0;
    while(p!=NULL)
    {
        if(strcmp(p->cli.cliscale,"大")==0&&strcmp(p->cli.cliconlevel,"高")==0)
        {
            p->cli.cliordernumber=9;
        }
        else if(strcmp(p->cli.cliscale,"大")==0&&strcmp(p->cli.cliconlevel,"中")==0)
        {
            p->cli.cliordernumber=8;
        }
        else if(strcmp(p->cli.cliscale,"大")==0&&strcmp(p->cli.cliconlevel,"低")==0)
        {
            p->cli.cliordernumber=7;
        }
        else if(strcmp(p->cli.cliscale,"中")==0&&strcmp(p->cli.cliconlevel,"高")==0)
        {
            p->cli.cliordernumber=6;
        }
        else if(strcmp(p->cli.cliscale,"中")==0&&strcmp(p->cli.cliconlevel,"中")==0)
        {
            p->cli.cliordernumber=5;
        }
        else if(strcmp(p->cli.cliscale,"中")==0&&strcmp(p->cli.cliconlevel,"低")==0)
        {
            p->cli.cliordernumber=4;
        }
        else if(strcmp(p->cli.cliscale,"小")==0&&strcmp(p->cli.cliconlevel,"高")==0)
        {
            p->cli.cliordernumber=3;
        }
        else if(strcmp(p->cli.cliscale,"小")==0&&strcmp(p->cli.cliconlevel,"中")==0)
        {
            p->cli.cliordernumber=2;
        }
        else
        {
            p->cli.cliordernumber=1;
        }
        p=p->pnext1;
    }
    //排序
    p=head1;
    while(cur!=end)
    {
        swap=0;
        while(cur->pnext1!=end)
        {
            if(cur->cli.cliordernumber<cur->pnext1->cli.cliordernumber)
            {
                t=cur->pnext1->pnext1;
                prev->pnext1=cur->pnext1;
                cur->pnext1->pnext1=cur;
                cur->pnext1=t;
                prev=prev->pnext1;
                swap=1;
            }
            else
            {
                prev=cur;
                cur=cur->pnext1;

            }
        }
        if(swap==0)
        {
            break;
        }
        end=cur;
        prev=p;
        cur=p->pnext1;
    }
    p=head1->pnext1;
    while(p!=NULL)
    {
        printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
               ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
        for(i=0;i<p->cli.clitelcount;i++)
        {
            printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
        }
        printf("\n");
        p=p->pnext1;
    }
    system("pause");
    system("cls");

}

void singlestatistic(struct Node1* head1)//单一统计
{
     struct Node1*p=head1;
     char narea[10];
     int count=0;
     int i;
     printf("请输入要统计的区域:\n");
     while(1)
    {
        scanf("%10s",narea);
        if(strlen(narea)>8)
        {
            printf("您输入的客户所在区域过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
     while(p!=NULL)
     {

         if(strcmp(p->cli.cliarea,narea)==0)
         {
             count+=1;
             printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
                    ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                    p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
             for(i=0;i<p->cli.clitelcount;i++)
             {
                 printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
             }
             printf("\n");

         }
         p=p->pnext1;
     }
     printf("%s区域的客户人数为:%d\n",narea,count);
     system("pause");
     system("cls");
}

void multistatistic(struct Node1* head1)//多属性统计
{
    struct Node1*p=head1;
    int count=0;
    int i;
    char nscale[3];
    char nlevel[3];
    printf("请输入客户规模（大，中，小）：");
    while(1)
    {
        scanf("%3s",nscale);
        if(strcmp(nscale,"大")==0||strcmp(nscale,"中")==0||strcmp(nscale,"小")==0)
        {
            break;
        }
        else if(strlen(nscale)>1)
        {
            printf("您输入的客户规模过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请按规定重新输入：\n");
        }
    }
    printf("请输入客户联系程度（高，中，低）：");
    while(1)
    {
        scanf("%3s", nlevel);
        if(strcmp( nlevel,"高")==0||strcmp( nlevel,"中")==0||strcmp( nlevel,"低")==0)
        {
            break;
        }
        else if(strlen( nlevel)>1)
        {
            printf("您输入的客户联系程度过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
             printf("您的输入有误，请按规定重新输入：\n");
        }
    }
    while(p!=NULL)
    {
        if(strcmp(p->cli.cliscale,nscale)==0&&strcmp(p->cli.cliconlevel,nlevel)==0)
        {
            count+=1;
            printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
                    ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                    p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
            for(i=0;i<p->cli.clitelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
            }
            printf("\n");

        }
        p=p->pnext1;
    }
     printf("客户规模为%s和客户联系程度为%s的人数为:%d\n",nscale,nlevel,count);
     system("pause");
     system("cls");
}

void defaultstatistic(struct Node1* head1)//预设条件统计高规模客户数
{
    struct Node1*p=head1;
    int count=0;
    int i;
    while(p!=NULL)
    {
        if(strcmp(p->cli.cliscale,"大")==0)
        {
            count+=1;
            printf("客户编号：%d 客户姓名:%s 客户所在区域:%s 客户所在地址:%s 客户法人:%s 客户规模:%s 客户联系程度:%s 客户邮箱:%s 客户电话号码数量:%d "
                    ,p->cli.clicount,p->cli.cliname,p->cli.cliarea,p->cli.cliaddress,
                    p->cli.clilegalman,p->cli.cliscale,p->cli.cliconlevel,p->cli.climailbox,p->cli.clitelcount);
            for(i=0;i<p->cli.clitelcount;i++)
            {
                printf("电话号码%d：%s ",i+1,p->cli.clitel[i]);
            }
            printf("\n");

        }
        p=p->pnext1;
    }
    printf("高规模的客户人数为%d\n",count);
    system("pause");
    system("cls");
}

void conditionquery(struct Node1* head1)//条件统计查找客户的联络员数量
{
    char ncliname[12];
    int i,j,count;
    printf("请输入您要查找某一客户的联络员数量的客户姓名：\n");
    while(1)
    {
        scanf("%12s",ncliname);
        if(strlen(ncliname)>10)
        {
            printf("您输入的客户姓名过长，请重新输入：\n");
            while((getchar())!='\n');
        }
        else
        {
            break;
        }
    }
    struct Node1*p1=head1;
    while(p1!=NULL)
    {
        if(strcmp (p1->cli.cliname,ncliname)==0)
        {
            break;
        }
        p1=p1->pnext1;

    }
    if(p1==NULL)
    {
        printf("无此客户信息！\n");
        system("pause");
        system("cls");
    }
    else
    {
        for(i=0;p1->headcliaison[i]!=NULL;i++)
        {
            count+=1;
            printf(" 客户联络员编号：%d 客户联络员姓名：%s 客户联络员性别：%s 客户联络员生日：%s 客户联络员邮箱：%s 客户联络员电话号码数量",
                   p1->headcliaison[i]->cli.clcount,p1->headcliaison[i]->cli.clname,p1->headcliaison[i]->cli.clsex,p1->headcliaison[i]->cli.clbirthday
                   ,p1->headcliaison[i]->cli.clmailbox,p1->headcliaison[i]->cli.cltelcount);
            for(j=0;j<p1->headcliaison[i]->cli.cltelcount;j++)
            {
                printf("电话号码数%d：%s",j+1,p1->headcliaison[i]->cli.cltel[j]);
            }
            printf("\n");
        }
        printf("该客户的联络员数量为%d\n",count);
        system("pause");
        system("cls");
    }

}





//王兴家的函数定义

int verify(char *kk)//验证
{
	char sss[20];
	scanf("%s", sss);
	if (strcmp(sss, kk) == 0)
		return 1;
	else
		return 0;
}

void Set_Salesman_passsword(char *password)//设置
{
	char new_password[20];
	char confirm_password[20];

	printf("请输入新的销售人员密码：\n");
	scanf("%s", new_password);

	printf("请再次输入新的销售人员密码以确认：\n");
	scanf("%s", confirm_password);

	if (strcmp(new_password, confirm_password) == 0)
	{
		strcpy(password, new_password);
		printf("销售人员密码设置成功！\n");
	}
	else
	{
		printf("两次输入的密码不匹配，请重新设置销售人员密码！\n");
	}
}

//清空输入缓冲区
void clearInputBuffer() {
	while (getchar() != '\n')
		;
}
//安全读取字符串
void safeReadString(char *str, int size) {
	int success = 0;
	while (!success) {
		if (scanf("%19s", str) == 1) {  // 假设字符串大小为20
			success = 1;
		} else {
			printf("输入错误，请重新输入：");
			clearInputBuffer();
		}
	}
	clearInputBuffer();  // 清除字符串后的换行符
}
//安全读取整数
int safeReadInt() {
	int success = 0;
	char input[20];
	while (!success) {
		if (scanf("%19s", input) == 1) {  // 假设数字字符串大小为20
			int valid = 1;
			for (int i = 0; i < strlen(input); i++) {
				if (!isdigit(input[i])) {
					valid = 0;
					break;
				}
			}
			if (valid) {
				success = 1;
				return atoi(input);
			} else {
				printf("输入错误，请重新输入：");
				clearInputBuffer();
			}
		} else {
			printf("输入错误，请重新输入：");
			clearInputBuffer();
		}
	}
}
//添加新记录
void addNewRecord(struct comcontent **head)
{
	struct comcontent *newRecord = (struct comcontent *)malloc(sizeof(struct comcontent));
	if (newRecord == NULL)
	{
		printf("内存分配失败！\n");
		return;
	}
	printf("输入客户公司名称：");
	safeReadString(newRecord->ccompny, 20);
	printf("输入客户联络员名称：");
	safeReadString(newRecord->cclname, 20);
	printf("输入通信发生的年份：");
	newRecord->year = safeReadInt();
	printf("输入通信发生的月份：");
	newRecord->month = safeReadInt();
	printf("输入通信发生的日期：");
	newRecord->day = safeReadInt();
	printf("输入通信发生的小时：");
	newRecord->hour = safeReadInt();
	printf("输入通信持续时间（分钟）：");
	newRecord->duration = safeReadInt();
	printf("输入通信内容：");
	safeReadString(newRecord->contnt, 100);
	printf("输入通信类型：");
	safeReadString(newRecord->comtype, 20);
	printf("输入通信次数：");
	newRecord->comcount = safeReadInt();

	// 写入文件
	FILE *file = fopen("records.txt", "a");
	if (file == NULL)
	{
		printf("无法打开文件！\n");
		free(newRecord);
		return;
	}
	fprintf(file, "客户公司名称: %s\n", newRecord->ccompny);
	fprintf(file, "客户联络员名称: %s\n", newRecord->cclname);
	fprintf(file, "通信发生的时间: %d-%02d-%02d %02d:00\n", newRecord->year, newRecord->month, newRecord->day, newRecord->hour);
	fprintf(file, "通信持续时间（分钟）: %d\n", newRecord->duration);
	fprintf(file, "通信内容: %s\n", newRecord->contnt);
	fprintf(file, "通信类型: %s\n", newRecord->comtype);
	fprintf(file, "通信次数: %d\n", newRecord->comcount);
	fprintf(file, "\n"); // 分隔每条记录
	fclose(file);
	// 将记录添加到链表头部
	newRecord->next = *head;
	*head = newRecord;
	printf("记录添加成功\n");
	system("pause");
	system("cls");
}
//修改记录
void modifyRecord(struct comcontent **head)
{
	char targetCompany[20];

	printf("输入要修改通信记录的客户公司名称：");
	safeReadString(targetCompany, 20);

	struct comcontent *current = *head;
	int found = 0;
	while (current != NULL) {
		if (strcmp(current->ccompny, targetCompany) == 0) {
			// 找到匹配的记录
			found = 1;
			printf("找到匹配的通信记录！\n");

			// 在这里编写修改信息的代码，例如：
			printf("请输入新的通信内容：");
			safeReadString(current->contnt, 100);
			printf("通信内容已修改！\n");
		}
		current = current->next;
	}

	if (!found) {
		// 若未找到匹配的记录
		printf("未找到匹配的通信记录。\n");
	}
	system("pause");
    system("cls");
}
//打印记录
void printAllRecords(struct comcontent **head) {
	if (*head == NULL) {
		printf("没有任何通信记录。\n");
	}
	struct comcontent *current = *head;
	printf("所有通信记录：\n");
	printf("------------------------------------------------------------------------\n");
	printf("| %-20s | %-20s | %4s | %2s | %2s | %2s | %3s | %-20s | %-20s | %6s |\n", "客户公司名称", "客户联络员名称", "年份", "月份", "日期", "小时", "时长", "通信内容", "通信类型", "通信次数");
	printf("------------------------------------------------------------------------\n");
	while (current != NULL) {
		if(current->ccompny == NULL || current->cclname == NULL || current->contnt == NULL || current->comtype == NULL) {
			printf("错误：通信记录中存在空指针。\n");
			break; // 直接终止函数
		}
		printf("| %-20s | %-20s | %4d | %2d | %2d | %2d | %3d | %-20s | %-20s | %6d |\n",
			current->ccompny, current->cclname, current->year, current->month, current->day,
			current->hour, current->duration, current->contnt, current->comtype,
			current->comcount);
		current = current->next;
	}
	printf("-------------------------------------------------------------------------\n");
	system("pause");
	system("cls");
}
//释放内存
void freeMemory(struct comcontent *head) {
	struct comcontent *current = head;
	while (current != NULL) {
		struct comcontent *next = current->next;
		free(current);
		current = next;
	}
}
//读文件
void addNewRecordFromFile(struct comcontent **head) {
	FILE *file = fopen("records.txt", "r");
	if (file == NULL) {
		printf("无法打开文件！\n");
		return;
	}

	while (!feof(file)) {
		struct comcontent *newRecord = (struct comcontent *)malloc(sizeof(struct comcontent));
		if (newRecord == NULL) {
			printf("内存分配失败！\n");
			fclose(file);
			return;
		}
		// 逐行读取文件中的记录
		fscanf(file, "客户公司名称: %s\n", newRecord->ccompny);
		fscanf(file, "客户联络员名称: %s\n", newRecord->cclname);
		fscanf(file, "通信发生的时间: %d-%d-%d %d:00\n", &newRecord->year, &newRecord->month, &newRecord->day, &newRecord->hour);
		fscanf(file, "通信持续时间（分钟）: %d\n", &newRecord->duration);
		// 读取通信内容，包括空格，直到遇到换行符
		fscanf(file, "通信内容: ");
		fgets(newRecord->contnt, sizeof(newRecord->contnt), file);
		strtok(newRecord->contnt, "\n"); // 去除fgets末尾的换行符
		// 读取通信类型，包括空格，直到遇到换行符
		fscanf(file, "通信类型: ");
		fgets(newRecord->comtype, sizeof(newRecord->comtype), file);
		strtok(newRecord->comtype, "\n"); // 去除fgets末尾的换行符
		fscanf(file, "通信次数: %d\n", &newRecord->comcount);
		newRecord->next = *head;
		*head = newRecord;
	}
	fclose(file);
	printf("文件录入成功\n");
	system("pause");
	system("cls");

}
//按时间排序
void sortByTime(struct comcontent **head)
{
	// 如果链表为空或只有一个节点，无需排序
	if (*head == NULL || (*head)->next == NULL) {
	}

	// 创建一个新的空链表，用于存放已排序的节点
	struct comcontent* sorted = NULL;
	struct comcontent* current = *head;

	// 遍历原链表的每个节点
	while (current != NULL) {
		// 先将当前节点从原链表中取出
		struct comcontent* next = current->next;
		current->next = NULL;

		// 将当前节点插入已排序的链表中
		if (sorted == NULL || current->year > sorted->year ||
			(current->year == sorted->year && current->month > sorted->month) ||
			(current->year == sorted->year && current->month == sorted->month && current->day > sorted->day) ||
			(current->year == sorted->year && current->month == sorted->month && current->day == sorted->day && current->hour > sorted->hour)) {
			// 如果当前节点时间比已排序节点的时间更晚，将其作为新的头部节点
			current->next = sorted;
			sorted = current;
		} else {
			// 否则，在已排序链表中找到合适的位置插入当前节点
			struct comcontent* temp = sorted;
			while (temp->next != NULL &&
				(current->year < temp->next->year ||
					(current->year == temp->next->year && current->month < temp->next->month) ||
					(current->year == temp->next->year && current->month == temp->next->month && current->day < temp->next->day) ||
					(current->year == temp->next->year && current->month == temp->next->month && current->day == temp->next->day && current->hour < temp->next->hour))) {
				temp = temp->next;
			}
			// 将当前节点插入temp节点后面
			current->next = temp->next;
			temp->next = current;
		}

		// 继续处理下一个节点
		current = next;
	}

	// 更新原链表的头指针
	*head = sorted;
	system("pause");
	system("cls");
}
//统计链表中的信息函数
void countTotalStats(struct comcontent *head) {
	int totalCommunicationCount = 0;    // 总通信次数
	int totalYearCount = 0;             // 总年份数量
	int totalMonthCount = 0;            // 总月份数量
	int totalDateCount = 0;             // 总日期数量
	int totalHourCount = 0;             // 总小时数量

	// 遍历链表，累加统计信息
	struct comcontent *current = head;
	while (current != NULL) {
		totalCommunicationCount += current->comcount;
		totalYearCount += current->year;
		totalMonthCount += current->month;
		totalDateCount += current->day;
		totalHourCount += current->hour;
		// 继续处理下一个节点
		current = current->next;
	}

	// 打印统计信息（中文）
	printf("总通信次数: %d\n", totalCommunicationCount);
	printf("总年份数量: %d\n", totalYearCount);
	printf("总月份数量: %d\n", totalMonthCount);
	printf("总日期数量: %d\n", totalDateCount);
	printf("总小时数量: %d\n", totalHourCount);
	system("pause");
	system("cls");
}




