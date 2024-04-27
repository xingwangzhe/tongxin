#include"tool.h"
#include"declaration.h"



void allocation(struct Node1* head,struct Node3* head_)//给业务员分配客户的显示部分
{
    printf("客户简要信息\n");
    show_customer(head);
    printf("业务员\n");
    show_salesman(head_);
    give_salesman_customer(head,head_);
}

void give_salesman_customer(struct Node1* head,struct Node3* head_)//分配的修改部分
{
    struct Node3* t = head_->pnext3;
    int num = 0, time = 0;
    printf("请输入业务员编号：");
    int n = 0;
    while (1)
        {
        if(scanf("%d",&n)!=1||n<0)
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
    while (t != NULL)
    {
        if (n == t->sal.scount)
        {
            do
            {
                printf("请输入所选客户的编号：");
                printf("(输入0退出)");
                scanf("%d", &num);

                if (num == 0) break; // 用户输入0时退出循环

                struct Node1* p = head->pnext1;
                while (p != NULL)
                {
                    if (p->cli.clicount == num)
                    {
                        if (time < 20)
                        { // 确保不超出数组界限
                            t->sal.saleclient[time] = p;
                            time++;
                            t->sal.saleclient_size = time;
                            break; // 找到匹配项后跳出内层循环
                        }
                        else
                        {
                            printf("销售人员的客户列表已满。\n");
                            break;
                        }
                    }
                    p = p->pnext1;
                }

            } while (num != 0);
        }

        t = t->pnext3;
    }
}

void show_salesman_clients(struct Node3* head_)//显示给业务员分配的客户的部分
{
    struct Node3* t = head_->pnext3;

    while (t != NULL) {
        printf("业务员编号: %d\n", t->sal.scount);
        for (int i = 0; i < t->sal.saleclient_size; i++)
        {
            printf("分配的客户编号,名字:");
            if (t->sal.saleclient[i] != NULL) {
                printf("%d %s", t->sal.saleclient[i]->cli.clicount,t->sal.saleclient[i]->cli.cliname);
            }
        }
        printf("\n");

        t = t->pnext3;
    }
    system("pause");
}

void modify_salesman_customer(struct Node1* head, struct Node3* head_)
{
    // 显示客户信息和业务员信息
    printf("客户简要信息\n");
    show_customer(head);
    printf("业务员\n");
    show_salesman(head_);

    // 输入业务员编号
    int salesman_num;
    printf("请输入要修改客户分配的业务员编号：");
    scanf("%d", &salesman_num);

    // 查找对应业务员节点
    struct Node3* current_salesman = head_->pnext3;
    while (current_salesman != NULL) {
        if (current_salesman->sal.scount == salesman_num) {
            // 输入要分配的客户编号
            int client_num, time = 0;
            do {
            printf("请输入要分配给该业务员的客户编号：(输入0退出)");
                scanf("%d", &client_num);
                if (client_num == 0) break; // 输入0退出循环

                // 在客户链表中查找对应客户编号的客户节点
                struct Node1* current_client = head->pnext1;
                while (current_client != NULL) {
                    if (current_client->cli.clicount == client_num) {
                        if (time < 20) {
                            // 将客户添加到业务员的客户数组中
                            current_salesman->sal.saleclient[time] = current_client;
                            time++;
                            current_salesman->sal.saleclient_size = time;
                            printf("客户编号为 %d 的客户分配给业务员编号为 %d 的业务员成功。\n", client_num, salesman_num);
                            break; // 找到匹配项后跳出内层循环
                        } else {
                            printf("业务员的客户列表已满。\n");
                            break;
                        }
                    }
                    current_client = current_client->pnext1;
                }
                if (current_client == NULL) {
                    printf("未找到编号为 %d 的客户。\n", client_num);
                }
            } while (client_num != 0);

            // 已找到对应业务员，不需要继续循环
            break;
        }
        current_salesman = current_salesman->pnext3;
    }

    // 如果未找到对应业务员，输出提示信息
    if (current_salesman == NULL) {
        printf("未找到编号为 %d 的业务员。\n", salesman_num);
    }
}






void allocation_customer_cliasion(struct Node1* head,struct Node2* head_)//给客户与联络员的链接的显示部分
{
    printf("客户简要信息\n");
    show_customer(head);
    printf("业务联络员\n");
    show_cliasion(head_);
    give_customer_cliaison(head,head_);
}

void give_customer_cliaison(struct Node1* head,struct Node2* head_)//分配的修改部分
{
    struct Node1* t = head->pnext1;
    int num = 0, time = 0;
    printf("请输入客户编号：");
    int n = 0;
    while (1)
        {
        if(scanf("%d",&n)!=1||n<0)
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
    while (t != NULL)
    {
        if (n == t->cli.clicount)
        {
            