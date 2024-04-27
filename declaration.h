//欢迎
void welcome();
//经理功能界面
void mfunctionalinterface();
//业务员功能界面
void sfunctionalinterface();
//经理基本信息管理界面
void mfunctionalinterface1();
//经理客户分配界面
void mfunctionalinterface2();
//经理客户分组管理界面
void mfunctionalinterface3();
//经理信息查询界面
void mfunctionalinterface4();
//经理信息排序界面
void mfunctionalinterface5();
//经理信息统计界面
void mfunctionalinterface6();
//经理通信记录分析界面
void mfunctionalinterface7();
//经理系统维护界面
void mfunctionalinterface8();


//业务员基本信息查询界面
void sfunctionalinterface1();
//业务员基本信息排序界面
void sfunctionalinterface2();
//业务员基本信息统计界面
void sfunctionalinterface3();
//业务员通信记录管理界面
void sfunctionalinterface4();
//业务员通讯记录分析界面
void sfunctionalinterface5();

//刘瑞鑫的函数声明

//创建部分
struct Node1* creat_note_customer(struct Node1* end_);//创建客户信息
struct Node2* creat_note_cliaison(struct Node2* end_);//创建客户联络员信息
struct Node3* creat_note_salesman(struct Node3* end_);//模糊查询


//查询部分


//1.客户
void search_customer(struct Node1* head);
void search_customer_num(struct Node1* head,int n);//编号查找
void search_customer_name(struct Node1* head,char* a);//名称查找
void fuzzyquery_client(struct Node1* head1);//模糊查询

//2.客户联络员
void search_cliaison(struct Node2* head);
void search_cliaison_num(struct Node2 * head,int n);//编号查找
void search_cliaison_name(struct Node2 * head,char* a);//名称查找
void fuzzyquery_cliaison(struct Node2* head1);//模糊查询

//3.业务员部分
void search_salesman(struct Node3* head);
void search_salesman_num(struct Node3 * head,int n);//编号查找
void search_salesman_name(struct Node3 * head,char* a);//名称查找
void fuzzyquery_salesman(struct Node3* head1);//模糊查询

//修改部分
void exchange_customer(struct Node1* t);//修改客户信息
void exchange_cliaison(struct Node2* t);//修改客户联络员信息
void exchange_salesman(struct Node3* t);//修改业务员信息


//删除部分
struct Node3* delete_salesman(struct Node3 *head);
struct Node2* delete_cliaison(struct Node2 *head);
struct Node1* delete_customer(struct Node1* head);


//简单展示（用作提醒简单的成员名称和编号）
void show_customer(struct Node1* head);
void show_cliasion(struct Node2* head);
void show_salesman(struct Node3* head);


//分配部分

//1.给业务员分配客户
void allocation(struct Node1* head,struct Node3* head_);//分配1
void give_salesman_customer(struct Node1* head,struct Node3* head_);//分配2

void show_salesman_clients(struct Node3* head_) ;//展示分配情况

void modify_salesman_customer(struct Node1* head, struct Node3* head_);//修改业务员所负责的客户

//2.给客户分配客户联络员
void allocation_customer_cliasion(struct Node1* head,struct Node2* head_);//分配1
void give_customer_cliaison(struct Node1* head,struct Node2* head_);//分配2

void show_clients_cliaison(struct Node1* head_);//显示给客户分配的客户联络员的部分

void modify_client_cliaison(struct Node2* head, struct Node1* head_);//修改客户的客户联络员


//分组部分
struct Node4* creat_group(struct Node4* end_,struct Node1* head_);//创建分组的链表
void show_group(struct Node4* head,struct Node1* head_);//简单展示分组信息
void search_Node4(struct Node4* head,struct Node1* head_);//查询分组的具体信息
void delete_group(struct Node4* head,struct Node1* head_);//删除分组链表的节点
void modify_group_content(struct Node4* head, struct Node1* customer_head);
void add_member_to_group(struct Node4* group, struct Node1* customer_head);
void remove_member_from_group(struct Node4* group);







//赵鸿轩的函数声明

//排序部分
void clisort(struct Node1 *head1);//对客户信息进行排序
void insertClient(struct Node1 **head, struct client newClient);// 插入客户节点
void swap(struct Node1 *a, struct Node1 *b);// 交换两个客户节点
void sortByClientCount(struct Node1 *head);// 根据客户编号进行排序
void sortByClientArea(struct Node1 *head);// 根据客户所在区域进行排序
void sortByClientScale(struct Node1 *head);// 根据客户规模进行排序
void clsort(struct Node2* head2); //对客户联络员信息排序
void salsort(struct Node3* head3);//对业务员信息排序
//统计部分
void cliareasinglestatistic(struct Node1* head);//按区域对客户进行统计
void cliscalesinglestatistic(struct Node1* head);//按规模对客户进行统计
void clilevelsinglestatistic(struct Node1* head);//按联系程度对客户进行统计
void climultistatistic(struct Node1* head1);//按规模和联系程度对客户进行统计
void cliconditionquery(struct Node1* head1);//条件统计查找客户的联络员数量
void displaygroupclientcount(struct Node4* head);//对指定分组下客户数量进行统计
void clistatistics(struct Node1 *head,struct Node4* head_cusgroup);//统计客户信息
void clstatistics(struct Node2 *head);//统计客户联络员数量
void salstatistics(struct Node3 *head);//统计业务员数量




















//计林敏的函数声明

//密码维护
void pwmaintenance(char mpw[],char spw[]);
//数据备份；
void datebackup(struct Node1* np1,struct Node2* np2,struct Node3* np3);
//数据恢复
void recoverydata(struct Node1* p1,struct Node2* p2,struct Node3* p3);

//简单查找
void simplequery(struct Node1* head1);
//组合查找
void combinedquery(struct Node1* head1);
//模糊查找
void fuzzyquery(struct Node1* head1);
//条件查找
void conditionquery(struct Node1* head1);

//单一排序
void singlesort(struct Node1* head1);
//多属性排序
void combinsort(struct Node1* head1);


//单一统计
void singlestatistic(struct Node1* head1);
//多属性统计
void multistatistic(struct Node1* head1);
//预设统计
void defaultstatistic(struct Node1* head1);//预设条件统计高规模客户数
//条件统计
void conditionquery(struct Node1* head1);//条件统计查找客户的联络员数量


//王兴家的函数声明
int verify(char *kk);//验证
void Set_Salesman_passsword(char *password);//设置
