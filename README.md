# aris_iac

算法竞赛入门经典（第2版）啃书做的例题和习题。

## [UVa Online Judge Status](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=15)
* [UVa Problems](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=1)

## [Windows CMD Script to access problems](https://github.com/garywei944/eva_bin/blob/master/dos/uva.bat)
_**Usage:** uva &lt;problem number&gt;_
```bat
@echo off
set /a n=%1
set /a t=%n%/100

start https://onlinejudge.org/external/%t%/%n%.pdf
```

## 常见错误
1. 输出单词拼写错误
2. 输出数字对齐
3. 输入数据行末尾空格
