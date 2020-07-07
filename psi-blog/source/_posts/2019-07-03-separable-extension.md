---
title: 可分扩张
tags: Math Algebra 伽罗瓦理论
---
<!--
<meta http-equiv="content-type" content="text/html; charset=utf-8">
 <script type="text/x-mathjax-config">
 MathJax.Hub.Config({
   config: ["MMLorHTML.js"],
  jax: ["input/TeX", "output/HTML-CSS", "output/NativeMML"],
  extensions: ["MathMenu.js", "MathZoom.js"],
  TeX: {
    extensions: ["AMSmath.js", "AMSsymbols.js"],
    equationNumbers: {autoNumber: "AMS"}
  }
});
</script>
<script type="text/javascript" src="/usr/share/mathjax/MathJax.js"></script></head>
-->
<!-- vim-markdown-toc GFM -->

* [定义](#定义)
    * [例子](#例子)
* [完全域](#完全域)
* [可分扩张的性质](#可分扩张的性质)

<!-- vim-markdown-toc -->

# 定义
设 $E/F$ 是代数扩张, $a \in E$. 如果 $a$ 在 $F$ 上的极小多项式无重根, 则称 $a$ 是 $F$ 上的**可分元**, 或称 $a$ 在 $F$ 上**可分**. 如果 $E$ 中任一元素在 $F$ 上均可分, 则称 $E$ 是 $F$ 的**可分扩张**, 否则称为**不可分扩张**.
{:.success}

## 例子
例如, $\mathbb{Q}$ 上不可约多项式均无重根, 从而任一代数扩张 $E/\mathbb{Q}$ 均为可分扩张.
<!--more-->

例如, 记 $F$ 是特征为 $p$ 的域, $p$ 为素数.  当 $x^p - a$ 的根 $b \notin F$ 时, $x^p-a$ 是 $F$ 上不可约多项式且有重根. 这是因为: 设 $E$ 是 $x^p-a$ 在 $F$ 上的分裂域, $b \in E$. 于是在 $E[x]$ 中 $x^p-a = (x-b)^p$ ($E$ 特征为 $p$). 若

$$x^p - a = f(x)g(x), f,g \in F[x], \deg f \ge 1,\deg g \ge 1,$$

则 $f(x) = (x-b)^k, 1 \le k \le p-1$, 有 $(k,p) = 1$. 存在整数 $u,v$ 使 $uk + vp = 1$. 由 $f(x) \in F[x]$, $f(x)$ 的常数项 $(-b)^k \in F$, 从而 $b^k \in F$. 结合 $b^p = a \in F$ 知 $b = b^{uk + vp} \in F$. 矛盾.

于是 $x^p - a$ 在 $F[x]$ 上不可约. 它的形式微商为 $px^{p-1} = 0$, $(x^p - a,0) \ne 1$, 从而它有重根.

现在, 设 $t$ 是 $F$ 上的超越元, 记 $E = F(t^p)$, $K = F(t)$, 则扩张 $K/E$ 是代数扩张, 但不是可分扩张.

# 完全域
域 $F$ 叫**完全域**, 是指 $F[x]$ 中每个不可约多项式均可分. 这也相当于 $F[x]$ 中每个不可约多项式均无重根.
{:.success}

特征为零的域均为完全域, 而对于特征为 $p$ 的域来说:

**引理** 设域 $F$ 的特征为素数 $p$, 令 $F^p = \{a^p \mid a \in F\}$, 则 $F$ 为完全域当且仅当 $F = F^p$.
{:.info}

**证明** $\Rightarrow$: 如果 $F \ne F^p$, 存在 $a \in F-F^p$. 则 $x^p - a$ 在 $F[x]$ 上不可约且有重根, 这导致 $F$ 不是完全域.

$\Leftarrow$: 若 $F$ 不是完全域, 取 $F[x]$ 中不可分的不可约多项式 $f(x)$, $f(x)$ 有重根, 从而 $f(x) = g(x^p)$, $g(x) \in F[x]$. 记 $f(x) = a_0 + a_1x^p + \cdots + a_nx^{np}$. 下面证明存在 $a_i \notin F^p$, 从而 $F \ne F^p$. 否则, 任意 $a_i(i = 1,2,\cdots ,n)$, 存在 $b_i \in F$ 使 $a_i = b_i^p$. 于是 $f(x) = b_0^p + b_1^px^p + \cdots + b_n^px^{np} = (b_0 + \cdots + b_nx^n)^p$, 与 $f(x)$ 在 $F[x]$ 上不可约矛盾, 故存在 $a_i \notin F^p$, 于是 $F \ne F^p$.
<p align="right">$\blacksquare$</p>

**系** 有限域均为完全域.
{:.info}

设 $F$ 的阶为 $p^n$, 记 $\sigma: F \rightarrow F^p, a \mapsto a^p$, 则 $\sigma$ 是域的非零满同态, 因此是同构. 有 $\mid F\mid = \mid F^p\mid < \infty$, 而 $F^p \subseteq F$, 因此 $F = F^p$.

于是, 不可分的代数扩张 $E/F$ 需要在特征不为零的无限域 $F$ 上寻找.

# 可分扩张的性质
**定理** 有限可分扩张一定是单扩张.
{:.info}

**证明** 记 $E/F$ 为有限可分扩张, 若 $F$ 是有限域, 则 $E$ 是 $F$ 的有限代数扩张, $E$ 也为有限域. 于是 $E/F$ 必为单扩张 (有限域的结构). 下设 $F$ 是无限域.

记 $E/F$ 为有限可分扩张, $E = F(\alpha_1,\cdots,\alpha_n)$. 先证 $n=2$ 的情况, 然后对 $n$ 归纳即可.

当 $n = 2$ 时, 记 $E = F(\alpha,\beta)$. 记 $\alpha,\beta$ 在 $F$ 上的极小多项式分别为 $f(x),g(x)$,令 $K$ 是 $f(x)g(x)$ 在 $E$ 上的分裂域, 在 $K[x]$ 中

$$f(x) = \prod_{i=1}^{r}(x-\alpha_i), \alpha_1 = \alpha, \alpha_i\in K,$$

$$g(x) = \prod_{i=1}^{s}(x-\beta_i), \beta_1 = \beta, \beta_i\in K.$$

因 $E/F$ 是可分扩张, 故 $\alpha_1,\cdots,\alpha_r$ 两两不同, $\beta_1,\cdots,\beta_s$ 两两不同, 我们的目的是找到 $r \in E$ 使得 $E = F(r)$. 这可以在 $\alpha + x \beta,x \in F$ 中寻找. 由 $F$ 无限, 存在 $c \in F$ 使 $\alpha + c\beta \ne \alpha_i + c\beta_j, \forall i = 1,2,\cdots , r,j = 2,\cdots ,s$. 记 $r = \alpha + c\beta$, 有 $r \in E$, 从而 $F(r) \subseteq E$. $f(r - cx) \in F(r)[x]$ 和 $g(x)$ 有公共根 $\beta$. 由 $c$ 的取法知它们只有唯一的公共根, 于是它们的最大公因子就是 $x - \beta$. 这说明 $\beta \in F(r)$, 继而 $\alpha = r - c\beta \in F(r)$. 故 $E \subseteq F(r)$, 从而 $E = F(r)$.
<p align="right">$\blacksquare$</p>

特征为零的域均为完全域, 从而其代数扩张均为可分扩张. 而对于特征为素数 $p$ 的域, 我们有

**引理** 设有域扩张 $K/F,\mathrm{char} F = p$. $\alpha \in K$, 则 $\alpha$ 在 $F$ 上可分当且仅当 $F(\alpha) = F(\alpha^p)$.
{:.info}

**证明** 若 $\alpha$ 在 $F$ 上可分, 只需证明 $\alpha \in F(\alpha^p)$, 从而 $F(\alpha) = F(\alpha^p)$. 否则, 若 $\alpha \notin F(\alpha^p)$, 则 $\alpha$ 在 $F(\alpha^p)$ 上的极小多项式是 $x^p - \alpha^p$. 它有重根. $\alpha$ 在 $F$ 上的极小多项式被 $x^p - \alpha^p$ 整除, 从而也有重根, 与 $\alpha$ 在 $F$ 上可分矛盾.

若 $F(\alpha) = F(\alpha^p)$, 记 $\alpha$ 在 $F$ 上的极小多项式为 $f(x)$. 若 $f(x)$ 有重根, 则存在 $g(x) \in F[x]$ 使 $f(x) = g(x^p)$. $f(x)$ 不可约, 从而 $g(x)$ 不可约. $g(x)$
是 $\alpha^p$ 在 $F$ 上的极小多项式. 从而

$$[F(\alpha^p) : F] = \deg g(x) < \deg f(x) = [F(\alpha) : F]$$

但是 $F(\alpha^p) = F(\alpha)$, 矛盾!
<p align="right">$\blacksquare$</p>

**引理** 设 $\alpha$ 在 $F$ 上可分, $\beta$ 在 $F(\alpha)$ 上可分, 则 $\beta$ 在 $F$ 上可分.
{:.info}

**证明** 特征为零的域均为完全域, 不妨设 $\mathrm{char} F = p$. 只需证明 $F(\beta) = F(\beta^p)$. $\beta$ 在 $F(\alpha)$ 上可分, 有 $F(\alpha,\beta) = F(\alpha,\beta^p)$. 如果证明了

$$[F(\alpha,\beta) : F(\beta)] = [F(\alpha,\beta^p) : F(\beta^p)],$$

则由

$$
\begin{split}
[F(\alpha,\beta) : F] &= [F(\alpha,\beta) : F(\beta)][F(\beta) : F], \\
[F(\alpha,\beta^p) : F] &= [F(\alpha,\beta^p) : F(\beta^p)][F(\beta^p) : F],
\end{split}
$$

知 $[F(\beta) : F] = [F(\beta^p) : F]$, 从而 $F(\beta) = F(\beta^p)$. 下证$[F(\alpha,\beta) : F(\beta)] = [F(\alpha,\beta^p) : F(\beta^p)]$.

记 $\alpha$ 在 $F(\beta)$ 上的极小多项式为 $f(x)$, 在 $F(\beta^p)$ 的极小多项式为 $g(x)$, 则 $f(x) \mid g(x)$. 又 $f^p(x) \in F(\beta^p)[x]$ 且 $f^p(\alpha) = 0$, 有 $g(x) \mid f^p(x)$, 从而 $g(x) = f^k(x)$,$k = 1,2,\cdots,p$. $\alpha$ 在 $F$ 上可分, 从而在 $F(\beta^p)$ 上可分, 故 $k = 1$, $g(x) = f(x)$. 从而

$$[F(\alpha,\beta) : F(\beta)] = \deg f(x) = \deg g(x) = [F(\alpha,\beta^p) : F(\beta^p)]$$

<p align="right">$\blacksquare$</p>

现在可以得到:

**定理** 设 $E/F$ 为代数扩张, $S$ 是 $E$ 的子集. 则 $F(S)/F$ 是可分扩张当且仅当 $S$ 中的元在 $F$ 上都是可分的.
{:.info}

**证明** 若 $F(S)/F$ 是可分扩张, 由 $S \subseteq F(S)$, $S$ 中的每一元必在 $F$ 上可分.  
若 $S$ 中的元在 $F$ 上均可分, 设 $\alpha \in F(S)$, 存在 $u_1,u_2,\cdots ,u_m \in S$, 使 $\alpha \in F(u_1,\cdots ,u_m)$. $u_m$ 在 $F(u_1,\cdots ,u_{m-1})$ 上可分, $\alpha$ 在 $F(u_1,\cdots ,u_{m-1})(u_m)$ 上可分, 故 $\alpha$ 在 $F(u_1,\cdots ,u_{m-1})$ 上可分. 重复这个步骤, 最后可以得到 $\alpha$ 在 $F$ 上可分.
<p align="right">$\blacksquare$</p>

**推论** (1) 若 $\alpha,\beta$ 在 $F$ 上可分, 则 $\alpha \pm \beta$,$\alpha\beta$,$\frac{\alpha}{\beta}(\beta \ne 0)$ 在 $F$ 上均可分.  
(2) $F$ 上可分多项式在 $F$ 上的分裂域在 $F$ 上可分.
{:.info}

**定理** 若 $E/K$ 和 $K/F$ 均为可分扩张, 则 $E/F$ 也为可分扩张. 反之亦然.
{:.info}

**证明** 若 $E/K$,$K/F$ 均为可分扩张, 设 $\alpha \in E$, 则 $\alpha$ 在 $K$ 上代数. 设 $\alpha$ 在 $K$ 上的极小多项式为 $f(x) = a_0 + \cdots + a_{n-1}x^{n-1} + x^n$, 则 $\alpha$ 在 $F(a_0,\cdots ,a_{n-1})$ 上可分. 由 $K/F$ 为可分扩张, 知 $a_0,\cdots ,a_{n-1}$ 在 $F$ 上均可分, 特别地, $a_{n-1}$ 在 $F(a_0,\cdots ,a_{n-2})$ 上可分, 于是 $\alpha$ 在 $F(a_0,\cdots ,a_{n-2})$ 上可分. 重复这个步骤, 最后可以得到 $\alpha$ 在 $F$ 上可分.  
反之, 设 $E/F$ 为可分扩张, 则因 $K \subseteq E$ 得 $K/F$ 为可分扩张. 任意 $\alpha \in E$, 记 $\alpha$ 在 $K$ 上的极小多项式为 $f(x)$, 在 $F$ 上的极小多项式为 $g(x)$, 则 $f(x) \mid g(x)$. $g(x)$ 没有重根, 从而 $f(x)$ 也没有重根, 即 $\alpha$ 在 $K$ 上可分, 于是 $E/K$ 为可分扩张.
<p align="right">$\blacksquare$</p>
