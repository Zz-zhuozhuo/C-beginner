#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define MAX_STUDENTS 900  // 改为MAX_STUDENTS，避免潜在冲突


struct student
{
	int ID;   //学号
	char name[60];   //姓名
	int gs;   //高数成绩
	int dw;  //大学物理成绩
	int yy;   //英语成绩
	int hx;  //化学成绩
	int jsj;   //计算机成绩

    int sum; //总分
}stu[MAX_STUDENTS],stusort;

int M = 0;   //M为全局变量，用于存放当前学生人数
int choose_num;  //choose_num为全局变量
void welcome();//欢迎界面函数声明
void menu();//菜单界面函数声明
void input_message();   //录入函数声明
void add_message();   //添加函数声明
void del_message();   //删除函数声明
void change_message();   //修改函数声明
int find_message();   //查询函数声明
void display_message();  //显示全部函数声明
void ID_order();   //按学号排序函数声明
void score_order();  //按总成绩排序函数声明

// 辅助函数：清除输入缓冲区
void clear_input_buffer() {
    while(getchar() != '\n');
}


 
int main()   //主函数
{
    SetConsoleOutputCP(65001); //解决中文乱码

	welcome();  //调用欢迎界面
	do
	{
    menu();  //调用菜单
 	scanf("%d",&choose_num);
	if(choose_num==1) input_message();  //调用录入函数
	else if(choose_num==2) add_message();  //调用添加函数
	else if(choose_num==3) del_message();  //调用删除函数
	else if(choose_num==4)change_message();  //调用修改函数
	else if(choose_num==5)find_message();  //调用查询函数
	else if(choose_num==6) display_message();  //调用显示全部函数
	else if(choose_num==7)ID_order();  //调用按学号排序函数
	else if(choose_num==8)score_order();   //调用按总成绩排序函数
	else if(choose_num==0) break;   //输入0，退出程序
	else printf("请输入正确的数字\n");

    // 添加暂停，让用户看清结果
        printf("\n按任意键继续...\n");
        clear_input_buffer(); // 清除输入缓冲区
        getchar(); // 等待用户按键
    }
	while(1);
	printf("退出程序");
	return 0;
}
 ///////////////////////////////////欢迎界面函数/////////////////////////////////////////
 
void welcome()
{
	printf("        ********            ********\n");
	printf("    ****************    ****************\n");	
	printf(" ******************************************\n");
	printf("********************************************\n");
	printf("****      欢迎进入学生成绩管理系统      ****\n");
	printf("  ****************************************\n");
	printf("    ************************************\n");
	printf("      ********************************\n");
	printf("        ****************************\n");
	printf("          ************************\n");
	printf("            ********************\n");
	printf("              ****************\n");
	printf("                ************\n");
	printf("                  ********\n");	
	printf("                    ****\n");
}
 
///////////////////////////////////选择菜单函数////////////////////////////////////////
 
void menu()
{
	printf("******************************************\n");
	printf("1.录入\n");	
	printf("2.添加\n");
	printf("3.删除\n");
	printf("4.修改\n");
	printf("5.查询\n");
	printf("6.显示全部学生信息\n");
	printf("7.按学号排序\n");
	printf("8.按总成绩排序\n");
	printf("0.退出\n");
	printf("******************************************\n");

    printf("请输入要执行操作前的代号：");



}
 
////////////////////////////录入函数///////////////////////////////////////////////
void input_message()
{
    int i;
    printf("请问要输入几位学生的信息？");
    scanf("%d",&M);
    clear_input_buffer(); // 清除输入缓冲区
/*以下部分要求学生自己完成*/
/*要求依次输入M个学生的各项信息，信息见前面struct student结构体，要求每次输入有必要的提示*/

    for(i = 0; i < M; i++)
    {
        printf("输入顺序为ID name gs dw yy hx jsj\n");
        printf("请输入第%d个学生的信息，空格隔开：", i + 1);
        scanf("%d %s %d %d %d %d %d",
        &stu[i].ID, 
        &stu[i].name,
        &stu[i].gs,
        &stu[i].dw,
        &stu[i].yy,
        &stu[i].hx,
        &stu[i].jsj);

        stu[i].sum = stu[i].gs + stu[i].dw + stu[i].yy + stu[i].hx + stu[i].jsj;
    }
    printf("\n成功录入%d位学生信息！\n", M);
    clear_input_buffer(); // 清除输入缓冲区
}



