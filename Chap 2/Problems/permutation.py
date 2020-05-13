#!/usr/bin/env python
# -*- coding: utf-8 -*-
# permutation.py
# @Date    : 05/13/2020
# @Author  : garywei944 (garywei944@gmail.com)
# @Link    : https://github.com/garywei944

for i in range(123, 330):
    s = str(i) + str(2 * i) + str(3 * i)
    if '1' in s and '2' in s and '3' in s and '4' in s and '5' in s and '6' in s and '7' in s and '8' in s and '9' in s:
        print(i, i * 2, i * 3)
