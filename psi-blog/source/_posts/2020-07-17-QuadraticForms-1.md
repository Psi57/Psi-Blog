---
title: QuadraticForms-1
date: 2020-07-17 21:37:02
tags: Math Number-Theory
---

$\newcommand{\bbZ}{\mathbb{Z}}$

看一点写(~~抄~~)一点

[1] 上的命题保持其编号. 这篇文章单独出现的命题以小括号编号.


<!-- vim-markdown-toc GFM -->

* [Elementary Facts](#elementary-facts)
    * [Structure of $(\mathbb{Z}/m\mathbb{Z})^{\times}$.](#structure-of-mathbbzmmathbbztimes)
    * [The quadratic reciprocity law](#the-quadratic-reciprocity-law)
        * [The quadratic residue symbol](#the-quadratic-residue-symbol)
        * [Characters of finite abelian groups](#characters-of-finite-abelian-groups)
        * [Dirichlet character](#dirichlet-character)
* [参考资料](#参考资料)

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

#### Characters of finite abelian groups

设 $G$ 是有限 Abel 群, 则 $G$ 的所有不可约复表示都是一维的.

我们有 $\mathrm{Hom}(G,\mathbb{C}^\times) \simeq G$. 这是因为 $G$ 可写成循环群的直和 $G = \bigoplus_{i=1}^{s} G_i$, 有 $\mathrm{Hom}(G,\mathbb{C}^\times) \simeq \bigoplus_{i=1}^{s}\mathrm{Hom}(G_i,\mathbb{C}^\times)$. 易见对循环群 $G_i$ 有 $\mathrm{Hom}(G_i,\mathbb{C}^\times) \simeq G_i$. 于是 $\bigoplus_{i=1}^{s}\mathrm{Hom}(G_i,\mathbb{C}^\times) \simeq G_i \simeq G$. (见 Serge Lang, *Algebra*).

令 $\chi \in \mathrm{Hom}(G,\mathbb{C}^\times)$, 则

$$
    \sum_{g \in G}\chi(g) = \begin{cases}
        |G| & \chi = 1 \\
        0 &  \chi \ne 1\\
    \end{cases}.
$$

这是因为 $\chi$ 对应 $G$ 的一个不可约表示.

由 $\mathbb{C}^\times$ 可除, 我们知道 $\mathbb{C}^\times$ 是内射的. 于是 $\mathrm{Hom}(-,\mathbb{C}^\times)$ 正合.

#### Dirichlet character

设 $2 <r \in \mathbb{Z}$. 我们将同态 $\chi\colon (\mathbb{Z} /r\mathbb{Z})^\times \to \mathbb{C}^\times$ 称为模 $r$ 的 Dirichlet 特征标(或者简写特征标). 我们可以把 $\chi$ 视为 $\mathbb{Z}$ 的函数, 通过

$$
    \chi(c) = \begin{cases}
        \chi(c) & (c,r) = 1\\
        0 & (c,r) \ne 1\\
    \end{cases}.
$$


我们称模 $r$ 的特征 $\chi$ 是本原的, 若 $\chi \ne 1$, 且不存在 $r$ 的真因子 $s$ 和模 $s$ 的特征 $\xi$, 使得 $\chi(c) =\xi(c), \forall (c,r)=1$.

设 $s \mid r$, 我们有满同态 $(\mathbb{Z}/r\mathbb{Z})^\times \to (\mathbb{Z}/s\mathbb{Z})^\times , a\pmod{r} \mapsto a\pmod{s}$ (使用中国剩余定理, 先对 $r$ 是素数的幂证明). 其核记为 $H_s = \{a \in (\mathbb{Z}/r\mathbb{Z})^\times \mid a \equiv 1 \pmod{s}\}$. 有正合列

$$
    1 \to H_s \to (\mathbb{Z}/r\mathbb{Z})^\times \to (\mathbb{Z}/s\mathbb{Z}) \to 1.
$$

从而

$$
    1 \to \mathrm{Hom}((\mathbb{Z}/s\mathbb{Z})^\times ,\mathbb{C}^\times) \to \mathrm{Hom}((\mathbb{Z}/r\mathbb{Z})^\times,\mathbb{C}^\times)\to \mathrm{Hom}(H_s,\mathbb{C}^\times) \to 1.
$$

正合.

{% note %}
    **Proposition (1).** 设 $\chi$ 是模 $r$ 的特征标, 则 $\chi$ 是本原的当且仅当对任意 $r$ 的真因子 $s$ 或 $s=1$, 有 $\chi$ 在 $H_s$ 上的限制不为 $1$.
{% endnote %}

*proof.* 若 $\chi$ 在某个 $H_s$ 上的限制平凡, 若 $s=1$, 则 $H_s = (\mathbb{Z}/r\mathbb{Z})^\times$, 这导致 $\chi = 1$. 若 $s \ne 1$, 由正合列, 存在模 $s$ 的特征标 $\chi_1$, 使得 $\chi = \chi_1\pi$. 其中 $\pi\colon (\mathbb{Z}/r\mathbb{Z})^\times \to (\mathbb{Z}/s\mathbb{Z})^\times$. 这导致任意 $(c,r)=1$, 有 $\chi(c) = \chi_1(c)$. 于是 $\chi$ 不本原.

反之, 若 $\chi$ 不本原, $\chi = 1$ 时平凡, 下设 $\chi \ne 1$. 存在 $r$ 的真因子 $s$ 和模 $s$ 的特征标 $\chi_1$ 使得 $\chi(c) = \chi_1(c), \forall (c,r)=1$. 易见 $\chi = \chi_1\pi$. 由正合列, $\chi$ 在 $H_s$ 上的限制平凡. 证完.

{% note %}
    **Lemma (1).** 设 $s$ 是 $r$ 的真因子, 记 $\zeta_s = e^{\frac{2\pi i}{s}}$ 是本原 $s$ 次单位根, 设 $\chi$ 是模 $r$ 的本原特征标. 则 $\sum_{a \in (\mathbb{Z}/r\mathbb{Z})^\times} \chi(a)\zeta_s^a = 0$.
{% endnote %}

*proof.* 为简洁记 $G = (\mathbb{Z}/r\mathbb{Z})^\times$, $L$ 是左陪集 $G /H_s$ 的一组代表元, 有

$$
    \sum_{a \in G}\chi(a)\zeta_s^a = \sum_{l \in L}\sum_{a \in H_s}\chi(la)\zeta_s^{la} = \sum_{l\in L}\chi(l)\zeta^l\sum_{a \in H_s}\chi(a).
$$

而 $\chi$ 限制在 $H_s$ 上给出 $H_s$ 非平凡的一维表示, 导致 $\sum_{a \in H_s}\chi(a) = 0$. 证完.

令 $\zeta_r = e^{\frac{2\pi i}{r}}$ 是本原 $r$ 次单位根, 设 $\chi$ 是模 $r$ 的特征标. 称

$$
    \tau(\chi) = \sum_{a \in \mathbb{Z} /r\mathbb{Z}} \chi(a)\zeta_r^a
$$

为 $\chi$ 的 Gauss 和. 其求和号可以换为 $\sum_{a=1}^r,\sum_{a=1}^{r-1}$ 或者 $\sum_{a \in (\mathbb{Z} /r\mathbb{Z})^\times}$. 设 $\chi$ 是**本原的**, 我们有([1] page 7).

$$
    \begin{aligned}
        &(i) \,\,\,\sum_{a = 1}^{r} \chi(a)\zeta_r^{ab} = \overline\chi(b)\tau(x), \\
        &(ii) \,\,\,\tau(\chi)\tau(\overline\chi) = \chi(-1)r, \\
        &(iii) \,\,\,|\tau(\chi)|^2 = r, \\
        &(iv) \,\,\,\overline{\tau(\chi)} = \chi(-1)\tau(\overline\chi).
    \end{aligned}
$$

*proof.* (i). 当 $b$ 与 $r$ 互素时显然. 当 $b$ 与 $r$ 不互素时只需说明左边为 $0$. 这就是 Lemma(1).

(ii) 

$$
    \tau(\chi)\tau(\overline{\chi}) = \sum_{a=1}^r \left(\tau(\chi)\overline\chi(a)\right)\zeta_r^a = \sum_{1 \le a,b\le r}\chi(b)\zeta_r^{ab}\zeta_r^a = \sum_{b=1}^r\chi(b)\sum_{a=1}^r\zeta_r^{ab}\zeta_r^a.
$$

然而 $\sum_{a = 1}^{r}\zeta_r^{a(b+1)} = \begin{cases}
    r & b = r-1\\
    0 & b \ne r-1\\
\end{cases}$. 于是 $\tau(\chi)\tau(\overline\chi) = \chi(-1)r$.

(iv) 首先 $\chi(-1) = \pm 1$, 故 $\overline\chi(-1)=\chi(-1)$. 有

$$
    \overline{\tau(\chi)} = \sum_{a=1}^{r} \overline\chi(a)\zeta_r^{-a} = \sum_{a=1}^r \overline\chi(-a)\zeta_r^a = \chi(-1)\tau(\overline{\chi}).
$$

(iii) 直接由 (iv) 和 (ii) 得到.

 {% note %}
    **Theorem 3.4.** 设 $\chi$ 是模 $r$ 的本原特征标, 满足 $\overline{\chi}=\chi$. 则任意和 $r$ 互素的奇素数 $p$ 有 $\chi(p) = \chi(-1)^{(p-1) /2}\left(\dfrac{r}{p}\right)$.
 {% endnote %}

 *proof.* 记 $\tau = \tau(\chi)$, $\zeta =\zeta_r$. 令 $R= \mathbb{Z}[\zeta]$. 我们有 $\tau \in R$. 有 $\tau^2 = \chi(-1)r$. 于是

 $$
    \tau^p = (\tau^2)^{\frac{p-1}{2}}\tau = \chi(-1)^{\frac{p-1}{2}}r^{\frac{p-1}{2}}\tau.
 $$

 另一方面, 我们有 $(a+b)^p \equiv a^p+b^p \pmod{pR}$, 于是

 $$
    \tau^p \equiv \sum_{a=1}^{r-1} \chi(a)\zeta^{ap} \equiv \chi(p)\tau \pmod{pR}.
 $$

从而, 得到

$$
    \chi(p)\tau \equiv \chi(-1)^{\frac{p-1}{2}}r^{\frac{p-1}{2}}\tau \equiv \chi(-1)^{\frac{p-1}{2}}\left(\dfrac{r}{p}\right)\tau \pmod{pR}.
$$

我们有$\tau\cdot\overline{\tau} = r$, 故

$$
    \chi(p)r \equiv \chi(-1)^{\frac{p-1}{2}}\left(\dfrac{r}{p}\right)r \pmod{pR}.
$$

注意 $pR \cap \mathbb{Z} = p\mathbb{Z}$ 且上式两边都是整数, 我们有

$$
    \chi(p)r \equiv \chi(-1)^{\frac{p-1}{2}}\left(\dfrac{r}{p}\right)r \pmod {p}.
$$

结合 $r$ 和 $p$ 互素, 我们得到 $\chi(p) \equiv \chi(-1)^{(p-1) /2}\left(\dfrac{r}{p}\right) \pmod {p}$. 同余式两边取值 $\pm 1$ 而 $p > 2$, 故 $\chi(p) = \chi(-1)^{(p-1) /2}\left(\dfrac{r}{p}\right)$. 证完.

注: $pR \cap \mathbb{Z} = p\mathbb{Z}$ 的原因是: 有 $p\mathbb{Z} \subset pR \cap \mathbb{Z} \subset \mathbb{Z}$, 而 $pR \cap \mathbb{Z}$ 是 $\mathbb{Z}$ 的理想, $p\mathbb{Z}$ 是 $\mathbb{Z}$ 的极大理想, 我们有 $pR\mathbb{Z} \cap \mathbb{Z} = p\mathbb{Z}$ 或 $\mathbb{Z}$. 若 $pR \cap \mathbb{Z} = \mathbb{Z}$ 则 $1 \in pR$, 导致 $1/ p \in R$, 导致 $1 /p$ 是代数整数,矛盾.

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

 现在, 设 $\xi$ 是模 $t$ 的非本原的特征标, 存在 $s = 1$ 或 $s \mid \xi$ 使得 $\xi$ 在 $\mathrm{Hom}((\mathbb{Z} /s\mathbb{Z})^\times ,\mathbb{C}^\times ) \to \mathrm{Hom}((\mathbb{Z} /t\mathbb{Z})^\times ,\mathbb{C}^\times)$ 的像中(若 $s = 1$, 令 $\xi$ 是平凡的特征标 $1$). 存在最小的 $s$, 使得 $\xi = \chi\pi$, 其中 $\pi$ 是投射, $\chi$ 是模 $s$ 的特征标, 易见 $\chi$ 是本原的(否则与 $s$ 最小矛盾) 且 $\chi$ 是唯一的 (因为 $0 \to \mathrm{Hom}((\mathbb{Z} /s\mathbb{Z})^\times ,\mathbb{C}^\times ) \to \mathrm{Hom}((\mathbb{Z} /t\mathbb{Z})^\times ,\mathbb{C}^\times)$ 正合). 称 $\chi$ 为与 $\xi$ 相联的本原特征标(the prime character associated with $\xi$). 称 $s$ 为 $\xi$ 的 conductor.



## 参考资料

[1] Goro Shimura, *Arithmetic of Quadratic Forms*, Springer-Verlag, Springer Monographs in Mathematics, 2010.
