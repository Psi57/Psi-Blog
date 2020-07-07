---
title: 群在集合上的作用
tags: Math Algebra
---


<!-- vim-markdown-toc GFM -->

* [Preliminaries](#preliminaries)
* [Burnside's Lemma](#burnsides-lemma)
* [n-Transitivity](#n-transitivity)
* [Primitive Actions](#primitive-actions)
* [Applications](#applications)

<!-- vim-markdown-toc -->
主要是 "Finite Groups, an Introduction" 第一章关于群作用部分的总结和习题.

## Preliminaries
设 $G$ 是一个群. $G$ (左)作用在集合 $X$ 上是指一个映射

$$
    G \times X \to X, (g,x) \mapsto gx,
$$

满足如下性质:

$(1)\, g(g'x) = (gg')x, \forall x \in X, g,g' \in G$.  
$(2)\, 1x = x,\forall x \in X$.

等价的, $G$ 在 $X$ 上的作用也可由群同态 $G \to \mathcal{S}_X$ 给出, 其中 $\mathcal{S}_X$ 指 $X$ 的对称群.

**Definition.** 若集合 $X$ 被 $G$ 作用, 称 $X$ 为 $G$-Set.  
设 $X,Y$ 是两个 $G$-Set, 映射 $f: X \to Y$ 被称为 $G$-Map, 如果 $f(gx) = gf(x)$ 对任意 $x \in X, g \in G$ 成立.  
设 $X,Y$ 是 $G$-Set, 若存在一一对应的 $G$-Map $X \to Y$, 称 $G$ 在 $X,Y$ 上的作用同构的. 下文简称 $X,Y$ 是 $G$-同构的.
{:.success}

**Definition.** 设 $X$ 是一个 $G$-Set, $x \in X$, 用 $G_x$ 表示 $x$ 的稳定子群(Stabilizer)
{:.success}

**Definition.** $G$ 在 $X$ 上的作用被称为  
$(1)$ 忠实的(faithful), 若 $G \to \mathcal{S}_X$ 是单射. 这等价于 $\bigcap_{x \in X}G_x = 1$.  
$(2)$ 自由的(free), 若任意 $x \in X$, 有 $G_x = 1$.  
若 $G$ 自由且传递地作用于 $X$, 则 $X$ 称为 $G$-torsor.
{:.success}

其他需要的概念和性质, 例如 $G$-轨道(Orbit), 轨道-稳定子群定理, 这里省去. $X$ 的所有轨道组成的集合记为 $X/G$.
<!--more-->

设 $G$ 传递地作用于 $X$, 取 $x \in X$, 有 $G$-同构 $G/G_x \to X, gG_x \mapsto gx$. $G$ 传递地作用于一个集合 $X$, 等价于给定一个子群 $H \subset G$, $G$ 作用于(左)陪集 $G/H$.

设 $X$ 是 $G$-torsor, 我们有 $G$ 在 $X$ 上的作用同构于 $G$ 的(左)正则表示.

设 $G$ 自由地作用于 $X$ 上, 任取 $X$ 的一个 $G$-轨道 $\mathcal{O}$, $\mathcal{O}$ 是 $G$-torsor, 而 $X$ 是这些 $G$-torsor 的无交并.

**Example.** 设 $G$ 是 $\mathcal{S}_n$ 的可迁子群, $H$ 是 $G$ 的正规子群. 则 $X=\{1,2,\cdots ,n\}$ 的每个 $H$-轨道有相同的长度.
{:.warning}

**证明的概要** 设 $a,b \in X$. 设 $b = ga,a \in G$.记 $a$ 的 $H$-稳定子群 $H_a$, 则 $b$ 的 $H$-稳定子群为 $gH_ag^{-1}$.

**Example.** 设 $G$ 忠实且传递地作用于一 $p$ 元集 $X$, $p$ 为素数(即 $G$ 是 $\mathcal{S}_p$ 的可迁子群). 设 $G$ 的 $p$ 阶元生成 $H$, 则 $H$ 是单群.
{:.warning}

**证明概要** 只考虑 $H \ne 1$, 从而 $H$ 是 $\mathcal{S}_p$ 的可迁子群. 设 $N$ 是 $H$ 的正规子群, 有 $\{1,2,\cdots , p\}$ 的每个 $N$-轨道长度相同, 从而是 $p$ 的因子, 只能为 $1$ 或 $p$. 若为 $1$, 则 $N = 1$. 若为 $p$, 则 $p \mid \,\mid N\mid$, 从而 $N$ 有 $p$ 阶元. $H$ 的 $p$-Sylow 子群彼此共轭, 由此, $H$ 的 $p$ 阶元都在 $N$ 中, $H = N$.

## Burnside's Lemma
**Proposition.** 设 $G$ 为有限群, 令 $X$ 是一个有限 $G$-Set. 对每一个 $g \in F$, 令 $X^g \subset X$ 为 $g$ 的不动点集, 并令 $\chi_X(g) = \mid X^g \mid$. 有:  

$$
    \mid X/G \mid = \frac{1}{\mid G\mid}\sum_{g\in G}\chi_X(g).
$$

**证明的概要** 令 $S = \{(g,x) \in G \times X \mid gx = x\}$. 用两种方法计算 $\mid S\mid$.

**Example.** 设 $n \geqslant 0$, 集合 $X$, $\mid X\mid \geqslant n$. $\mathcal{S}_X$ 自然地作用于 $X^n$ 上. 对 $x = (x_i)_{i=1}^n \in X^n$, 按照 $i \equiv j \Longleftrightarrow x_i = x_j$ 定义 $\{1,2,\cdots ,n\}$ 的等价关系 $R_x$. 设 $x,y \in X^n$, 则 $R_x = R_y$ 当且仅当 $x,y$ 在相同的 $\mathcal{S}_X$-轨道中.
{:.warning}

**证明的概要** $\Leftarrow:$ 设 $x = (x_i), y = (y_i)$, $x = gy$, $g\in \mathcal{S}_X$. 则 $x_i = x_j \Longleftrightarrow gx_i = gx_j \Longleftrightarrow y_i = y_j$.

$\Rightarrow:$ 构造置换将 $x_i$ 对应到 $y_i$ 即可, 而 $x_i = x_j \Longleftrightarrow y_i = y_j$, 这当然是可以的, 细节略去.

清晰地看到, $\mathcal{S}_X$ 作用在 $X^n$ 产生的轨道和 $\{1,2,\cdots ,n\}$ 上的等价关系是一一对应的. 从而 $X^n/\mathcal{S}_X$ 的大小恰为 $B(n)$, 即第 $n$ 个 Bell 数. Bell 数满足熟知的公式 $B(n+1) = \sum_{k=0}^n\binom{n}{k}B(k)$. 当 $X$ 有限时, 由 Burnside 引理, 这个公式等价于

$$
    \sum_{g\in \mathcal{S}_X}\chi_{X}(g)^n = \sum_{g\in \mathcal{S}_X}(\chi_X(g)+1)^{n-1}, \,\,\,\,\,\,\forall n \leqslant |X|. \tag{1}\label{r1}
$$

($g \in \mathcal{S}_X$ 作用在 $X^m$ 上不动点个数为 $\chi_X(g)^m$)

下面给出 $\eqref{r1}$ 式的直接证明. (大飞机太强啦~!)

**证明** 记 $\mid X\mid = m, G = \mathcal{S}_X$. 我们只需证明任意 $n \leqslant m$ 有 $\sum_{g\in G} \binom{\chi_X(g)}{n} = \sum_{g\in G} \frac{1}{\chi_X(g) + 1}\binom{\chi_X(g) + 1}{n}$ (将 $\binom{-}{n}$ 看成 $n$ 次多项式), 只需证明 $\sum_{g\in G}\binom{\chi_X(g)}{n} = \frac{1}{n}\sum_{g\in G}\binom{\chi_X(g)}{n-1}$, 再考虑 $\sum_{g\in G}\binom{\chi_X(g)}{0} = m!$, 只需证明

$$\sum_{g\in \mathcal{S}_X}\binom{\chi_X(g)}{n} = \frac{|X|!}{n!}. \tag{2}\label{r2}$$

设 $k \leqslant m$, 则 $\mathcal{S}_X$ 中不动点个数为 $k$ 的置换的个数为 $\binom{m}{k}$ 乘 $m-k$ 全错排数, 为

$$
    \binom{m}{k}(m-k)!\sum_{i=0}^{m-k}(-1)^i\frac{1}{i!} = \frac{m!}{k!}\sum_{i=0}^{m-k}{(-1)^i\frac{1}{i!}}.
$$

从而, $\eqref{r2}$ 左边为

$$\begin{aligned}
    \sum_{k=0}^m\sum_{i=0}^{m-k}\binom{k}{n}\frac{m!}{k!i!}(-1)^i &= \sum_{k=n}^{m}\sum_{i=k}^{m}\binom{k}{n}\frac{m!}{k!(i-k)!}(-1)^{i-k} \\
    &=\frac{m!}{n!}\sum_{i=n}^{m}\sum_{k=n}^{i}\frac{(-1)^{i-k}}{(k-n)!(i-k)!} \\
    &=\frac{m!}{n!}\sum_{i=0}^{m-n}\sum_{k=0}^{i}\frac{(-1)^{i-k}}{k!(i-k)!} \\
    &= \frac{m!}{n!}\sum_{i=0}^{m-n}\frac{1}{i!}\sum_{k=0}^{i}\binom{i}{k}(-1)^{i-k}
\end{aligned}$$

当 $i \geqslant 1$ 时, $\sum_{k=0}^{i} \binom{i}{k}(-1)^{i-k} = 0$, $i = 0$ 时它为 $1$, 由此左边 $= \frac{m!}{n!} =$ 右边.

## n-Transitivity
令 $n$ 为大于 $1$ 的整数, 群 $G$ 作用于一集合 $X$, 且 $\mid X\mid \geqslant n$. $G$ 按照自然的方式作用于 $X^n$, 即 $g(x_1,x_2,\cdots,x_n) = (gx_1,gx_2,\cdots ,gx_n)$. 令 $X_{\mathrm{dist}}^n = \{(x_i)_{1 \leqslant i \leqslant n} \in X^n \mid x_{i} \ne x_{j}, \forall i \ne j\}$. 

**Definition.** 称 $G$ 在 $X$ 上的作用是 $n$ 重传递的($n$-transitive), 如果 $G$ 在 $X_{\mathrm{dist}}^n$ 上的作用是传递的. 即对两个两两不同的 $n$ 元组 $(x_1,x_2,\cdots,x_n)$, $(y_1,y_2,\cdots,y_n) \in X^n$, 存在 $g \in G$, 使 $gx_i = y_i, 1 \le i \le n$.
{:.success}

**Proposition.** 设 $X$ 是 $G$-Set, $|X| \geqslant n \geqslant 2$. 则以下条件等价:  
$(\rm{i})$ $G$ 在 $X$ 上的作用 $n$ 重传递.  
$(\rm{ii})$ $G$ 在 $X$ 上的作用传递, 并且如果 $H \subset G$ 是 $X$ 一点 $x$ 的稳定子群, 则 $H$ 在 $X-\{x\}$ 上的作用是 $n-1$ 重传递的.  
$(\rm{iii})$ $G$ 作用在 $X^n$ 上的轨道和 $\mathcal{S}_X$ 作用在 $X^n$ 上的相同.  
$(\rm{iv})$ $G$ 作用在 $X^n$ 上的轨道数是 $B(n)$, 其中 $B(n)$ 是第 $n$ 个 Bell 数.  
当 $X$, $G$ 皆有限时,还有  
$(\rm{v})$ $\frac{1}{\mid G\mid}\sum_{g\in G}\chi_X(g)^n \leqslant B(n)$, 其中 $\chi_X(g) = \mid X^g\mid$.  
$(\rm{vi})$ $\frac{1}{\mid G\mid}\sum_{g\in G}\chi_X(g)^n = B(n)$.
{:.info}

**证明的概要** $(\rm ii)$ 略. 设 $x,y \in X^n$ 在相同的 $G$-轨道, 则 $x,y$ 在相同的 $\mathcal{S}_X$-轨道, 取 $\mathcal{O} \in X^n/\mathcal{S}_X$, 则 $G$ 作用在 $\mathcal{O}$ 上封闭, 设 $\{\mathcal{O}_i\} = X^n/\mathcal{S}_X$, 则 $X^n/G = \bigcup_{i}\mathcal{O_i}/G$. 这说明 $\mid X^n/G\mid \geqslant B(n)$, 且取等号当且仅当 $X^n/G = X^n/\mathcal{S}_X$. 因此 $(\rm iii),(\rm iv),(\rm v),(\rm vi)$ 是等价的. 下证 $(\rm iii) \Longleftrightarrow (\rm i)$.

$(\rm iii) \Longrightarrow (\rm i)$ 是显然的, 因为 $X_{\mathrm{dist}}^n$ 本身是一个 $\mathcal{S}_X$-轨道. 

对于 $(\rm i) \Longrightarrow (\rm iii)$, $G$ 在 $X_{\mathrm{dist}}^n$ 上传递, 则任意 $m \leqslant n$, $G$ 在 $X_{\mathrm{dist}}^m$ 上传递. 因为由 $\mid X\mid \geqslant n$, 对 $(x_1,x_2,\cdots,x_m) \in X_{\mathrm{dist}}^m$, 可选取 $n-m$ 个两两不同的元素 $\in X-\{x_1,x_2,\cdots, x_m\}$, 使 $(x_1,\cdots,x_m)$ 扩充成 $(x_1,\cdots,x_m,x_{m+1},\cdots ,x_n) \in X_{\mathrm{dist}}^n$. 任意 $x,y \in X_{\mathrm{dist}}^m$, 将它们扩充为 $x',y' \in X_{\mathrm{dist}}^n$, $x',y'$ 在同一 $G$-轨道, 故 $x,y$ 在同一 $G$-轨道.

这说明 $\mid X^n/G\mid \leqslant B(n)$, 结合上文讨论只有 $\mid X^n/G\mid = B(n)$, 且 $X^n/G = X^n/\mathcal{S}_X$.

**Example.** 设 $n \geqslant 3$. $X = \{1,2,3,\cdots ,n\}$ 的对称群 $\mathcal{S}_n$ 在 $X$ 上的作用是 $n$ 重传递的, 而 $\mathcal{A}_n$ 在 $X$ 上的作用是 $n-2$ 重传递的.
{:.warning}

**Example.** 设 $G$ 在 $X$ 上的作用 $2$ 重传递, 则 $G$ 在 $X$ 上的作用 Primitive. 见 [Primitive Actions](#primitive-actions)
{:.warning}

**Example.** 设 $G$ 为阶大于等于 $3$ 的有限群, 设 $\mathrm{Aut}(G)$ 传递地作用于 $G-\{1\}$.  
$\rm a)$ 证明存在素数 $p$, 使得 $G-\{1\}$ 的每一个元素都是 $p$ 阶的.  
$\rm b)$ 若 $p=2$, 证明 $G$ 是 $2$ 阶群的直积.  
$\rm c)$ 若 $p > 2$, 且 $\mathrm{Aut}(G)$ 在 $G-\{1\}$ 上 $2$ 重传递. 证明 $\mid G\mid = 3$.  
$\rm d)$ 若 $\mid G\mid \geqslant 4$, $\mathrm{Aut}{G}$ 在 $G-\{1\}$ 上 $3$ 重传递, 证明 $\mid G\mid = 4$.
{:.warning}

**证明** $\rm a)$ 直接由 $G-\{1\}$ 的每一个元素的阶都相同得到. $\rm b)$ 由结构定理. 对于 $\rm c)$, 若 $\mid G\mid \ne 3$, 则 $\mid G\mid > 3$ ($2$ 重传递, 故 $\mid G\mid \geqslant 3$). 取 $x\in G-\{1\}$, 则 $x \ne x^{-1}$, 再取 $y \in G-\{1,x,x^{-1}\}$, 由条件, $(x,y)$ 和 $(x,x^{-1})$ 在同一个 $\mathrm{Aut}(G)$-轨道中. 这不可能, 因为若自同构 $\sigma$ 使 $\sigma(x) = x$, 则 $\sigma(x^{-1}) = x^{-1}$.

