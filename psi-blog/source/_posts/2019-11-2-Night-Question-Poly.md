---
title: 证明 $x^6+x^3+1$ 在 $\mathbb{F}_2$ 上不可约
tags: Math Algebra
---

方法一:

令 $g(x) = x^2+x+1$, $f(x)=x^6+x^3+1 = g(x^3)$. 熟知 $g(x)$ 在 $\mathbb{F}_2$ 上不可约. 设 $\alpha$ 是 $g(x)$ 的一根. 令 $F_1 = \mathbb{F}_2(\alpha)$. 有 $[F_1:\mathbb{F}_2] = 2$. 在 $F_1$ 上, $x^3-\alpha$ 无根, 从而 $x^3-\alpha$ 在 $F_1$ 上不可约. 令 $\beta$ 是 $x^3-\alpha$ 的一根, 取 $F_2 =F_1(\beta)=\mathbb{F}_2(\alpha,\beta)=\mathbb{F}_2(\beta)$. 则 $\beta$ 是 $f(x)$ 的一根, 且 $[F_2:\mathbb{F}_2] = 6$. 故 $\beta$ 在 $\mathbb{F}_2$ 上的极小多项式次数为 $6$, 故 $f(x)$ 不可约.

方法二:

$x^6+x^3+1 = \frac{x^9-1}{x^3-1} \in \mathbb{F}_2[x]$ 无重根. 设 $\alpha$ 是它的一个根, 则 $\alpha^9 = 1$. 设 $F = \mathbb{F}_2(\alpha)$, 易知 $\alpha$ 在 $F^*$ 中的阶是 $9$. 故 $9 \mid  \mid F \mid -1$. 设 $F=2^k$, 有 $k \le 6$, 结合 $9 \mid 2^k-1$ 知道 $k=6$, 故 $[F:\mathbb{F}_2] = 6$, 这直接导致 $x^6+x^3+1$ 在 $\mathbb{F}_2$ 上不可约.
