---
title: 有限伽罗瓦扩张
tags: Math Algebra 伽罗瓦理论
---

<!-- vim-markdown-toc GFM -->

* [有限伽罗瓦扩张](#有限伽罗瓦扩张)
    * [阿廷引理和戴德金无关性引理](#阿廷引理和戴德金无关性引理)
    * [正规基](#正规基)
    * [一些习题](#一些习题)

<!-- vim-markdown-toc -->

# 有限伽罗瓦扩张
**伽罗瓦扩张** 是指可分正规扩张, **有限伽罗瓦扩张** 是指有限可分正规扩张.
{:.success}

设 $E/F$ 是任意域扩张, 令

$$G = \mathrm{Gal}(E/F) = \{\sigma: E \rightarrow F 是域同构 \mid \sigma(a) = a, \forall a \in F\}.$$

则 $\mathrm{Gal}(E/F)$ 对于映射的合成作成群. 记 $\Omega = \{E/F 的中间域\}$, $\Gamma = \{G 的子群\}$. 考虑如下两个映射, 通常称之为 **伽罗瓦对应**:

$$\begin{aligned}
    \mathrm{Gal}(E/-): \Omega \rightarrow \Gamma, \mathrm{Gal}(E/-)(M) = \mathrm{Gal}(E/M), \forall M \in \Omega, \\
    \mathrm{Inv}: \Gamma \rightarrow \Omega, \mathrm{Inv}(H) = \{a \in E \mid \sigma(a) = a,\forall \sigma \in H\},\forall H \in \Gamma.
\end{aligned}$$

这里 $\mathrm{Gal}(E/M)$ 称作 $E$ 在 $M$ 上的 **伽罗瓦群**; $\mathrm{Inv}(H)$ 称为 $H$ 的不动点域.
<!--more-->

**引理** 设 $E/F$ 是域扩张, $G$,$\Omega$,$\Gamma$ 的定义同上, 则  
$(\mathrm i)$ 若 $M_1 \subseteq M_2$ 是 $E/F$ 的中间域, 则 $\mathrm{Gal}(E/M_1) \supseteq \mathrm{Gal}(E/M_2)$;  
若 $H_1\subseteq H_2$ 都是 $G$ 的子群, 则 $\mathrm{Inv}(H_1) \supseteq \mathrm{Inv}(H_2)$.  
$(\mathrm{ii})$ (作用 $2$ 次变大) 对于 $M \in \Omega$, 有 $M \subseteq \mathrm{Inv}(\mathrm{Gal}(E/M))$; 对于 $H \in \Gamma$ 有 $H \subseteq \mathrm{Gal}(E/\mathrm{Inv(H)})$.  
$(\mathrm {iii})$ (作用 $3$ 次等于作用 $1$ 次) 对于 $M \in \Omega$, $H \in \Gamma$, 有  
$\mathrm{Gal}(E/\mathrm{Inv}(\mathrm{Gal}(E/M))) = \mathrm{Gal}(E/M)$;$\mathrm{Inv}(\mathrm{Gal}(E/\mathrm{Inv}(H))) = \mathrm{Inv}(H)$.
{:.info}
## 阿廷引理和戴德金无关性引理
**引理** (**阿廷引理**) 设 $Q$ 是 $\mathrm{Aut}(K)$ 的有限子群. 则有 $[K :\mathrm{Inv}(Q)] \le \mid Q \mid$, 其中 $\mathrm{Inv}(Q) = \{a \in K \mid \sigma(a) = a, \forall \sigma \in Q\}$.
{:.info}

**证明** 记 $\mid Q \mid = n\ge 1$, 欲证 $[K: \mathrm{Inv}(Q)] \le n$, 只需证明 $K$ 上任意 $n+1$ 个元必然 $\mathrm{Inv}(Q)$-线性相关. 记 $Q = \{f_1 = \mathrm{Id}_K,f_2,\cdots ,f_n\}$, 对任意 $a_1,a_2,\cdots ,a_{n+1} \in K$, 考虑方程组

$$
\left\{
    \begin{array}{l}
        a_1x_1 + a_2x_2 + \cdots + a_{n+1}x_{n+1} = 0 \\
        f_1(a_1)x_1 + f_1(a_2)x_2 + \cdots + f_{1}(a_{n+1})x_{n+1}  = 0 \\
        \vdots \\
        f_n(a_1)x_1 + f_n(a_2)x_2 + \cdots + f_n(a_{n+1})x_{n+1} = 0
    \end{array}
\right.
$$

其必然有非零解, 取其中的一个非零解 $(u_1,u_2,\cdots ,u_{n+1})$ 使其中非零元素最少, 不妨设 $u_1,u_2,\cdots ,u_t \ne 0$, $u_{t+1},\cdots , u_{n+1} = 0$. 不妨设 $u_1 = 1$. 下面证明 $u_1,u_2,\cdots ,u_{n+1} \in \mathrm{Inv}(Q)$, 从而由第一个方程知 $a_1,a_2,\cdots ,a_{n+1}$ 是 $\mathrm{Inv}(Q)$-线性相关的.

否则, 若不然, 存在 $u_i$ 使得 $u_i \notin \mathrm{Inv}(Q)$. 不妨设 $u_2 \notin \mathrm{Inv}(Q)$, 存在 $ 2 \le t \le n$ 使 $f_t(u_2) \ne u_2$. 将上面的方程组两边用 $f_t$ 作用, 得

$$
    \sum_{i=1}^{n+1}f_tf_j(a_i)f_t(u_i) = 0, j = 1,2,\cdots ,n.
$$

由 $Q$ 是群, 知 $f_tf_1,f_tf_2,\cdots,f_tf_n$ 是 $f_1,f_2,\cdots ,f_n$ 的一个置换, 故 $(f_t(u_1),f_t(u_2),\cdots , f_t(u_{n+1}))$ 也是原方程组的一个解, 与 $(1,u_2,\cdots ,u_{n+1})$ 相减得

$$
    (0,f_t(u_2) - u_2,\cdots , f_t(u_{n+1}) - u_{n+1}).
$$

它也是原方程的一个解. 且 $f_t(u_2) - u_2 \ne 0$, 从而是它非零解. 它的非零元个数比 $t$ 小, 矛盾!
<p align="right">$\blacksquare$</p>

群 $H$ 到域 $K$ 非零元组成的乘法群 $K^*$ 的同态称为群 $H$ 的 $K$-**线性特征标**.

**引理** (**戴德金无关性引理**) 设 $\chi_1,\cdots , \chi_n$ 是群 $H$ 两两不同的 $K$-线性特征标, 则 $\chi_1,\cdots ,\chi_n$ 在 $K$ 上线性无关.
{:.info}

**证明** (反证) 若不然, 存在不全为零的元素 $c_1,c_2,\cdots ,c_n \in K$ 使得 $\sum_{1 \le i \le n}c_i\chi_i(g) = 0,\forall g \in H$. 取其中非零元个数最少的 $c_1,\cdots ,c_n$. 不妨设 $c_1,c_2, \cdots ,c_t \ne 0$ 而 $c_{t+1},\cdots ,c_n = 0$. ($t$ 必然大于 $1$). $\chi_1 \ne \chi_2$, 故存在 $h \in H$ 使 $\chi_1(h) \ne \chi_2(h)$. 将

$$
    \sum_{i=1}^{n}c_i\chi_1(h)x_i(g) = 0, \forall g \in H,
$$

与

$$
    \sum_{i=1}^{n}c_i\chi_i(hg) = \sum_{i=1}^{n}c_i\chi_i(h)\chi_i(g) = 0, \forall g \in H,
$$

相减得到 $\sum_{1\le i \le n}c_i(\chi_1(h) - \chi_i(h))\chi_i(g) = 0,\forall g \in H$. 其中 $c_2(\chi_1(h) - \chi_2(h)) \ne 0$, 而 $c_1(\chi_1(h) - \chi_1(h)) = 0$. 这与 $t$ 的最小性矛盾!
<p align="right">$\blacksquare$</p>

用戴德金无关性引理, 我们可以给出伽罗瓦群的上界.

**推论** 设 $E/F$ 是域的有限扩张, 则 $\mid \mathrm{Gal}(E/F)\mid \le [E:F]$.
{:.info }

**证明** 首先证明 $G = \mathrm{Gal}(E/F)$ 是有限群. $E/F$ 是有限扩张,从而是代数扩张. 记 $E = F(u_1,u_2,\cdots ,u_t)$, 则 $\sigma \in G$ 由 $\sigma(u_1),\cdots ,\sigma(u_t)$ 决定. 记 $u_i$ 在 $F$ 上的极小多项式为 $f_i(x)$, 则 $0 = \sigma(f_i(u_i)) = f_i(\sigma(u_i))$, 从而 $\sigma(u_i)$ 也是 $f_i(x)$ 的根, 只有有限种可能. 综上, $\mid G \mid < \infty$.

用反证法, 若结论不正确, 记 $G = \{\sigma_1,\sigma_2,\cdots ,\sigma_m\}$, $[E:F] = n < m$, 取 $E$ 的一组 $F$-基 $a_1,a_2,\cdots ,a_n$. 因 $n < m$, 所以矩阵

$$
\begin{pmatrix}
    \sigma_1(a_1) & \sigma_1(a_2) & \cdots & \sigma_2(a_n) \\
    \sigma_2(a_1) & \sigma_2(a_2) & \cdots & \sigma_2(a_n) \\
    \vdots & \vdots & \ddots & \vdots \\
    \sigma_m(a_1) & \sigma_m(a_2) & \cdots & \sigma_m(a_n)
\end{pmatrix}
$$

的行向量必然 $E$-线性相关, 即存在不全为零的元素 $c_1,c_2,\cdots,c_m \in E$ 使 $\sum_{1 \le i\le m}c_i\sigma_i(a_j) = 0,\forall 1 \le j \le n$. 任意 $x \in E$, 设 $x = k_1a_1 + \cdots + k_na_n$, $k_1,\cdots,k_n \in F$. 则

$$
    \sum_{i=1}^{m}c_i\sigma_i(x) = \sum_{i=1}^{m}\sum_{j=1}^{n}c_i\sigma_i(k_ja_j) = \sum_{j=1}^{n}k_j\sum_{i=1}^{m}c_i\sigma_i(a_j) = 0
$$

这说明 $\sigma_1,\sigma_2,\cdots ,\sigma_m$ $E$-线性相关. 但是 $\sigma_1,\cdots ,\sigma_m$ 是 $E^*$ 两两不同的 $E$-线性特征标, 这与戴德金无关性引理矛盾!
<p align="right">$\blacksquare$</p>

**定理** 设 $E/F$ 是域扩张, 则下述命题等价:  
($\rm i$) $E/F$ 是有限伽罗瓦扩张;  
($\rm ii$) $E$ 是 $F$ 上可分多项式在 $F$ 上的分裂域;  
($\rm iii$) $E/F$ 是有限扩张且 $\mid \mathrm{Gal}(E/F)\mid = [E:F]$;  
($\rm iv$) $G = \mathrm{Gal}(E/F)$ 是有限群且 $\mathrm{Inv}(\mathrm{Gal}(E/F)) = F$.
{:.info}

上述定理的四个等价条件可以认为分别是从“内部”, “外部”, “数量关系” 和 “内外部联系” 四个方面对有限伽罗瓦扩张的等价描述.

**证明** 只证 $(\rm iii) \Rightarrow (\rm iv)$, $(\rm iv) \Rightarrow (\rm i)$.

$(\rm iii) \Rightarrow (\rm iv)$: 由 $(\rm iii)$ 知 $ G =\mathrm{Gal}(E/F)$ 是有限群. 由定义有 $F \subseteq \mathrm{Inv}(\mathrm{Gal}(E/F))$. 我们有

$$
\begin{split}
    [E : \mathrm{Inv}(\mathrm{Gal}(E/F))] &\le [E : F] = |\mathrm{Gal}(E/F)| \\
    & = |\mathrm{Gal}(E/\mathrm{Inv}(\mathrm{Gal}(E/F)))| \\
    &\le [E: \mathrm{Inv}(\mathrm{Gal}(E/F))].
\end{split}    
$$

于是 $[E: \mathrm{Inv}(\mathrm{Gal}(E/F))] = [E : F]$. 因此 $F = \mathrm{Inv}(\mathrm{Gal}(E/F))$.

$(\rm iv) \Rightarrow (\rm i)$: 有

$$
    [E:F] = [E: \mathrm{Inv}(\mathrm{Gal}(E/F))] \le | \mathrm{Gal}(E/F) | < \infty,
$$

于是 $E/F$ 是有限扩张. 任意 $u \in E$, 记 $u$ 在 $F$ 上的极小多项式为 $f(x)$, 令

$$Gu = \{\sigma(u) \mid \sigma \in \mathrm{Gal}(E/F)\} = \{u_1 = u,u_2,\cdots ,u_t\}.$$

令 $g(x) = \prod_{1 \le i\le t}(x-u_i)$, 任意 $\sigma \in G$, $\sigma(g(x)) = \prod_{1 \le i \le t}(x - \sigma(u_i))$. 其中 $\sigma(u_1),\cdots ,\sigma(u_t)$ 是 $u_1,\cdots ,u_t$ 的一个置换, 故 $\sigma(g(x)) = g(x)$, $\forall \sigma \in G$. 这导致 $g(x) \in \mathrm{Inv}(\mathrm{Gal}(E/F))[x] = F[x]$. $u_1,\cdots ,u_t$ 也是 $f(x)$ 的根, 从而 $g(x) \mid f(x)$. 于是 $g(x) = f(x)$. 这说明 $u$ 在 $F$ 上的极小多项式可分且在 $E$ 上分裂, 从而 $E/F$ 是有限伽罗瓦扩张.
<p align="right">$\blacksquare$</p>

## 正规基
**引理** $E/F$ 是有限伽罗瓦扩张, $[E:F] = n$, $\mathrm{Gal}(E/F) = \{\sigma_1,\sigma_2,\cdots ,\sigma_n\}$, 则 $p_1,p_2,\cdots p_n$ 是 $E$ 的一组 $F$-基当且仅当行列式 $\det{(\sigma_j(p_i))_{1 \le j,i \le n}} \ne 0$.
{:.info}

**证明** $\Rightarrow$ 假若 $\det(\sigma_j(p_i)) = 0$, 则矩阵

$$
\begin{pmatrix}
\sigma_1(p_1) & \cdots & \sigma_1(p_n) \\
\vdots & \ddots & \vdots \\
\sigma_n(p_1) & \cdots & \sigma_n(p_n)
\end{pmatrix}
$$

的行向量 $E$-线性相关, 存在 $c_1, c_2,\cdots ,c_n \in E$ 使 $\sum_{1 \le i \le n} {c_i\sigma_i(p_j)} = 0$, $j = 1,2,\cdots, n$. 任意 $x \in E$, 记 $x = \sum_{1 \le j \le n}{k_jp_j}$, 其中 $k_1,\cdots,k_n \in F$, 则

$$
\sum_{i=1}^{n}{c_i\sigma_i(x)} = \sum_{i=1}^{n}\sum_{j=1}^{n}{c_i\sigma_i(k_jp_j)} = \sum_{j=1}^{n}k_j\sum_{i=1}^{n}c_i\sigma_i(p_j) = 0
$$

这说明 $\sigma_1,\cdots ,\sigma_n$ $E$-线性相关. 然而 $\sigma_1,\cdots ,\sigma_n$ 是 $E^*$ 的 $E$-线性特征标, 这与戴德金无关性引理矛盾.

$\Leftarrow$ 假若 $p_1,\cdots ,p_n$ 不是 $E$ 的一组 $F$-基, 则它们 $F$-线性相关. 存在 $c_1,\cdots ,c_n \in F$ 使得 $\sum_{1 \le i \le n}{c_ip_i} = 0$. 两边用 $\sigma_j$ 作用得 $\sum_{1 \le i \le n}{c_i\sigma_j(p_i)} = 0$ ($j = 1,2,\cdots, n$). 这说明矩阵 $(\sigma_j(p_i))_{j,i}$ 的列向量线性相关, 这导致其行列式为零.

**定理** (**正规基**) 若 $E/F$ 是有限伽罗瓦扩张, 则存在 $a \in E$ 使 $\{\sigma{(a)} \mid \sigma \in \mathrm{Gal}(E/F)\}$ 是 $E$ 的一组 $F$-基.
{:.info}

以下证明主要摘录自 E.Artin 的 《Galois Theory》.

**证明** 先证明 $F$ 是无限域的情况. $E/F$ 是有限伽罗瓦扩张, 从而是单扩张. 记 $E = F(u)$, $u$ 在 $F$ 上的极小多项式为 $f(x)$, 有 $f(x)$ 无重根. 记 $[E:F] = n$, $G = \mathrm{Gal}(E/F) = \{\sigma_1,\cdots ,\sigma_n\}$. 可知 $f(x)$  的根恰是 $Gu = \{\sigma(u) \mid \sigma \in G\}$, 且

$$
    f(x) = \prod_{t \in Gu}(x-t).
$$

记 $\sigma_{i_j} = \sigma_i\sigma_j$,$1 \le i,j \le n$. 并令 $u_{i_j} = \sigma_{i_j}(u)$. 则 $u_{1_j}, u_{2_j} \cdots ,u_{n_j}$ 和 $u_{i_1}, u_{i_2},\cdots ,u_{i_n}$ 均是 $Gu$ 的一个置换.

令 $g(x) = \frac{f(x)}{(x-u)f'(u)} \in E[x]$, $g_{i_j}(x) = \frac{f(x)}{(x-u_{i_j})f'(u_{i_j})} \in E[x]$. 则当 $\alpha \in F$ 时, $g_{i_j}(\alpha) = \sigma_{i_j}(g(\alpha))$. 且 $g_{i_j}(u_{i_j}) = 1$, $g_{i_j}(u_{k_t}) = 0$, $\forall u_{i_j} \ne u_{k_t}$.

考虑行列式

$$
d(x) =
\left|
\begin{matrix}
g_{1_1}(x) & g_{1_2}(x) & \cdots & g_{1_n}(x) \\
g_{2_1}(x) & g_{2_2}(x) & \cdots & g_{2_n}(x) \\
\vdots & \vdots & \ddots & \vdots \\
g_{n_1}(x) & g_{n_2}(x) & \cdots & g_{n_n}(x)
\end{matrix}
\right|
$$

有 $d(x) \in E[x]$. 且 $1 \le i,j \le n$ 时, $d(u_{i_j})$ 的每行, 每列有且仅有一个元素为 $1$, 其余元素为 $0$. 这说明 $d(u_{i_j}) = \pm 1 \ne 0$, 从而 $d(x)$ 不是零多项式. $F$ 无限, 故存在 $a \in F$ 使 $d(a) \ne 0$. 带入行列式得到

$$
d(a) =
\left|
\begin{matrix}
    \sigma_{1_1}(g(a)) & \cdots & \sigma_{1_n}(g(a)) \\
    \vdots & \ddots & \vdots \\
    \sigma_{n_1}(g(a)) & \cdots & \sigma_{n_n}(g(a))
\end{matrix}
\right|
\ne 0;
$$

由引理知 $\sigma_1(g(a)),\sigma_2(g(a)),\cdots ,\sigma_n(g(a))$ 是 $E$ 在 $F$ 上的一组基.

接下来考虑 $F$ 为有限域的情况, 首先引入一条线性代数的结论:

**引理** 设 $V$ 是域 $K$ 上的线性空间, $\mathscr{A}$ 是 $V$ 上的线性变换. 设 $\mathscr{A}$ 的最小多项式为 $d(x)$, 则存在 $\alpha \in V$ 使得 $\alpha$ 关于 $\mathscr{A}$ 的最小多项式为 $d(x)$.
{:.info}

设 $E/F$ 是有限伽罗瓦扩张, $F$ 为有限域. 则 $E$ 也为有限域. 记 $\mid F\mid = q$, $q$ 是素数的幂, $[E:F] = n$, 则 $\mid E \mid = q^n$. 由有限域的性质知 $\mathrm{Gal}(E/F)$ 是循环群, 其生成元可以取 $\sigma: a \mapsto a^q$. $E$ 可以看成是 $F$ 上的线性空间, $\sigma$ 可以看成是 $E$ 上的线性变换. 其最小多项式为 $x^n-1$. (否则, 存在不全为零的元素 $c_0,c_1,\cdots ,c_{t-1} \in F$ 使得 $\sigma^t(\alpha) + \cdots + c_1\sigma_1{(\alpha)} + c_0 = 0$, $\forall \alpha \in E$, 且 $t < n$. 但是多项式 $x^{p^t} + c_{t-1}x^{p^{t-1}} + \cdots + c_0$ 在 $E$ 上最多有 $p^t$ 个根.) 于是存在 $a \in E$ 使得 $a$ 的最小多项式为 $x^n-1$, 从而 $a, \sigma{(a)} ,\cdots ,\sigma^{n-1}{(a)}$ 是 $F$-线性无关的. 于是 $a,\sigma(a),\cdots ,\sigma^{n-1}(a)$ 就是所求正规基.
<p align="right">$\blacksquare$</p>

**引理的证明** 记 $d(x) = p_1^{k_1}(x)p_2^{k_2}(x)\cdots p_n^{k_n}(x)$, 其中 $p_1(x),p_2(x),\cdots ,p_n(x)$ 是 $K$ 上两两不同的不可约多项式, 有

$$
    V = \ker{d(\mathscr{A})} = \ker{p_1^{k_1}(\mathscr{A})} \oplus \cdots \oplus \ker{p_n^{k_n}(\mathscr{A})}.
$$

对每个 $1 \le i \le n$, 存在 $\beta_i \in \ker{p_i^{k_i}(\mathscr{A})}$ 使 $\beta_i$ 的最小多项式为 $p_i^{k_i}(x)$ (否则 ,$k_i$ 不是最小的, 从而 $d(x)$ 不是最小多项式). 于是 $\beta = \beta_1 + \beta_2 + \cdots + \beta_n$ 的最小多项式恰为 $p_1^{k_1}(x)p_2^{k_2}(x)\cdots p_n^{k_n}(x) = d(x)$. (因为 $p_1^{k_1}(x) ,p_2^{k_2}(x), \cdots, p_n^{k_n}(x)$ 两两互素)
<p align="right">$\blacksquare$</p>

 此处再摘录另一个证明, 它来自柯斯特利金的《代数学引论》.

**定义** 设 $K,L$ 是两个域. 一组单同态 $\eta_1,\eta_2,\cdots ,\eta_n : K \rightarrow L$ 叫做在 $L$ 上**代数无关**, 如果

$$f \in L[x_1,x_2,\cdots ,x_n], f(\eta_1(u),\eta_2(u),\cdots ,\eta_n(u)) = 0, \forall u \in K \Rightarrow f = 0.$$

**引理** 设 $F$ 是无限域, $E$ 是 $F$ 上有限可分扩张, $L$ 是 $E /F$ 的正规闭包. 设 $\eta_1,\eta_2,\cdots ,\eta_n$ 是 $n = [E:F]$ 个两两不同的单同态 $E \rightarrow L$ 且 $\eta_i\mid_F = \mathrm{Id}$. 则 $\eta_i$ 在 $L$ 上代数无关.
{:.info}

**证明** (反证) 否则, 假定 $f \in L[x_1,x_2,\cdots x_n]$ 使得 $f(\eta_1(u),\cdots,\eta_n(u)) = 0, \forall u \in E$. 设 $(u_i)$ 是 $E$ 的一组 $F$-基, 则任意 $a_i \in F$, 记 $u = \sum_ia_iu_i$, 有

$$
0 = f(\eta_1(u),\cdots,\eta_n(u))= f\left(\sum_{i}a_i\eta_1(u_i),\cdots,\sum_ia_i\eta_n(u_i)\right).
$$

命

$$g(x_1,x_2,\cdots ,x_n) = f\left(\sum_i\eta_1(u_i)x_i,\cdots ,\sum_{i}\eta_n(u_i)x_i\right)$$

是 $L$ 上的多项式, 则 $g(a_1,\cdots ,a_n) = 0$, $\forall a_i \in F$. 设 $(v_1,\cdots ,v_m)$ 是 $L$ 的一组 $F$-基. 则可写

$$
g(x_1,\cdots ,x_n) = \sum_{j=1}^m{g_j(x_1,\cdots ,x_n)v_j},
$$

其中 $g_j \in F[x_1,\cdots ,x_n]$. 于是 $g_j(a_1,\cdots,a_n) = 0, \forall  1 \le j \le m$. 由 $F$ 是无限域, 推出 $g_j = 0$, 于是 $g = 0$.

由 $u_1,\cdots ,u_n$ 是 $E$ 的一组基, 推出 $\det(\eta_j(u_i)) \ne 0$ (证明类似于前文引理). 因此矩阵 $(\eta_j(u_i))$ 有逆 $(v_{ij}) \in M_n(L)$. 这就是说

$$
g\left(\sum_{j,k}v_{1j}\eta_j(u_k)x_k,\cdots,\sum_{j,k}v_{nj}\eta_j(u_k)x_k\right) = f(x_1,\cdots , x_n).
$$

所以 $f = 0$. 这说明 $\eta_i$ 在 $L$ 上代数无关.
<p align="right">$\blacksquare$</p>

**正规基定理的证明** 只证 $F$ 是无限域的情况. 由引理知 $G=\mathrm{Gal}(E /F)$ 的元素是 $E$-代数无关的. 记 $G = \{\sigma_1,\cdots ,\sigma_n\}$, $n = [E:F]$. 对于 $u \in E$,

$$
(\sigma_1(u),\cdots ,\sigma_n(u)) 是基 \Leftrightarrow \det(\sigma_i\sigma_j(u)) \ne 0.
$$

记 $\sigma_{i}\sigma_j = \sigma_{i_j}$. 则 $1_i,2_i ,\cdots ,n_i$ 和 $i_1,i_2,\cdots ,i_n$ 是 $1,2,\cdots ,n$ 的一个置换. 现在考虑 $E[x_1,\cdots ,x_n]$ 上的多项式 $d(x_1,\cdots ,x_n) = \det(x_{i_j})$. 选取 $x_1 = 1,x_i = 0, i > 1$. 因为 $j \mapsto j_i$ 对不同的 $i$ 是不同的. 所以 $x_1$ 在行列式中的每一行和每一列仅出现一次. 于是 $d(1,0,0,\cdots,0) = \pm 1 \ne 0$, 从而 $d \ne 0$.

$\sigma_i$ 在 $E$ 上代数无关, 存在 $u \in E$ 使 $\det(\sigma_i\sigma_j(u)) \ne 0$. 于是 $\sigma_1(u),\cdots ,\sigma_n(u)$ 是正规基.
<p align="right">$\blacksquare$</p>

**例** 求 $\mathbb{Q}(\sqrt{2},\sqrt{3})/\mathbb{ Q }$ 的一组正规基.
{:.warning}

**解** $\mathbb{Q}(\sqrt{2},\sqrt{3})$ 是 可分多项式 $(x^2-2)(x^2-3)$ 在 $\mathbb{Q}$ 上的分裂域. 故 $\mathbb{Q}(\sqrt{2},\sqrt{3}) / \mathbb{Q}$ 是有限伽罗瓦扩张. 它的维度为 $4$. 它的一组基为 $1,\sqrt{2},\sqrt{3},\sqrt{6}$. $\mathrm{Gal}{(E/F)}$ 的四个元分别由

$$
\begin{split}
    &\sigma_1 = \mathrm{Id}; \\
    &\sigma_2: \sqrt{2} \mapsto -\sqrt{2}, \sqrt{3} \mapsto \sqrt{3}; \\
    &\sigma_3: \sqrt{2} \mapsto \sqrt{2}, \sqrt{3} \mapsto -\sqrt{3}; \\
    &\sigma_4: \sqrt{2} \mapsto -\sqrt{2}, \sqrt{3} \mapsto -\sqrt{3}.
\end{split}
$$

决定. 取 $a = 1 + \sqrt{2} + \sqrt{3} + \sqrt{6} \in \mathbb{Q}(\sqrt{2},\sqrt{3})$, 则

$$
\begin{split}
\mathrm{Gal}{(E/F)}a = &\{1 + \sqrt{2} + \sqrt{3} + \sqrt{6},1 - \sqrt{2} + \sqrt{3} - \sqrt{6}, \\
&1 + \sqrt{2} - \sqrt{3} - \sqrt{6},1 - \sqrt{2} - \sqrt{3} + \sqrt{6}\}.
\end{split}
$$

由

$$
\left|
\begin{matrix}
1 & 1 & 1 & 1 \\
1 & -1 & 1 & -1 \\
1 & 1 & -1 & -1 \\
1 & -1 & -1 & 1
\end{matrix}
\right| = 16 \ne 0,
$$

知上述四个元素是 $\mathbb{Q}$-线性无关的. 故上述四个元素就是一组正规基.

## 一些习题
**定理** (**阿廷定理**) 记 $G$ 是域 $E$ 的自同构群的有限子群, $F=\mathrm{Inv}(G)$. 则 $E/F$ 是有限伽罗瓦扩张且 $\mathrm{Gal}(E/F) = G$.
{:.info}

**证明**
有

$$\mid \mathrm{Gal}(E/F) \mid \le [E : F] = [E : \mathrm{Inv}(G)] \le \mid G \mid.$$

又 $G \subseteq \mathrm{Gal}(E/\mathrm{Inv(G)}) = \mathrm{Gal}(E/F)$, 有

$$\mid G \mid \le \mid \mathrm{Gal}(E/F) \mid.$$

故 $\mid G \mid = \mid\mathrm{Gal}(E/F)\mid = [E : F]$, 从而 $E/F$ 是有限伽罗瓦扩张, 且 $G = \mathrm{Gal}(E/F)$.
<p align="right">$\blacksquare$</p>

**推论** 设 $E/F$ 是 的有限扩张, 则 $\mid \mathrm{Gal}(E/F) \mid$ 整除 $[E:F]$.
{:.info}

**证明** 记 $F' = \mathrm{Inv}(\mathrm{Gal}(E/F))$, 则 $F$ 是 $F'$ 的子域. 由阿廷定理, 有 $[E:F'] = \mid \mathrm{Gal}(E/F')\mid = \mid \mathrm{Gal}(E/F)\mid$. 由望远镜公式,

$$
[E:F] = [E:F'][F':F] = \mid\mathrm{Gal}(E/F)\mid \cdot [F':F],
$$

这说明 $\mid \mathrm{Gal}(E/F) \mid$ 整除 $[E:F]$.
<p align="right">$\blacksquare$</p>

**例** 设 $E/F$ 为域的有限扩张, $K/F$ 为域扩张. 则 $E$ 到 $K$ 的 $F$-嵌入的个数不超过 $[E:F]$.
{:.warning}

**证明** 记 $[E:F] = n$.若结论不正确, 记 $f_1,f_2,\cdot , f_{n+1}$ 是两两不同的 $E$ 到 $K$ 的 $F$-嵌入. 则由 $f_i(F) = F$ 知 $f_i$ 不是零同态. 设 $a_1,a_2,\cdots a_n$ 是 $E$ 的一组基, 考虑矩阵

$$
\begin{pmatrix}
f_1(a_1) & f_1(a_2) & \cdots & f_{1}(a_n) \\
f_2(a_1) & f_2(a_2) & \cdots & f_2(a_n) \\
\vdots & \vdots & \ddots & \vdots \\
f_{n+1}(a_1) & f_{n+1}(a_2) & \cdot & f_{n+1}(a_n)
\end{pmatrix}
$$

它的行向量必然线性相关. 存在 $c_1,c_2,\cdots ,
 c_{n+1} \in K$ 使 $\sum_{1 \le i \le n+1}{c_if_i(a_j)} = 0, \forall 1\le j \le n$. 任意 $\alpha \in E$, 记 $\alpha = \sum_{1 \le i \le n}{k_ia_i}$, 其中 $k_i \in F$. 有

$$
    \sum_{i=1}^{n+1}c_if_i(\alpha) = \sum_{i=1}^{n+1}c_if_i\left(\sum_{j=1}^{n}k_ja_j\right) = \sum_{j=1}^{n}k_j\sum_{i=1}^{n+1}c_if_i(a_j) = 0
$$

这导致 $f_1,f_2,\cdots ,f_{n+1}$ $K$-线性相关. 然而它们是 $E^*$ 的 $K$-线性特征标, 矛盾!
<p align="right">$\blacksquare$</p>

**例** 设 $E$ 是 $F$ 的二次扩张且 $F$ 的特征不为 $2$. 则 $E/F$ 是伽罗瓦扩张, 且存在 $\alpha \in E$ 使得 $\alpha^2 \in F$, $E = F(\alpha)$. 由此说明复数域 $\mathbb{C}$ 没有 $2$ 次扩张.
{:.warning}

**证明** 取 $\alpha \in E - F$, 记 $\alpha$ 在 $F$ 上的极小多项式为 $f(x)$, 则 $\deg f(x) \le 2$ (否则 $[E:F] \ge [F(\alpha):F] > 2$). 由 $\alpha \notin F$ 知 $\deg f(x) \ne 1$, 只能是 $\deg f(x) = 2$. 设 $f(x) = x^2 + bx + c$. 若 $f(x)$ 有重根, 则 $b^2 = 4c$ ($F$ 的特征不为 $2$), 于是 $f(x) = (x+b/2)^2$ , 与 $f(x)$  不可约矛盾. 这说明 $f(x)$ 是可分多项式. 它的另一根 $\beta = -b - \alpha \in F(\alpha)$ (Vieta 定理), 说明 $F(\alpha)$ 是 $f(x)$ 在 $F$ 上的分裂域, 故 $F(\alpha)/F$ 是伽罗瓦扩张. $[F(\alpha) : F] = 2$ 且 $F(\alpha) \subseteq E$, 从而 $E = F(\alpha)$. 这说明 $E/F$ 是伽罗瓦扩张.

记 $a = b+2\alpha \in E$, 由 $2 \ne 0$ 知 $a \notin F$. 有 $a^2 = b^2 + 4b\alpha + 4\alpha^2 = b^2 + 4b\alpha -4b\alpha - 4c = b^2-4c \in F$. 且 $F(a) = F(b+2\alpha) = F(2\alpha) = F(\alpha) = E$.

复数域对平方根封闭. 若 $E/\mathbb{C}$ 是二次扩张, 存在 $a \in E$ 使得 $a^2 \in \mathbb{C}$ 且 $E = \mathbb{C}(a)$. 但是 $x^2 - a^2$ 在$\mathbb{C}$ 中有根, 矛盾.
<p align="right">$\blacksquare$</p>

**例** 设 $E /F$ 是有限伽罗瓦扩张, $G = \mathrm{Gal}(E /F)$, $\alpha \in E$, $G\alpha = \{\alpha = \alpha_1, \alpha_2,\cdots ,\alpha_r\}$. 则 $\alpha$ 在 $F$ 上的极小多项式为 $\prod_{1 \le i \le r}(x-\alpha_i)$.
{:.warning}

**证明** 记 $g(x) = \prod_{1 \le i \le r}(x -\alpha_i)$, 设 $\alpha$ 在 $F$ 上的极小多项式为 $f(x)$. 则 $f(\sigma(\alpha)) = \sigma(f(\alpha)) = 0$, $\forall \sigma \in G$. 这说明 $\alpha_1,\cdots ,\alpha_r$ 都是 $f(x)$ 的根. 从而在 $E[x]$ 上 $g(x) \mid f(x)$. 任意 $\sigma \in G$, 有 $\sigma(g(x)) = \prod_{1 \le i \le r}(x- \sigma(\alpha_i))$, 而 $\sigma(\alpha_1),\sigma(\alpha_2), \cdots ,\sigma(\alpha_r)$ 是 $\sigma_1,\cdots ,\alpha_r$ 的一个置换. 故 $\sigma(g(x)) = g(x)$, 从而 $g(x) \in \mathrm{Inv}(\mathrm{Gal}(\frac{E}{F}))[x] = F[x]$. 结合 $f(x)$ 在 $F$ 上不可约, 只能是 $f(x) = g(x)$.
<p align="right">$\blacksquare$</p>

这个例子说明对有限伽罗瓦扩张 $E /F$, 若 $f(x)$ 是在 $E$ 上有根的 $F$ 上的不可约多项式, 则 $f(x)$ 的全部根在 $E$ 中且它们是共轭的. (注: $E$ 上的两元素 $\alpha, \beta$ 共轭, 是指存在 $\sigma \in \mathrm{Gal}(E /F)$ 使 $\beta = \sigma(\alpha)$.)
