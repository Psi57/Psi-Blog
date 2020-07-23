---
title: QuadraticForms-2
date: 2020-07-24 02:15:35
tags: Math Number-Theory
---

## Valuations and $p$-adic numbers

~~抄不动了呜呜呜呜呜~~ 定义略去.

<!--more-->

{% note %}
**Lemma 6.6.** 设 $F$ 是对非阿基米德赋值 $\varphi$ 完备的域, 则

$$
    \sum_{n = 1}^{\infty}a_n \text{ is convergent} \Longleftrightarrow \lim_{n \to \infty}a_n = 0.
$$
{% endnote %}

给定 $F$ 和赋值 $|\cdot|$, 令

$$
    R = \{x \in F \mid |x| \le 1\}, M = \{x \in F \mid |x| < 1\}.
$$

称 $R$ 是 $F$ 的赋值环, 易验证 $M$ 是 $R$ 唯一的极大理想. (见 Lang, *Algebra*). 若 $|\cdot |$ 是离散的, 对应一个正规化的 order function $v$, 则 $R$ 的每个理想有形式 $M^n$. 令 $\pi$ 使得 $v(\pi) = 1$, 则 $M = \pi R$, $R$ 的每个理想有形式 $(\pi^n)$. 于是 $R$ 是 PID.

{% note %}
**Theorem 6.8.** 设 $F$ 是域, $|\cdot |$ 是 $F$ 上的非阿基米德赋值, 令 $F^*$ 是 $F$ 的完备化, 赋值仍然记为 $|\cdot |$, 则 $F$ 和 $F^*$ 在 $|\cdot |$ 下的像相同, 即 $|F| = |F^*|$. 特别地, 若 $|\cdot |$ 离散, 则 $|\cdot |$ 的完备化也离散.
{% endnote %}

*proof*. 任意 $y \in F^*$, 任意 $\varepsilon > 0$, 存在 $x \in F$ 使得 $|y-x| < \varepsilon$. 我们令 $\varepsilon < |x|$, 得到

$$
    |y| = |y-x+x| = |x|.
$$

易见 $|F^*| = |F|$.

{% note %}
**Theorem 6.8.** 条件同上, 令 $R^*, M^*$ 是 $F^*$ 的赋值环和极大理想, 则 $R^*$ 是 $R$ 在 $F^*$ 中的闭包, 同理于 $M^*$ 和 $M$.
{% endnote %}

*proof.* 设 $x \in R^*$, 任意 $0 < \varepsilon < |x|$, 存在 $y \in F$ 使得 $|y-x| < \varepsilon$. 我们得到 $|y|=|x|$ 故 $y \in R$. 这说明 $R$ 在 $R^*$ 中稠密. 同理于 $M$ 和 $M^*$.

{% note %}
**Theorem 6.8.** 条件同上, 我们有 $R^* = R + M^*$, $M = R\cap M^*$, 且 $R /M \simeq R^* /M^*$.
{% endnote %}

*proof.* 任意 $x \in R^*$, 任意 $\varepsilon \in (0,|x|)$, 由上, 存在 $y \in R$ 使得 $|y-x| < \varepsilon$. 令 $\varepsilon < 1$ 我们得到 $y-x \in M^*$. 于是 $x = x-y+y \in M^* + R$. 易见 $R^* = R+M^*$. 同时 $M = R \cap M^*$ 是平凡的. 同构 $R /M \simeq R^* /M^*$ 来源于同构定理.

(实际上, 设 $\varepsilon \in (0,1)$, 令 $M_\varepsilon = \{x \in F \mid |x| < \varepsilon\}$. 则 $M_\varepsilon$ 是 $R$ 的理想. 用上面的方法也可以发现 $R^* = R + M^*_{\varepsilon}$ 和 $M_{\varepsilon} = M^*_{\varepsilon} \cap R$. 于是 $R /M_{\varepsilon} \simeq R^* /M_{\varepsilon}^*$. 当 $F^*$ 取 $\mathbb{Q}_p$, $F$ 取 $\mathbb{Q}$, 赋值取 $p$-adic 赋值时, $\mathbb{Z}$ 在 $\mathbb{Z}_p$ 中稠密, 用上面的方法知道 $\mathbb{Z_p} /p^n\mathbb{Z}_p \simeq \mathbb{Z}/p^n\mathbb{Z}$.)


{% note %}
**Theorem 6.8.** 条件同上, 设 $|\cdot |$ 是离散的, 对应一个正规化的 order function $v$. 令 $\{\pi_k\}_{k \in\mathbb{Z}}$ 是 $F$ 的子集, 使得 $v(\pi_k) = k$. 令 $S$ 是陪集 $R /M$ 的一组代表元且 $0 \in S$. 则 $F^*$ 的每个元素都可以唯一地写为 $\sum_{k=m}^{\infty} s_k\pi_k$, 其中 $m \in \mathbb{Z}$, $s_k \in S$.
{% endnote %}