最后看 $\rm d)$ $\mathrm{Aut}(G)$ 三重传递地作用于 $G-\{1\}$, 从而也是二重传递的. 若 $p > 2$, 由 $\rm c)$, 有 $\mid G\mid = 3$, 与 $\mid G\mid \geqslant 4$ 不符, 从而 $p = 2$. 设 $G = (\mathbb{Z}/2\mathbb{Z})^n$, 若 $n > 2$, 取 $e_1 = (1,0,0,\underbrace{\cdots}_{\text{皆为 0,下同.}}),e_2=(0,1,0,\cdots),e_3=(0,0,1,\cdots),e_4=(1,0,1,\cdots)$. 可见不可能有自同构 $\sigma$, 变换 $(e_1,e_2,e_3)$ 到 $(e_1,e_4,e_3)$. 因此只能是 $n = 2$. 易验证 $n=2$ 满足条件.

## Primitive Actions
**Definition.** 令 $G$ 传递地作用于 $X$, $\mid X\mid \geqslant 2$. 设 $H$ 是 $X$ 一点的稳定子群, 称 $G$ 在 $X$ 上的作用是 Primitive, 如果 $H$ 是极大子群.
{:.success}

**Proposition.** 设 $X$ 是 $G$-Set. $G$ 在 $X$ 上的作用 Primitive, 当且仅当任何 $G$-Map $X \to Y$ 是单的或平凡的(像退化为一个点).
{:.info}

