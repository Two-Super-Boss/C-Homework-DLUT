## 注意
> ver1
- 如果没有使用学校要求的Visual C++ 2010版本，建议加入下一行的预定义
- ```#define _CRT_SECURE_NO_WARNINGS```
> ver2
- 如果编译器的标准为C11及更新版本，使用gets时会报错
- 自行编译时将```gets(example)```修改为```gets_s(example,80)```（80为数组长度）
- **别忘了改回去啊**