我们注意到 $S\pi_n$ 是陪集 $M^n /M^{n+1}$ 的代表元, 因为 $R /M \to M^n /M^{n+1}, x \mapsto x\pi_n$ 是 Abel 群的同构. 然后归纳即可.

{% note %}
**Lemma 6.9.** 设 $v$ 是离散的, $R /M$ 有限. 则 $R^*$, $(R^*)^\times$ 是紧的开集, $F^*$ 是局部紧的.
{% endnote %}

设 $p$ 是素数, 对 $p^{n} \frac{a}{b} \in \mathbb{Q}$, $p \nmid a,b$, 令 $v_p(p^na /b) = n$. 则 $v_p$ 是一个 order function. 令 $|x|_p = p^{-v_p(x)}$, 则 $\mathbb{Q}$ 的完备化记为 $\mathbb{Q}_p$, 即 $p$-adic 数域. $\mathbb{Z}_p$ 即 $\{x \in \mathbb{Q}_p \mid v_p(x) \ge 0\}$. 我们有 $\mathbb{Z}_P^\times =\{x \in \mathbb{Z}_p \mid v_p(x) = 0\}$, $\mathbb{Z}$ 在 $\mathbb{Q}_p$ 中的闭包是 $\mathbb{Z}_p$. 于是 Theorem 6.8 告诉我们

$$
    \mathbb{Z}_p = \left\{\sum_{k=0}^{\infty}a_kp^k \mid a_k = 0,1,\ldots ,p-1\right\}.
$$

下设 $p$ 是**奇素数**. 我们有同态 $\varphi\colon\mathbb{Z}_p \to \mathbb{Z}_p /p\mathbb{Z}_p \to \mathbb{Z}/p\mathbb{Z}$. 设 $x \in \mathbb{Z}_p$, 我们定义$\left(\dfrac{x}{p}\right)=\left(\dfrac{\varphi(x)}{p}\right)$. 这个定义即, 若 $\xi \in \mathbb{Z}$ 使得 $x - \xi \in p\mathbb{Z}_p$, 则 $\left(\dfrac{x}{p}\right)=\left(\dfrac{\xi}{p}\right)$.

{% note %}
**Lemma 6.11.** 令 $\mathbb{Z}_p^{\times 2} = \{x^2 \mid x \in \mathbb{Z}_p^\times\}$. 有

$$\begin{aligned}
    (i) \mathbb{Z}_p^{\times 2} = \left\{x \in \mathbb{Z}_p^\times  \mid \left(\dfrac{x}{p}\right) = 1\right\}, \\
    (ii) (\mathbb{Z}_p^\times \colon\mathbb{Z}_{p}^{\times 2}) = 2, \\
    (iii) (\mathbb{Q}_p^\times \colon \mathbb{Q}_p^{\times 2}) = 4.
\end{aligned}$$
{% endnote %}

*proof.* (i) 首先左边显然被右边包含. 反之, 设 $x \in \mathbb{Z}_p^\times$, 对任意 $n > 0$, 有 $(\mathbb{Z}_p /p^n\mathbb{Z}_p)^\times \simeq (\mathbb{Z} /p^n\mathbb{Z})^\times$, 于是是循环群. 令 $r \in \mathbb{Z}$ 生成它们, 有 $x-r^k \in p^b\mathbb{Z}_p$, 存在 $k$. 若 $\left(\dfrac{x}{p}\right) = 1$ 则 $k$ 是偶数, 因为 $\left(\dfrac{r}{p}\right) = -1$. 于是我们可以找到 $y_n^2 - x \in p^n\mathbb{Z}_p$. 数列 $\{y_n\}$ 有收敛子列收敛于 $z \in \mathbb{Z}_p$. 易见 $z^2 = x$, 从而 $x \in \mathbb{Z}_p^{\times 2}$. (ii),(iii) 不抄.

这说明 $\mathbb{Q}_p^\times  /\mathbb{Q}_p^{\times 2}$ 的陪集有代表元 $\{1,r,p,pr\}$, 其中 $r$ 是任意非一个模 $p$ 的二次剩余. 我们结合 Kummer 理论, 知道 $\mathbb{Q}_p$ 上的二次扩张只有 $\mathbb{Q}_p(\sqrt{r}),\mathbb{Q}_p(\sqrt{p}),\mathbb{Q}_p(\sqrt{pr})$.

对 $p=2$, 我不抄了! 抄不动了呜呜呜呜呜, 抄这些干什么.jpg呜呜呜, 笔记本不香吗呜呜呜.