**Proposition.** 设 $G$ 二重传递于 $X$, 则 $G$ 在 $X$ 上的作用 Primitive.
{:.info}
## Applications

**$\mathcal{A}_n$ ($n \geqslant 5$) 的单性**, 归纳法.

$\mathcal{A}_5$ 的共轭类分别有 $1,12,12,15,20$ 个元素, 设 $H \subset \mathcal{A}_5$ 在 $\mathcal{A}_5$ 的内自同构下不变, 且满足 $H \ne 1,\mathcal{A}_5$ 和 $H$ 包含 $1$. $H$ 是一些共轭类的无交并, $H$ 的大小只可能为 $13,16,21,25,28,33,36,40,45$ 或 $48$, 都不是 $60$ 的因子,故 $H$ 不可能是 $\mathcal{A}_5$ 的子群. 这说明 $\mathcal{A}_5$ 单.

设 $n \geqslant 6$, 假设已经证明 $\mathcal{A}_{n-1}$ 是单群, 下证 $\mathcal{A}_n$ 单.

$\mathcal{A}_{n-1}$ 是点 $n$ 在 $\mathcal{A}_n$ 作用下的稳定子群. $\mathcal{A}_n$ 二重传递(实际上, $n-2$ 重传递)作用于 $X$, 从而 Primitive. 因此 $\mathcal{A}_{n-1}$ 是 $\mathcal{A}_n$ 的极大子群.

