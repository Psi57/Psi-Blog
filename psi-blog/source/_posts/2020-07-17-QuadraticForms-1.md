---
title: QuadraticForms-1
date: 2020-07-17 21:37:02
tags: Math Number-Theory
---

$\newcommand{\bbZ}{\mathbb{Z}}$

看一点写(~~抄~~)一点


<!-- vim-markdown-toc GFM -->

* [Elementary Facts](#elementary-facts)
    * [Structure of $(\mathbb{Z}/m\mathbb{Z})^{\times}$.](#structure-of-mathbbzmmathbbztimes)
    * [The quadratic reciprocity law](#the-quadratic-reciprocity-law)
        * [The quadratic residue symbol](#the-quadratic-residue-symbol)
        * [Dirichlet Character](#dirichlet-character)

<!-- vim-markdown-toc -->

<!--more-->

## Elementary Facts

### Structure of $(\mathbb{Z}/m\mathbb{Z})^{\times}$.

$(\mathbb{Z}/m\mathbb{Z})^\times$ 是环 $\mathbb{Z}/m\mathbb{Z}$ 的单位群.然而若 $m_1,\ldots ,m_r$ 是互素的整数则有

$$
    \mathbb{Z}/(m_1\ldots m_r)\mathbb{Z} \simeq \prod_{i=1}^{r} \mathbb{Z}/m_i\mathbb{Z}.
$$

于是 $(\mathbb{Z}/(m_1\ldots m_r)\mathbb{Z})^\times \simeq \prod_{i=1}^{r} (\mathbb{Z}/m_i\mathbb{Z})^{\times }$. 我们只需研究 $\mathbb{Z}/p^r\mathbb{Z}$ 的单位群的结构, 其中 $p$ 是素数, $r > 0$. 相关结论是

{% note %}
    **Theorem (原根).** 设 $p$ 是素数, $r > 0$.  
    (i) 若 $p$ 是奇素数, 则 $(\mathbb{Z}/p^r\mathbb{Z})^\times$ 是 $p^{r-1}(p-1)$ 阶循环群. 其生成元被称为模 $p^r$ 的原根.  
    (ii) 若 $p=2$, $r > 2$, 则 $(\mathbb{Z} /2^r\mathbb{Z})^\times$ 由 $-1$ 和 $5$ 生成, 且 $(\mathbb{Z} /2^r\mathbb{Z})^\times \simeq \{\pm 1\} \times \mathbb{Z} / 2^{r-2}\mathbb{Z}$.
{% endnote %}

见书[1] page 4-5.

### The quadratic reciprocity law
#### The quadratic residue symbol

设 $p$ 是奇素数, 则 $(\mathbb{Z}/p\mathbb{Z})^\times$ 是 $p-1$ 阶循环群. $2 \mid p-1$, 故 $(\mathbb{Z}/p\mathbb{Z})^\times$ 有唯一的 $\frac{p-1}{2}$ 阶子群 $R = \{a^2 \mid a\in (\mathbb{Z}/p\mathbb{Z})^\times\}$. 存在唯一的同态 $\lambda$ 使得

$$
    1 \to R \to (\mathbb{Z}/p\mathbb{Z})^\times \xrightarrow{\lambda} \{\pm 1\} \to 1
$$

正合.

子群 $R$ 的元素称为模 $p$ 的二次剩余. 定义

$$
    \left(\dfrac{b}{p}\right) = \begin{cases}
         \lambda(b \pmod{p})& p\nmid b,\\
         0&  p \mid b\\
    \end{cases}
$$

则显然 $\left(\dfrac{bc}{p}\right) = \left(\dfrac{b}{p}\right)\left(\dfrac{c}{p}\right)$, $\forall b,c \in \mathbb{Z}$.

设 $r$ 是模 $p$ 的一个原根. 对任意 $a \in \mathbb{Z}$, 若 $p \nmid a$, 记 $a \equiv r^{m} \pmod{p}$, 则

$$
    \left(\dfrac{a}{p}\right) = (-1)^m \equiv (r^\frac{p-1}{2})^m \equiv a^\frac{p-1}{2} \pmod{p}.
$$

而当 $p \mid a$ 时我们也有上式左右两边模 $p$ 同余.

带入 $a = -1$ 得到

$$
    \left(\dfrac{-1}{p}\right) = (-1)^{\frac{p-1}{2}}.
$$

#### Dirichlet Character

设 $2 <r \in \mathbb{Z}$. 我们将同态 $\chi\colon (\mathbb{Z} /r\mathbb{Z})^\times \to \mathbb{C}^\times$ 称为模 $r$ 的 Dirichlet 特征(或者简写特征). 我们可以把 $\chi$ 视为 $\mathbb{Z}$ 的函数, 通过

$$
    \chi(c) = \begin{cases}
        \chi(c) & (c,r) = 1\\
        0 & (c,r) \ne 1\\
    \end{cases}.
$$

易见对有限 Abel 群 $G$ 有 $\mathrm{Hom}(G,\mathbb{C}^\times) \simeq G$. (见 Lang, *Algebra*.)

我们称模 $r$ 的特征 $\chi$ 是本原的或非平凡的, 若不存在 $s \mid r$ 和模 $s$ 的特征 $\xi$, 使得 $\chi(c) =\xi(c), \forall (c,r)=1$.

令 $\zeta_r = e^{\frac{2\pi i}{r}}$ 是本原 $r$ 次单位根, 称

$$
    \tau(\chi) = \sum_{a \in \mathbb{Z} /r\mathbb{Z}} \chi(a)\zeta_r^a
$$

为 $\chi$ 的 Gauss 和. 其求和号可以换为 $\sum_{a=1}^r,\sum_{a=1}^{r-1}$ 或者 $\sum_{a \in (\mathbb{Z} /r\mathbb{Z})^\times}$. 设 $\chi$ 是本原的, 我们有

$$
    \begin{aligned}
        \sum_{a = 1}^{r} \chi(a)\zeta_r^{ab} &= \overline\chi(b)\tau(x), \\
        \tau(\chi)\tau(\overline\chi) &= \chi(-1)r, \\
        |\tau(\chi)|^2 &= r, \\
        \overline{\tau(\chi)} &= \chi(-1)\tau(\overline\chi).
    \end{aligned}
$$

见书 [1] page 7.

 {% note %}
    **Theorem 3.4.** 设 $\chi$ 是模 $r$ 的本原特征标, 满足 $\overline{\chi}=\chi$. 则任意和 $r$ 互素的素数 $p$ 有 $\chi(p) = \chi(-1)^{(p-1) /2}\left(\dfrac{r}{p}\right)$.
 {% endnote %}

 特别地, 设 $q$ 是奇素数, 则 $\left(\dfrac{-}{q}\right)$ 是模 $q$ 的本原特征标. 由 Theorem 3.4 得到

 $$
    \left(\dfrac{q}{p}\right)\left(\dfrac{p}{q}\right) =\left(\dfrac{-1}{q}\right)^{\frac{p-1}{2}} = (-1)^{\frac{p-1}{2}\frac{q-1}{2}}.
 $$

 现在, 定义 $\chi_1\colon (\mathbb{Z} /8\mathbb{Z})^\times  \to \{\pm 1\}$, 其中

 $$
    \chi_1(a) = \begin{cases}
        1 & a \equiv \pm 1\pmod{8} \\
        -1 & a \equiv \pm 3 \pmod{8} \\
    \end{cases}.
 $$

 则显然 $\chi_1$ 是模 $8$ 的本原特征标. 我们有 $\chi_1(-1) = 1$. 于是 Theorem 3.4 说明了对任意奇素数 $p$ 有

 $$
    \left(\dfrac{2}{p}\right)=\left(\dfrac{2^3}{p}\right) = \chi_1(p) = \begin{cases}
        1 & p \equiv \pm 1\pmod{8} \\
        -1 & p \equiv \pm 3 \pmod{8}\\
    \end{cases}.
 $$

