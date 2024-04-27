#ifndef COMMANSYSTEM_H_INCLUDED
#define COMMANSYSTEM_H_INCLUDED
#endif // COMMANSYSTEM_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>



//客户联络员
struct cliaison
{
    int  clcount;//联络员编号
    char clname[12];//客户联络员姓名
    char clsex[3];//客户联络员性别
    char clbirthday[12];//客户联络员生日
    char clmailbox[15];//客户联络员邮箱
    int  cltelcount;//电话号码数量
    char  cltel[10][13];//客户联络员电话号码(定义一个二维数组考虑到一个客户联络员的电话有多个）


};
struct cliaison saleclient[20];//定义一个结构数组用来表示客户联络员所负责的客户
//节点2
struct Node2
{
    struct cliaison cli;//联络员
    struct Node2 *pnext2;//指向下一节点的指针
};
//客户
struct client
{
    int  clicount;//客户编号
    char cliname[12];//客户姓名
    char cliarea[10];//客户所在区域
    char cliaddress[30];//客户所在地址
    char clilegalman[12];//客户法人
    char cliscale[3];//客户规模
    char cliconlevel[3];//客户联系程度
    char climailbox[15];//客户邮箱
    int clitelcount;//电话号码数量
    char clitel[10][13];//客户电话号码(定义一个二维数组考虑到一个客户的电话有多个）
    int  cliordernumber;//排序数靠他来进行单一规模排序

};
//节点1
struct Node1
{
    struct client cli;//客户
    struct Node1* pnext1;//指向下一节点的指针
    struct Node2* headcliaison[20];//联络员的头指针
    int cliaison_size;//客户联络员的数量

};



//业务员
struct salesman
{

    int  scount;//业务员编号
    char sname[12];//业务员姓名
    char ssex[3];//业务员性别
    char sbirthday[12];//业务员生日
    char smailbocx[15];//业务员邮箱
    int  stelcount;//电话号码数量
    char stel[10][13];//业务员电话号码
    struct Node1* saleclient[20];//定义一个结构数组用来表示业务员所负责的客户
    int  saleclient_size; //负责的客户数量
};
//节点3
struct Node3
{
    struct salesman sal;//业务员
    struct Node3* pnext3;//指向下一节点的指针
};
//通信内容
struct comcontent
{
    char ccompny[12];//客户公司名称
    char cclname[12];//客户联络员名称
    int year;
    int month;
    int day;
    int hour;
    int duration;//持续时间
    char contnt[100];//通信内容文字记录
	char comtype[20];//表示按什么类型排序和统计
	int  comcount;//统计数据
    struct comcontent *next;//指向下一通信内容

};
//客户分组
struct cusgroup
{
    char cusname[12];//分组名称
    int size_;//表示客户数量
    int _count;//分组编号
    struct Node1* people[50];//组内成员
};
struct Node4
{
     struct cusgroup crgroup;
     struct Node4* pnext4;//客户分组链表指向下一个节点的指针
};