若 $\mathcal{A}_n$ 不单, 设 $N$ 是 $\mathcal{A}_n$ 的正规子群, $N \ne 1, \mathcal{A}_n$, 则 $N \cap \mathcal{A}_{n-1}$ 正规于 $\mathcal{A}_{n-1}$, $\mathcal{A}_{n-1}$ 单, 故 $N \cap \mathcal{A}_{n-1} = 1$ 或 $\mathcal{A}_{n-1}$. 若 $\mathcal{A}_{n-1} \subset N$, 由 $\mathcal{A}_{n-1}$ 极大, $N \ne \mathcal{A}_n$, 只有 $N = \mathcal{A}_{n-1}$. 但 $\mathcal{A}_{n-1}$ 不正规于 $\mathcal{A}_{n}$ (它分别与 $1,2,\cdots ,n-1$ 的稳定子群共轭), 矛盾. 故 $N \cap \mathcal{A}_{n-1} = 1$. 再由 $\mathcal{A}_{n-1}$ 极大知 $N\mathcal{A}_{n-1} =\mathcal{A}_n$. 这说明 $\mid N\mid = n$.

令 $\mathcal{A}_{n-1}$ 共轭地作用于 $N$ 上, 作映射 $\varphi: N \to X, g \mapsto g(n)$. 设 $g \in \mathcal{A}_{n-1}$, 则 $\varphi(gxg^{-1}) = gxg^{-1}(n) = gx(n) = g\varphi(x)$, 说明 $\varphi$ 是 $\mathcal{A}_{n-1}$-Map. 设 $g_1,g_2 \in N$ 使 $\varphi(g_1)=\varphi(g_2)$, 有 $g_2^{-1}g_1(n) = n$, 从而 $g_2^{-1}g_1 \in \mathcal{A}_{n-1} \cap N = 1$, 只有 $g_1=g_2$, 故 $\varphi$ 是单射. 结合 $\mid N\mid = \mid X\mid = n$ 知 $\varphi$ 是双射, 从而给出 $\mathcal{A}_{n-1}$-同构.

