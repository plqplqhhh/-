#define _CRT_SECURE_NO_WARNINGS 1
/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
            佛祖保佑       永无BUG
*/
#include<stdio.h>
//int My_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        *str++;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    char str[] = "abcdef";
//    int len = My_strlen(str);
//    printf("%d", len);
//    return 0;
//}

//char* My_strcpy(char* str1, char* str2)
//{
//    char* tmp = str1;
//    while (*str1++ = *str2++);
//    return tmp;
//}
//int main()
//{
//    char str[20] = { 0 };
//    char str2[] = "abcdef";
//
//    printf("%s", My_strcpy(str, str2));
//}

//int My_strcmp(char* str1, char* str2)
//{
//    while (*str1 == *str2)
//    {
//        str1++;
//        str2++;
//    }
//    return *str1 - *str2;
//}
//int main()
//{
//    char str1[] = "abcdef";
//    char str2[] = "abca";
//    int ret = My_strcmp(str1, str2);
//    printf("%d", ret);
//    return 0;
//}

//char* My_strcat(char* str1, char* str2)
//{
//    char* tmp = str1;
//    while (*str1)
//    {
//        str1++;
//    }
//    while (*str1 = *str2)
//    {
//        str1++;
//        str2++;
//    }
//    return tmp;
//}
//int main()
//{
//    char str1[20] = "abcde";
//    char str2[] = "fegh";
//    printf("%s", My_strcat(str1, str2));
//    return 0;
//}

char* My_strstr(char* str1, char* str2)
{
    char* s1 = str1;
    char* s2 = str2;
    
    char* cur = str1;
    while (*cur)
    {
        s1 = cur;
        s2 = str2;
        while (*s1 && *s2 && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        cur++;
    }
}
int main()
{
    char str1[] = "abbbcdefgh";
    char str2[] = "bbcde";
    char * ret=My_strstr(str1, str2);
    if (NULL == ret)
    {
        printf("找不到字串");
    }
    else
    {
        printf("%s", ret);
    }
    return;
}