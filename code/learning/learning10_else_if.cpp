#include <iostream>
#include <windows.h>
using namespace std;

int main()
{

    SetConsoleOutputCP(65001); //解决中文乱码
    
    int love;
    int weather;
    cout <<"你喜欢我吗？(1代表喜欢，0代表不喜欢)"<< endl;
    cin >> love;

    if (love)
    {
 
        cout <<"很高兴，你喜欢我！我也喜欢你啊！"<< endl;
        cout <<"今天天气怎么样？(1代表晴天，0代表雨天)"<< endl;
        cin >> weather;

        if (weather)
        {
            cout <<"太好了，我们一起去看电影吧！"<< endl;
        }
        else
        {
            cout <<"没关系，我们就在家里看电影吧！"<< endl;
        }
    }
    else
    {
        cout <<"不好意思，我不喜欢你！"<< endl;
        cout <<"那我们就不聊了，祝你好运！"<< endl;

    }
    return 0;
}
