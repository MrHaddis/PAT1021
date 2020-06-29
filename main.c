#include <stdio.h>

//MrHaddis
//https://github.com/MrHaddis/PAT1021

//这个题就比较简单没啥难点
int main() {
    //用来接收数字 1000位的数字 显然不能用普通的数据类型接收
    char number[1000];
    //定义一个数组，记录每个数字的个数
    //这里要对数组初始化为0，不然后面的数字++会有问题
    int size[10] = {0};
    scanf("%s", number);
    for (int i = 0; i < 1000; ++i) {
        if (number[i] != '\0') {
            //数字由0-9组成，所以数组的 0对应0的个数，以此类推
            size[number[i] - '0']++;
        } else {
            break;
        }
    }
    //从0开始循环
    for (int j = 0; j < 10; ++j) {
        //不为0的值说明给定的数字里有这数字，那么输出即可。
        if (size[j] != 0) {
            printf("%d:%d\n", j, size[j]);
        }
    }
    return 0;
}
