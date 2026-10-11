#1 const加int前面，用于把变量“固定”，变成一个常量。const对应的值一旦被初始化，就无法再修改
int const amount=100,这个100就可以被amount替代
int change=100-price变成int change=amount-price
amount可改成变量。但是去除const
int amount=100
printf("请输入数字:");
scanf(%d,&amount)这里输入的数字会替代上面的100，上面的初始值仅仅是初始化的工具，不会影响后面输入的值
如果俩变量没有初始化，输入的文本不符合要求（比如数字你输入文字），程序会继续运行的是结果会很奇怪。