$\mathcal{A}_{n-1}$ 三重传递地作用于 $X-\{n\}$(实际上, $n-3$ 重传递), $\varphi^{-1}(n) = 1$, 从而 $\mathcal{A}_{n-1}$ 三重传递地作用于 $N-\{1\}$. 这导致 $\mathrm{Aut}(N)$ 三重传递地作用于 $N-\{1\}$, 只有 $\mid N\mid = 4$, 矛盾.

这说明 $\mathcal{A}_n$ 单.

**$\mathcal{A}_5,\mathcal{A}_4,\mathcal{S}_4$ 的自同构群.**

在 $\mathcal{A}_5$ 的情况. 记 $G = \mathcal{A}_5$.

令 $X=\{(u,v) \in G\times G\mid o(u) = 2,o(v) = 3,o(xy) = 5\}$. 则 $\mid X\mid = 120$. (由共轭,只需考虑 $u = (12)(34)$, $v$ 有 $8$ 种取法, 从而 $X$ 有 $8\times 15 = 120$ 个元素). $\mathrm{Aut}(G)$ 自然地作用于 $X$ 上, 且是自由的. 因为设 $(u,v) \in X$, 则 $u,v$ 生成 $G$ ($2\times 3 \times 5 =30$, $G$ 无 $30$ 阶子群). 从而若 $\sigma \in \mathrm{Aut}(G)$ 使 $u,v$ 不动, 则 $\sigma = 1$. 这说明 $120 = \mid X\mid \geqslant \mid \mathrm{Aut}(G)\mid$. $\mathrm{Aut}(G)$ 包含 $\mathcal{S}_5$ 作为子群, 只有 $\mathrm{Aut}(G) = \mathcal{S}_5$.

对 $\mathcal{A}_4$, 令 $X = \{(u,v) \mid o(u) = 2,o(v) = 3\}$. 有 $\mathrm{Aut}(\mathcal{A}_4) = \mathcal{S}_4$.

对 $\mathcal{S}_4$, 令 $X = \{(u,v) \mid u \text{ 是对换}, v \text{ 是 } 3\text{-轮换}, uv \text{ 是 } 4\text{-轮换}\}$. 得到 $\mathrm{Aut}(\mathcal{S}_4) = \mathcal{S}_4$.

有趣的材料: [V](https://groupprops.subwiki.org/wiki/Von_Dyck_group) 和 [A](https://groupprops.subwiki.org/wiki/Symmetric_group:S4).
