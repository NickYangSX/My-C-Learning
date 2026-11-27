# sizeof是什么
sizeof 是C语言（及C++等）中的一个单目运算符，<br>
`用于获取某种数据类型或变量在内存中所占用的字节数。`<br>
# sizeof的格式
sizeof 数组名<br>
sizeof(数组名)<br>
sizeof 数组名[0]<br>
sizeof(数组名[0])<br>
因为sizeof不是函数所以括号不是必须的，只是为了好看，方便看<br>
如：<br>
int a[10];<br>
printf("%zu\n", sizeof(a));      // 通常是 40（10 * 4字节）<br>
printf("%zu\n", sizeof a);       // 同上，括号可省略<br>
注意：sizeof(a) 得到的是整个数组占用的字节数，不是元素个数<br>
元素个数:<br>
int a[10];<br>
size_t n = sizeof(a) / sizeof(a[0]);<br>
printf("%zu\n", n);   // 10<br>
# sizeo的用处
1.计算总内存大小<br>
printf("%zu",sizeof(arr))<br>
2.计算单个元素占多少个字节<br>
printf("%zu",sizeof arr[0]);<br>
3.计算内存里有多少个相同大小的元素<br>
printf("%zu\n",sizeof arr/sizeof arr[0]);<br>
int sz=sizeof arr/sizeof arr[0];
