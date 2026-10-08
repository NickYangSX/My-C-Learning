#c语言踩坑记录
#1双引号一定在英文输入法里面设置半角。否则编程系统无法承认双引号
#2\n是换行符号。没有，则输出结果并排 such as:
printf"hello world"
printf"i'm a freash-man"
result:hello worldi'm a freash-man
#3 c语言需要分号‘；’而分号可以换行不影响输出但是绝对不能没有。否则报错到下一行有；的return行上.如果有分号但是报错，大概率是输入法有问题
