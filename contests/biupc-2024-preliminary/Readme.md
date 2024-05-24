# BIUPC 2024 (Preliminary)

> [**BUBT IT Club**][1] organized an exciting Intra University Programming Contest, and as a student of **Intake 53**, I was thrilled to participate in the **Junior** division. Since it was my first time participating in a programming contest, I learned a lot about competitive programming. This definitely gave me a taste of real-world programming problems.

![BIUPC 2024](poster.jpg)

**Preliminary Contest:** 9 May 2024 (from **07:15 PM** to **10:15 PM**)

[📌 **Problemset (Private)**][2]

[1]: https://www.facebook.com/BITCofficial
[2]: https://codeforces.com/gym/523071

I couldn't solve all 10 problems given in the problemset. Here are the ones I did end up solving:

## Problem A: ICPC মানেই BUBT?

Bangladesh University of Business and Technology (BUBT) has played a leading role in promoting the ICPC in Bangladesh. BUBT has hosted the ICPC Dhaka regional contest multiple times in 2014, and 2021 due to COVID-19, the program was held in 2022 and last year BUBT hosted the ICPC-2023. BUBT teams have consistently performed well. From the preliminary part, 2461 teams around the country took part out of which 224 teams had been selected for the on-site competition held at BUBT on the 3rd and 4th of November 2023.

### Input

This problem has no input.

### Output

Print the number of ICPC Dhaka Regional contests BUBT has hosted in total.

### My Submission

![Task A](./preview-A.png)

## Problem H: Senior Junior can't stay together

After a long time, the CSE department is hosting the BUBT Intra University Programming contest (BIUPC). The contest is divided into two divisions, senior and junior. This year 48, 49, and 50 intakes are participating in the Senior divisions whereas 51, 52, and 53 intakes are participating in the junior division. Students from any other intake cannot participate in this contest.

A student came to you and told you his intake number. Now you have to determine which division the student belongs to.

### Input

First and the only line of the input contains an integer n (1 ≤ n ≤ 100).

### Output

If the student belongs to senior division print "**Probin**" without quotation.<br>
If the student belongs to junior division print "**Nobin**" without quotation.<br>
If the student cannot participate in the contest print "**Bohiragoto**" without quotation.

### Examples

**Input**

```c
48
```

**Output**

```
Probin
```

**Input**

```c
53
```

**Output**

```
Nobin
```

**Input**

```c
100
```

**Output**

```
Bohiragoto
```

### My Submission

![Task H](./preview-H.png)

## Problem I: Square Square Everywhere

You have been given _n_ integers. Your task is to count the number of integers that are **not** perfect square.

A number is a perfect square if there exists an integer _i_ such that *i*×*i* = _x_.

### Input

The first line contains an integer _T_(1 ≤ _T_ ≤ 100) denoting the number of test cases. Each of the test cases contains an integer _n_(1 ≤ _n_ ≤ 1000). The next line contains n integers separated by spaces. Each of the integers _x_ are (1 ≤ _x_ ≤ 105).

### Output

For each test case output the number of integers which are not a perfect square.

### Examples

**Input**

```c
1
10
1 2 3 4 5 6 7 8 9 10
```

**Output**

```c
7
```

**Input**

```c
3
2
9 3
5
5 3 5 1 2
3
9 6 3
```

**Output**

```c
1
4
2
```

### My Submission

![Task I](./preview-I.png)
