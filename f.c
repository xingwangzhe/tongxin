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
    printf("*\t\t请选择功能列表:\t\