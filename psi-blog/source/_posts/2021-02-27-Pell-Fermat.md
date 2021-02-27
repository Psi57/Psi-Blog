---
title: Pell-Fermat 方程
date: 2021-02-27 22:28:06
tags: Math Algebra Number-Theory
---

记录记录代数数论和 Pell-Fermat 方程的内容.

设正整数 $D$ 不是完全平方, 考虑 $x^2-Dy^2=\pm 1$ 的整数解, 即求 $B=\mathbb{Z}[\sqrt{D}]$ 的单位.

记 $D=n^2d$, 其中 $d \ne 1$ 没有平方因子, 则 $\mathbb{Q}(\sqrt{D})=\mathbb{Q}(\sqrt{d})$, 记作 $K$. 已经知道 $K$ 的代数整数环为

$$
A=\begin{cases}
\mathbb{Z}[\sqrt{d}], & d\equiv 2,3\pmod{4},\\
\mathbb{Z}\left[ \frac{1+\sqrt{d}}{2} \right], & d\equiv 1\pmod {4}.
\end{cases}
$$

由 Dirichlet 单位定理, 我们知道 $A$ 的单位群同构于 $\{\pm 1\}\times \mathbb{Z}$. 设 $\alpha \in A^*$ 生成 $A$ 的正单位. 我们想要把 $A$ 的单位群的结构用在 $\mathbb{Z}[\sqrt{D}]$ 上.

**引理.** 设 $a$ 是代数整数. 设 $n$ 是正整数. 设 $u$ 是 $\mathbb{Z}[a]$ 的单位. 则存在 $m>0$, 使得 $u^m \in \mathbb{Z}[na]$.

证明. 设 $a$ 在 $\mathbb{Q}$ 上(同时也是 $\mathbb{Z}$ 上)的极小多项式为 $f(x)$, $f(x)$ 首一. 我们有

$$
    \mathbb{Z}[a]/n^k\mathbb{Z}[a] \cong (\mathbb{Z}/n^k\mathbb{Z})[x]/(\overline{f(x)}).
$$

其中 $\overline{f(x)}$ 为 $f(x)$ 在 $(\mathbb{Z} /n^k\mathbb{Z})[x]$ 中的像. 它是有限环, 故其单位群是有限群. 考虑 $u$ 在此商环中的像 $\overline{u}$ 依然是单位, 存在 $m > 0$ 使得 $\overline{u}^m = \overline{1}$, 即 $u^m \in 1+n^k\mathbb{Z}[a] \subset \mathbb{Z}[na]$.

注意到 $\sqrt{D} = n\sqrt{d}$ 和 $\mathbb{Z}[\sqrt{d}] = \mathbb{Z}[2\cdot \frac{1+\sqrt{d}}{2}]$. 无论 $d \pmod{4}$ 是何值, 都有 $m > 0$ 使得 $1\ne \alpha^m \in \mathbb{Z}[\sqrt{D}]$. 显然 $\alpha^m$ 是 $\mathbb{Z}[\sqrt{D}]$ 的单位, 故 $B^*\cap \langle\alpha\rangle$ 非平凡, 从而同构于 $\mathbb{Z}$. 再考虑 $B^*$ 是 $A^* =\{\pm 1\}\times\mathbb{Z}$ 的子群且 $-1 \in B^*$, 我们有 $B^* = \{\pm 1\}\times B^*\cap \langle\alpha\rangle \cong \{\pm 1\}\times \mathbb{Z}$. 也就是存在 $\beta \in B^*$ 使得 $B^*$ 的元素都有形式 $\pm \beta^n$.

一些代数数论和 Pell 方程的内容可以看 Pierre Samuel, Algebraic Theory of Numbers, Chapter IV, 6.