////////////////////////////添加函数///////////////////////////////////////////////
 
void add_message() //完成添加功能，每次添加一个学生信息
{/*该函数留给学生自己完成*/

    if (M >= MAX_STUDENTS)
    {
        printf("学生人数已达到最大容量，无法添加！\n");
        return;
    }

    printf("\n--- 添加学生信息 ---\n");
    printf("输入顺序为ID name gs dw yy hx jsj\n");
    printf("请输入要添加的学生的信息，空格隔开：");
    scanf("%d %s %d %d %d %d %d",
    &stu[M].ID, 
    &stu[M].name,
    &stu[M].gs,
    &stu[M].dw,
    &stu[M].yy,
    &stu[M].hx,
    &stu[M].jsj);

    M++;
    printf("成功添加学生信息！当前共有%d位学生。\n", M);
    clear_input_buffer(); // 清除输入缓冲区
    
}



////////////////////////////删除函数///////////////////////////////////////////////
void del_message()  //每次删除一个学生信息
{	/*该函数留给学生自己完成*/

    if (M == 0)
    {
        printf("当前没有任何学生的信息!\n");
        return;
    }


    int i;
    int del_id;
    int found = 0;
    printf("请输入一个要删除学生的学号：");
    scanf("%d",&del_id );
    clear_input_buffer(); // 清除输入缓冲区

    for(i = 0; i < M; i++)
    {
        if(stu[i].ID == del_id)
        {
            found = 1;
            
            printf("找到学生：%s (学号：%d)，确认删除？(1-是/0-否): ", stu[i].name, stu[i].ID);
            int confirm;
            scanf("%d", &confirm);
            clear_input_buffer(); // 清除输入缓冲区

            if(confirm == 1)
            {
                int j;
                for(j = i; j < M - 1; j++)
                {
                    stu[j] = stu[j + 1];
                }

                M--;
                printf("成功删除学号为%d的学生信息！\n", del_id);
            }
            
            else 
            {
                printf("取消删除操作。\n");
            }
            break;
        }

    }
    if(!found)
    {
    printf("未找到学号为%d的学生！\n", del_id);
    }
}



////////////////////////////修改函数///////////////////////////////////////////////
void change_message()  //先查询学生信息，再完成修改功能，每次修改一个学生信息，
{/*该函数留给学生自己完成*/
    if (M == 0) {
        printf("当前没有任何学生的信息！\n");
        return;
    }

    int change_id;
    int i;
    int found = 0;
    printf("请输入要更改的学生的学号：");
    scanf("%d", &change_id);
    clear_input_buffer(); // 清除输入缓冲区

    for(i = 0; i < M; i++)
    {
        if(stu[i].ID == change_id)
        {
            found = 1;
            printf("\n找到学生：%s (学号：%d)\n", stu[i].name, stu[i].ID);

            printf("输入顺序为ID name gs dw yy hx jsj\n");
            printf("请更改该学生的信息，空格隔开：\n");
            
            scanf("%d %s %d %d %d %d %d",
            &stu[i].ID, 
            &stu[i].name,
            &stu[i].gs,
            &stu[i].dw,
            &stu[i].yy,
            &stu[i].hx,
            &stu[i].jsj);

            stu[i].sum = stu[i].gs + stu[i].dw + stu[i].yy + stu[i].hx + stu[i].jsj;
            printf("成功修改学生信息！\n");
            clear_input_buffer(); // 清除输入缓冲区
            
            break;
        }
    }

   
    if(!found)
    {
        printf("未找到学号为%d的学生！\n", i);
    }
}



