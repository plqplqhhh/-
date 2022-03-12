#define _CRT_SECURE_NO_WARNINGS 1
//                            _ooOoo_  
//                           o8888888o  
//                           88" . "88  
//                           (| -_- |)  
//                            O\ = /O  
//                        ____/`---'\____  
//                      .   ' \\| |// `.  
//                       / \\||| : |||// \  
//                     / _||||| -:- |||||- \  
//                       | | \\\ - /// | |  
//                     | \_| ''\---/'' | |  
//                      \ .-\__ `-` ___/-. /  
//                   ___`. .' /--.--\ `. . __  
//                ."" '< `.___\_<|>_/___.' >'"".  
//               | | : `- \`.;`\ _ /`;.`/ - ` : | |  
//                 \ \ `-. \_ __\ /__ _/ .-` / /  
//         ======`-.____`-.___\_____/___.-`____.-'======  
//                            `=---='  
#include<stdio.h>
#include<string.h>
int aaaa(char* str, char* str2)
{
	char tmp[256] = { 0 };
	strcpy(tmp, str);
	strcat(tmp, str2);
	return strstr(tmp, str2) != NULL;
}

int main()
{
	char str[200] = "BCDAA";
	char str2[200] = "AABCD";
	int ret=aaaa(str, str2);
	printf("%d",ret);
	return 0;
}