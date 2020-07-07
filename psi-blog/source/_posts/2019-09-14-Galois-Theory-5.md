---
title: 一般方程的伽罗瓦群
tags: Math Algebra 伽罗瓦理论
---

<!-- vim-markdown-toc GFM -->

* [一般方程](#一般方程)
* [一些习题](#一些习题)

<!-- vim-markdown-toc -->

## 一般方程

设 $F$ 是域, $x_1,\cdots,x_n$ 是独立的不定元, $p_1,\cdots ,p_n$ 是 $x_1,\cdots, x_n$ 的初等对称多项式, 下面计算域扩张 $F(x_1,\cdots ,x_n)/F(o_1,\cdots, p_n)$ 的伽罗瓦群.

令 $g(x) = (x-x_1)(x-x_2)\cdots (x-x_n) \in F(p_1,\cdots ,p_n)[x]$, 则 $F(x_1,\cdots ,x_n)$ 是 $g(x)$ 在 $F(p_1,\cdots ,p_n)$ 上的分裂域. 这说明 $F(x_1,\cdots ,x_n) /F(p_1,\cdots ,p_n)$ 是有限伽罗瓦扩张, 记其伽罗瓦群为 $G$, 可以将其看成 $S_n$ 的子群.

另一方面, $S_n$ 的任意元 $\sigma$ 都给出 $F[x_1,\cdots ,x_n]$ 的一个自同构, 即将 $x_i$ 映射为 $x_{\sigma(i)}$, $1 \le i \le n$. 从而 $\sigma$ 诱导出商域 $F(x_1,\cdots ,x_n)$ 的自同构, 且它保持 $F(p_1,\cdots ,p_n)$ 的元不动. 故 $\sigma \in G$. 这说明 $G = S_n$.

进一步, 由伽罗瓦理论基本定理, $\mathrm{Inv}(S_n) = F(p_1,\cdots ,p_n)$, 即任意对称的有理函数都可以表为初等对称多项式的有理函数.
<!--more-->
设 $F$ 是域, $t_1,\cdots ,t_n$ 是独立的不定元. 称有理函数域 $F(t_1,\cdots, t_n)$ 上的方程 $f(x) = x^n - t_1x^{n-1} + \cdots + (-1)^n t_n = 0$ 是 $F$ 上的 $n$ 次一般方程.

**定理 $\mathbf{4.2}$** 域 $F$ 上的 $n$ 次一般方程 $f(x) = x^n - t_1x^{n-1} + \cdots + (-1)^nt_n = 0$ 在 $F(t_1,\cdots ,t_n)$ 上不可约且无重根; 并且它在域 $F(t_1,\cdots ,t_n)$ 上的伽罗瓦群是对称群 $S_n$.
{:.info}

**证明** 设 $E$ 是 $f(x)$ 在 $F(t_1,\cdots ,t_n)$ 上的分裂域, 且在 $E[x]$ 中有 $f(x) = (x-y_1)\cdots (x-y_n)$. 由根与系数的关系知 $E = F(t_1,\cdots ,t_n, y_1,\cdots ,y_n) = F(y_1,\cdots ,y_n)$.

现在, 考虑新的 独立的 不定元 $x_1,\cdots ,x_n$. 令 $p_1,\cdots ,p_n$ 是 $x_1,\cdots ,x_n$ 的初等对称多项式, $g(x) = (x-x_1)\cdots (x-x_n) \in F(p_1,\cdots ,p_n)[x]$. 于是 $\mathrm{Gal}(F(x_1,\cdots ,x_n) /F(p_1,\cdots ,p_n)) = S_n$. $t_1 ,\cdots ,t_n$ 是独立的不定元, 故有环的满同态

$$
\sigma: F[t_1,\cdots ,t_n] \rightarrow F[p_1,\cdots ,p_n].
$$

其中 $\sigma\mid_F = \mathrm{Id}$ 且 $\sigma(t_i) = p_i$, $1 \le i \le n$. 断言 $\sigma$ 是环同构. 因为 $x_1,\cdots ,x_n$ 是独立的不定元, 故有环的满同态 $\tau: F[x_1,\cdots ,x_n] \rightarrow F[y_1,\cdots ,y_n]$ 使得 $\tau\mid_F$ 是恒等且 $\tau(x_i) = y_i, 1 \le i \le n$. 因为

$$\begin{aligned}
\tau\sigma(t_i) &= \tau(p_i) = \tau\left(\sum_{1 \le j_1 < j_2 < \cdots < j_i \le n} x_{j_1}x_{j_2}\cdots x_{j_i}\right) \\
&= \sum_{1 \le j_1 < \cdots < j_i \le n}{y_{j_1}\cdots y_{j_i}} = t_i.
\end{aligned}$$

故 $\tau\sigma = \mathrm{Id}$, 因此 $\sigma$ 是单同态, 从而是环同构. $\sigma$ 可延拓成商域的同构 $F(t_1,\cdots ,t_n) \rightarrow F(p_1,\cdots ,p_n)$, 仍然记为 $\sigma$. $\sigma$ 又给出环同构 $F(t_1,\cdots ,t_n)[x] \rightarrow F(p_1,\cdots ,p_n)[x]$, 仍记为 $\sigma$, 使 $\sigma(x) = x$. 于是

$$\begin{aligned}
\sigma(f(x)) &= \sigma(x^n - t_1x^{n-1} + \cdots + (-1)^nt_n) \\
&= x^n - p_1x^{n-1} + \cdots + (-1)^np_n = g(x).
\end{aligned}$$

$E$ 是 $f(x)$ 在 $F(t_1,\cdots ,t_n)$ 上的分裂域, 而 $F(x_1,\cdots ,x_n)$ 是 $g(x)$ 在 $F(p_1,\cdots ,p_n)$ 上的分裂域, 由同构延拓定理知 $\sigma$ 可以延拓成 $\pi: E \cong F(x_1,\cdots ,x_n)$. $\pi(F(t_1,\cdots, t_n)) = F(p_1,\cdots ,p_n)$, 故 $\pi$ 诱导出同构

$$
\mathrm{Gal}(E /F(t_1,\cdots ,t_n)) \cong \mathrm{Gal}(F(x_1, \cdots,x_n) /F(p_1,\cdots ,p_n)) =S_n.
$$

再证 $f(x)$ 无重根且不可约. $\pi$ 可以诱导出环同构 $E[x] \rightarrow F(x_1,\cdots ,x_n)[x]$. 在 $F(x_1,\cdots ,x_n)[x]$ 中又有

$$
(x-x_1)\cdots (x-x_n) = g(x) = \sigma(f(x)) = (x-\pi(y_1))\cdots (x-\pi(y_n)).
$$

$x_1,\cdots ,x_n$ 两两不同, 故 $\pi(y_1),\cdots ,\pi(y_n)$ 两两不同, 从而 $y_1,\cdots ,y_n$ 两两不同. 这说明 $f(x)$ 无重根. 再由 $S_n$ 可迁知 $f(x)$ 在 $F(t_1,\cdots ,t_n)$ 上不可约. 这就完成证明.
<p align="right">$\blacksquare$</p>

## 一些习题

**习题** $\mathbf{1}$ 设域 $F$ 特征不为 $2$, $f(x)\in F(t_1,\cdots ,t_n)[x]$ 是 $F$ 上 $n$ 次一般方程, 其根为 $x_1,\cdots ,x_n$. 则 $\mathrm{Gal}(F(x_1,\cdots ,x_n) /K) = A_n$, 其中 $K = F(t_1,\cdots ,t_n, \sqrt{d(f)})$, $d(f)$ 是 $f(x)$ 的判别式.
{:.warning}

**证明** $f(x)$ 是 $n$ 次无重根多项式, $F(x_1,\cdots ,x_n)$ 是 $f(x)$ 在 $F(t_1,\cdots ,t_n)$ 上的分裂域. 故

$$
\mathrm{Gal}\left(F(x_1,\cdots ,x_n) /F(t_1,\cdots ,t_n)\left(\sqrt{d(f)}\right)\right) = G_f \cap A_n = S_n \cap A_n = A_n.
$$

<p align="right">$\blacksquare$</p>

**习题** $\bf{2}$ 设 $f(x) \in F(t_1,\cdots ,t_5)$ 是域 $F$ 上 $5$ 次一般方程, 其根为 $x_1,\cdots, x_5$. 令  

$$
\alpha = x_1x_2+x_2x_3+x_3x_4+x_4x_5+x_5x_1, \\
\beta = x_1x_3 + x_1x_4 + x_2x_4 + x_2x_5 + x_3x_5.
$$

则  
$\mathrm{(i)}$ $D_5 = \left\{
\begin{aligned}
&1,(12345),(13524),(14253),(15432),\\ &(12)(35),(13)(45),(14)(23),(15)(24),(25)(34)
\end{aligned}\right\} = \langle(12345),(12)(35)\rangle$ 是交错群 $A_5$ 的可解子群;  
$\mathrm{(ii)}$ $\alpha - \beta \in \mathrm{Inv}(D_5)$;  
$\mathrm{(iii)}$ 求 $A_5(\alpha-\beta)$;  
$\mathrm{(iv)}$ 设 $F$ 的特征不为 $2$. 则 $[K(\alpha-\beta:K)] = 6$, 其中 $K = F(t_1,\cdots ,t_5,\sqrt{d(f)})$, $d(f)$ 是 $f(x)$ 的判别式.
{:.warning}

> 2019-11-2 2:00. 我回来啦!

**证明** $\mathrm{(i)}$ $D_5 \triangleright \langle(12345)\rangle \triangleright {1}$, $\langle(12345)\rangle$ 和 $D_5/\langle(12345)\rangle$ 都是 $\mathrm{Abel}$ 群.  
$\mathrm{(ii)}$ 只需验证 $(12345)$ 和 $(12)(35)$ 保持 $\alpha-\beta$ 不动.  
$\mathrm{(iii)}$ 考虑 $A_5$ 的左陪集分解 $A_5 = D_5\cup (345)D_5 \cup (354)D_5 \cup (23)(45)D_5 \cup (234)D_5 \cup (243)D_5$. $\alpha - \beta \in \mathrm{Inv}(D_5)$, 故

$$\begin{aligned}
    &A_5(\alpha-\beta) = \{(1),(345),(354),(23)(45),(234),(243)\}(\alpha-\beta) \\
    &= \left\{
        \begin{aligned}
            &x_1x_2 + x_2x_3 + x_3x_4 + x_4x_5 + x_5x_1 - x_1x_3 - x_1x_4 - x_2x_4 - x_2x_5 - x_3x_5\\
            &x_1x_2 + x_2x_4 + x_4x_5 + x_5x_3 + x_3x_1 - x_1x_4 - x_1x_5 - x_2x_5 - x_2x_3 - x_4x_3\\
            &x_1x_2 + x_2x_5 + x_5x_3 + x_3x_4 + x_4x_1 - x_1x_5 - x_1x_3 - x_2x_3 - x_2x_4 - x_5x_4\\
            &x_1x_3 + x_3x_2 + x_2x_5 + x_5x_4 + x_4x_1 - x_1x_2 - x_1x_5 - x_3x_5 - x_3x_4 - x_2x_4\\
            &x_1x_3 + x_3x_4 + x_4x_2 + x_2x_5 + x_5x_1 - x_1x_4 - x_1x_2 - x_3x_2 - x_3x_5 - x_4x_5\\
            &x_1x_4 + x_4x_2 + x_2x_3 + x_3x_5 + x_5x_1 - x_1x_2 - x_1x_3 - x_4x_3 - x_4x_5 - x_2x_5\\
        \end{aligned}
    \right\}.
\end{aligned}$$

$\mathrm{(iv)}$ 记 $\overline{F}=F(x_1,x_2,x_3,x_4,x_5)$, 则 $\mathrm{Gal}( \overline{F}/K )=A_5$.$\mid A_5(\alpha-\beta)\mid=6$, 故 $[\mathrm{Gal}(\overline{F}/K):\mathrm{Gal}(\overline{F}/K(\alpha-\beta))]=6$. 即 $[K(\alpha-\beta):K]=6$.

<p align="right">$\blacksquare$</p>