////////////////////////////显示全部函数///////////////////////////////////////////////
void display_message()  //显示全部学生信息
{/*该函数留给学生自己完成*/

     if (M == 0) {
        printf("当前没有任何学生的信息！\n");
        return;
    }
    
    printf("\n============ 所有学生信息 ============\n");
    printf("当前共有%d名学生\n", M);
    printf("======================================\n");
    

    int i;
    for(i = 0;i < M; i++)
    {
        printf("第%d个学生的信息：\n", i + 1);
        printf("学号：%d 姓名：%s 高数：%d 大物：%d 英语：%d 化学：%d 计算机：%d\n",
        stu[i].ID,
        stu[i].name,
        stu[i].gs,
        stu[i].dw,
        stu[i].yy,
        stu[i].hx,
        stu[i].jsj);
    }

    printf("\n======================================\n");
	
}



////////////////////////////查询函数///////////////////////////////////////////////
int find_message()  /*该函数留给学生自己完成可以根据学号或者姓名查询到该学生的所有信息*/
{

    if(M == 0)
    {
        printf("当前没有任何学生的信息\n");
        return -1;
    }


	printf("通过学号查询还是通过姓名查询？");
    printf("用学号请输入0，用姓名请输入1:\n");

    int choice;
    int find_id;
    char find_name[60];
    int find_index;
    int is_find = 0;

    scanf("%d", &choice);
    clear_input_buffer(); // 清除输入缓冲区

    if(choice == 0)
    {
        printf("请输入学号：");
        scanf("%d", &find_id);

        int i;
        for(i = 0;i < M; i++)
        {
            if(stu[i].ID == find_id)
            {
                find_index = i;
                is_find = 1;
                printf("查找的学生信息：\n");
                printf("姓名：%d 学号：%s 高数：%d 大物：%d 英语：%d 化学：%d 计算机：%d",
                stu[find_index].ID,
                stu[find_index].name,
                stu[find_index].gs,
                stu[find_index].dw,
                stu[find_index].yy,
                stu[find_index].hx,
                stu[find_index].jsj);
                break;
            }

        }

        if(!is_find)
        {
            printf("未找到学号为%d的学生！\n", find_id);
            return -1;
        }
    }

    
    else if(choice == 1)
    {
        printf("请输入姓名：");
        scanf("%s", &find_name);
        clear_input_buffer(); // 清除输入缓冲区

        int i;
        for(i = 0; i < M; i++)
        {
            if(strcmp(stu[i].name, find_name) == 0)
            {
                find_index = i;
                is_find = 1;
                printf("查找的学生信息：\n");
                printf("学号：%d 姓名：%s 高数：%d 大物：%d 英语：%d 化学：%d 计算机：%d",
                stu[find_index].ID,
                stu[find_index].name,
                stu[find_index].gs,
                stu[find_index].dw,
                stu[find_index].yy,
                stu[find_index].hx,
                stu[find_index].jsj);
                break;
            }
        }
        if(!is_find)
        {
            printf("未找到姓名为%s的学生！\n", find_name);
            return -1;
        }
    }

    else
    {
        printf("无效的输入！\n");
        return -1;
    }
    return 0;

}



////////////////////////////按学号排序函数///////////////////////////////////////////////
void ID_order()
{/*该函数留给学生自己完成*/

    if (M == 0)
    {
        printf("当前没有任何学生的信息！\n");
        return;
    }

    int i;
    for(i = 0; i < M - 1; i++)
    {
        int j;
        for (j = 0; j < M - i - 1; j++)
        {
            if(stu[j].ID > stu[j + 1].ID)
            {
                stusort = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = stusort;

            }
        }
    }

    printf("按学号排序完成！\n");
    display_message(); // 显示排序后的结果
}
////////////////////////////按总分排序函数///////////////////////////////////////////////
void score_order()  //  按总分对学生成绩由高到低进行排序
{ /*该函数留给学生自己完成*/
    if (M == 0)
    {
        printf("当前没有任何学生的信息！\n");
        return;
    }

    int i;
    for(i = 0; i < M - 1; i++)
    {
        int j;
        for (j = 0; j < M - i - 1; j++)
        {
            if(stu[j].sum < stu[j + 1].sum)
            {
                stusort = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = stusort;

            }
        }
    }
    printf("按总成绩排序完成！\n");
    display_message(); // 显示排序后的结果
}
