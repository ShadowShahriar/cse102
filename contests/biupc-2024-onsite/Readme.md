# BIUPC 2024 (Onsite)

> [**BUBT IT Club**][1] organized an exciting Intra University Programming Contest, and as a student of **Intake 53**, I was thrilled to participate in the **Junior** division. Luckily enough, I was selected to attend the final onsite contest!

![BIUPC 2024](poster.jpg)

**Onsite Contest:** 16 May 2024 (from **08:30 AM** to **01:30 PM**)

[📌 **Problemset (Private)**][2]

[1]: https://www.facebook.com/BITCofficial
[2]: https://codeforces.com/gym/524390

I couldn't solve all 12 problems given in the problemset. Here are the ones I did end up solving:

## Problem A: Behind The Story

```
Author: Radoan Islam Nabil (CSE BUBT, Intake-46)
```

The Computer Science and Engineering (CSE) department at BUBT regularly hosts the "BUBT Intra University Programming Contest" (BIUPC) each semester. However, due to the delay caused by the ICPC Dhaka regional event, the contest hasn't been held since February 2023. But good news! The CSE department is finally hosting BIUPC again this semester, thanks to popular demand.

The event will be organized by the dedicated faculty of BUBT, along with the enthusiastic support of the BUBT IT Club and the BUBT CP Community. The IT Club will handle everything from participant registrations to the grand prize-giving ceremony, infusing each aspect with their distinctive flair and professionalism. On the other hand, the CP Community will curate the problem set, collaborating with current seniors and alumni to ensure a challenging and engaging experience for all participants.

And your role in this event? You're the essential ingredient that completes the competition: a participant. Your task is to immerse yourself in the contest, tackle the problems with skill and determination, and contribute to the vibrant atmosphere of camaraderie and competition.

In this problem, you're asked to find the number of clubs working to make this event happen.

### Input

This problem has no input.

### Output

Output an integer that denotes the number of clubs working to make this event happen.

### My Submission

![Task A](./preview-A.png)

## Problem C: Spreading Happiness

```
Author: Saifur Rahman Dipu
Assistant Professor & Chairman (Acting), Dept. of CSE, BUBT
```

Eid is approaching and Kabir is doing calculations about how much money he is going to spend for giving eidi to his baby cousins. Kabir wants to give each of the cousins an equal amount of money as eidi or else the cousins that received less money will be upset.

Kabir currently has _N_ Tk and he has _K_ cousins. Kabir realized that the amount of money he has right now might not be distributed equally among _K_ people. Now Kabir wants to find out at least how much more money he needs so that he can give each of his cousins exactly the same amount of eidi.

### Input

The first line of input contains an integer _T_(1 ≤ _T_ ≤100) − the number of test cases.

The next T lines contain two integers _N_(1 ≤ _N_ ≤ 103) the amount of money Kabir has right now and _K_(1 ≤ _K_ ≤ 103) the number of cousins Kabir has.

### Output

For each test case print one integer, the minimum amount of money Kabir needs so that he can distribute and give each of his cousins an equal amount of eidi in a newline.

### Example

**Input**

```c
3
11 7
5 5
21 4
```

**Output**

```c
3
0
3
```

### My Submission

![Task C](./preview-C.png)

## Problem D: Heat Waves

```
Author: Md Ashraful Islam
Assistant Professor, Dept. of CSE, BUBT
```

Mr. Rafiq recently purchased an air conditioner for extremely hot weather conditions. Following its installation, he discovered himself frequently adjusting the temperature, occasionally raising it, and other times lowering it. Now, he seeks to determine the average temperature he maintained throughout the day. Your task is to write a program that takes the temperature inputs and calculates the average temperature as the output.

### Input

The first line of input contains an integer _n_(1 ≤ _n_ ≤ 100)−the number of times, Mr. Rafiq changed the temperature. The second line of input contains _n_ integers where the *i*−th integer denotes the temperature after the *i*−th time Mr. Rafiq changed it. Initially, the air conditioner was switched off. Mr. Rafiq does not change the temperature to below _1_ degrees or above _50_ degrees.

### Output

Print one real number with two points after the decimal point denoting the average temperature that Mr. Rafiaq maintained during the day.

### Examples

**Input**

```c
6
37 44 22 41 44 4
```

**Output**

```c
32.00
```

**Input**

```c
7
34 21 44 11 15 1 22
```

**Output**

```c
21.14
```

### My Submission

![Task D](./preview-D.png)

## Problem F: Palindrome Shalimdrome

```
Author: Maruf Khan
Lecturer, Dept. of CSE, BUBT
```

Ashraful sir gives a string to Mainuddin to identify whether it is a palindrome or not. However, he tells Mainuddin to delete every occurrence of some letters before checking if the string is a palindrome or not.

Here are the letters Ashraful sir told Mainuddin to remove - _a_, _e_, _i_, _o_ and _v_.

**Remarks:**

-   A palindrome is a word, phrase, number, or other sequence of characters that reads the same backward or forward. For example, "ABBA" is a palindrome, but "AABBAAAA" is not.

-   Consider the empty string as a palindrome.

-   The last letter is **v** not **u**.

### Input

The only line of input contains a string _S_(1 ≤ |_S_| ≤ 105) − the string Ashraful sir gave to Mainuddin. The string contains only lowercase Latin letters.

### Output

Print **"YES"** (without the quotes), if the string is a palindrome after removing the specified characters and **"NO"** (without the quotes) if it's not.

### Examples

**Input**

```
pknkknkp
```

**Output**

```
YES
```

**Input**

```
urcvpuuy
```

**Output**

```
NO
```

### My Submission

![Task F](./preview-F.png)
