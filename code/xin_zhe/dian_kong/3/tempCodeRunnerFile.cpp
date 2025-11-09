string str1;
    cout << "请输入一个字符串: ";
    cin >> str1;
    
    string str2;
    str2 = str1;
    
    //调用函数判断
    reverseString(str1);

    if (str1 == str2)
    {
        cout << "true" << endl;
    }
    
    else
    {
        cout << "false" << endl;
    }

    return 0;
}




