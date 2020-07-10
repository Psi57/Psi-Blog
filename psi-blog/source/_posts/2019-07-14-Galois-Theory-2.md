---
title:  伽罗瓦理论基本定理
tags: Math Algebra 伽罗瓦理论
---

<!-- vim-markdown-toc GFM -->

* [伽罗瓦理论基本定理](#伽罗瓦理论基本定理)
    * [伽罗瓦对应的一个例子](#伽罗瓦对应的一个例子)
    * [代数基本定理](#代数基本定理)
    * [一些例题](#一些例题)

<!-- vim-markdown-toc -->

# 伽罗瓦理论基本定理

伽罗瓦理论基本定理是说: 对于有限伽罗瓦扩张, 伽罗瓦对应是反序的一一对应, 且保持共轭性.
<!--more-->
设 $E/F$ 是有限伽罗瓦扩张, $G  =\mathrm{Gal}(E/F)$. 令 

$$
\Omega = \{E/F 的中间域\}, \Gamma = \{G 的子群\}.
$$

有伽罗瓦对应:

$$
\mathrm{Gal}(E/-): \Omega \rightarrow \Gamma, \mathrm{Gal}(E/-)M = \mathrm{Gal}(E/M),\\
\mathrm{Inv}: \Gamma \rightarrow \Omega, \mathrm{Inv}(H) = \{a \in E \mid \sigma(a) = a,\forall \sigma \in H\}.
$$

由定义, 对任意中间域 $M \in \Omega$, $E/M$ 也是有限伽罗瓦扩张. 于是

$$
[E:M] = \mid \mathrm{Gal}(E/M)\mid, [M:F] = [E :  F]/[E:M] = \frac{\mid G\mid}{\mid\mathrm{Gal}(E/M)\mid}.
$$

对 $M,M' \in \Omega$, 如果存在 $\sigma \in G$ 使得 $M' = \sigma(M)$, 则称 $M,M'$ 是 **共轭** 的. 由 $G$ 是群, 知共轭是 $\Omega$ 上的等价关系.

**定理** (**伽罗瓦理论基本定理**) 设 $E/F$ 是有限伽罗瓦扩张, $\mathrm{Gal}(E/-)$,$\mathrm{Inv}$,$\Omega$ 和 $\Gamma$ 的定义同上, 则  
$\mathrm{(i)}$: $\mathrm{Gal}(E/-)$ 和 $\mathrm{Inv}$ 是互逆反序的映射, 既:  
$\mathrm{Inv}(\mathrm{Gal}(E/M)) = M$, $\mathrm{Gal}(E/\mathrm{Inv}(H)) = H$, $\forall M\in \Omega,H \in \Gamma$.  
$\mathrm{(ii)}$: $G$ 的子群 $H$ 和 $H'$ 共轭, 当且仅当 $\mathrm{Inv}(H)$ 和 $\mathrm{Inv}(H')$ 是共轭的. $G$ 的子群 $H$ 是正规子群当且仅当 $\mathrm{Inv}(H)/F$ 是正规扩张. 在这种情况下, 有 $\mathrm{Gal}(\mathrm{Inv}(H)/F) \cong G/H$.
{:.info}

利用 $\mathrm{(i)}$ 将 $\mathrm{(ii)}$ 的话倒过来说, 就得到:

$\mathrm{(ii')}$: $E/F$ 的中间域 $M$ 和 $M'$ 共轭当且仅当 $\mathrm{Gal}(E/M)$ 和 $\mathrm{Gal}(E/M')$ 是共轭的.  
设 $M \in \Omega$. 则 $M/F$ 是正规扩张当且仅当 $\mathrm{Gal}(E/M)$ 是 $G$ 的正规子群. 在这种情况下, 有 $\mathrm{Gal}(M/F) \cong \mathrm{Gal}(E/F) /\mathrm{Gal}(E/M)$.
{:.info}

**证明** $\mathrm{(i)}$ $\forall M \in \Omega$, $E/M$ 是有限伽罗瓦扩张, 从而 $\mathrm{Inv}(\mathrm{Gal}(E/M)) = M$. 任意 $H \in \Gamma$,  由阿廷定理, $E/\mathrm{Inv}(H)$ 是有限伽罗瓦扩张, 且 $\mathrm{Gal}(E/\mathrm{Inv}(H)) = H$.

由 $\mathrm{(i)}$, $\sigma \in G$ 使 $H' = \sigma H\sigma^{-1}$  当且仅当 $\mathrm{Inv}(\sigma H\sigma^{-1}) = \mathrm{Inv}(H')$, 其中

$$
\begin{split}
\mathrm{Inv}(\sigma H\sigma^{-1}) &= \{a \in E\mid \sigma\pi\sigma^{-1}(a) = a ,\forall \pi \in H\} \\
&= \{a \in E \mid \pi\sigma^{-1}(a) = \sigma^{-1}(a),\forall \pi \in H\} \\
&= \{a \in E \mid \sigma^{-1}(a) \in \mathrm{Inv}(H)\} = \sigma(\mathrm{Inv}(H)).
\end{split}
$$

这说明 $\mathrm{Inv}(\sigma H\sigma^{-1}) = \mathrm{Inv}(H')$ 当且仅当 $\sigma(\mathrm{Inv}(H)) = \mathrm{Inv}(H')$. 故 $H$ 和 $H'$ 共轭当且仅当 $\mathrm{Inv}(H)$ 和 $\mathrm{Inv}(H')$ 共轭.

这也说明 $H$ 是 $G$ 的正规子群当且仅当 $\mathrm{Inv(H)}/F$ 是正规扩张 (见[正规扩张](https://wuxiangdong.github.io/2019/07/06/normal-extension.html#%E6%9C%89%E9%99%90%E6%AD%A3%E8%A7%84%E6%89%A9%E5%BC%A0%E7%9A%84%E5%88%BB%E7%94%BB)的例). 这个情况下有 $\sigma(\mathrm{Inv}(H)) = \mathrm{Inv(H)},\forall \sigma \in G$, 于是可以记

$$
\pi: G \rightarrow \mathrm{Gal}(\mathrm{Inv}(H)/F), \sigma \mapsto \sigma\mid_{\mathrm{Inv}(H)}.
$$

则 $\pi$ 是同态, 且

$$\ker \pi = \{\sigma\in G \mid \sigma(a) = a,\forall a \in \mathrm{Inv}(H)\} = \mathrm{Gal}(E/\mathrm{Inv}(H)) = H.$$

故 $\pi$ 诱导出单同态 $G/H \rightarrow \mathrm{Gal}(\mathrm{Inv}(H)/F)$.  又

$$
\begin{split}
|G/H| &= |G|/|H| = [E:F]/[E:\mathrm{Inv(H)}] \\
&= [\mathrm{Inv}(H):F] = |\mathrm{Gal(\mathrm{Inv}(H)/F)}|.
\end{split}
$$ 

故上述单同态是同构, 从而 $\mathrm{Gal(\mathrm{Inv(H)}/F)} \cong G/H$.
<p align="right">$\blacksquare$</p>

伽罗瓦理论基本定理在群和域之间建立了优美的一一对应关系. 利用这种对应, 我们可以将许多域的问题转换为有限群的问题并得到解决. 下面的例子和习题大部分都是将域的问题化归为群的问题, 利用群论的工具加以解决.

## 伽罗瓦对应的一个例子

下面以 $\mathbb{Q}\left(\sqrt[3]{3}, \omega\right)/\mathbb{Q}$ 为例, 展示伽罗瓦对应. 其中 $\omega = e^{\frac{2\pi i}{3}}$.

记 $E = \mathbb{Q}\left(\sqrt[3]{3}, \omega\right)$. $E$ 是 $x^3-3$ 在 $\mathbb{Q}$ 上的分裂域, 且 $[E :\mathbb{Q}] = 6$. 于是 $G = \mathrm{Gal}(E /\mathbb{Q})$ 是 $6$ 阶群, 它的元素必将 $x^3 - 3$ 的根变到 $x^3 - 3$ 的根, 也必将 $x^2 + x + 1$ 的根变到 $x^2+x+1$ 的根. 因此 $G$ 的 $6$ 个元为:


$$
\begin{split}
\sigma_1 &= \mathrm{Id};\\ 
\sigma_{2}&: \sqrt[3]{3} \mapsto \sqrt[3]{3}\omega, \omega \mapsto \omega; \\
\sigma_3&: \sqrt[3]{3} \mapsto \sqrt[3]{3}\omega^2, \omega \mapsto \omega;\\
\sigma_4&: \sqrt[3]{3} \mapsto \sqrt[3]{3}, \omega \mapsto \omega^2; \\
\sigma_5&: \sqrt[3]{3} \mapsto \sqrt[3]{3}\omega, \omega \mapsto \omega^2;\\
\sigma_6&: \sqrt[3]{3} \mapsto \sqrt[3]{3}\omega^2, \omega \mapsto \omega^2.
\end{split}
$$

则 $\sigma_2$ 是 $3$ 阶元, $\sigma_4$ 是 $2$ 阶元, 且 $\sigma_4\sigma_2\sigma_4^{-1} = \sigma_2^{-1}$, $\sigma_4,\sigma_2$ 生成 $G$. 故 $G \cong D_3 \cong S_3$.

将 $x^3 - 3$ 的 $3$ 个根记为 $r_1 = \sqrt[3]{3}$, $r_2 = \sqrt[3]{3}\omega$, $r_3 = \sqrt[3]{3}\omega^2$. 则将 $G$ 作用于 $\{r_1,r_2 ,r_3\}$, 得到一个同态 $G \rightarrow S_3$. 这个群同态是单射, 可知这个同态是同构. 在这个意义下, $G$ 等同于

$$\begin{split}
S_3 = \{
    &\sigma_1 = (1),\sigma_2 = (123),\sigma_3 = (132),\\
    &\sigma_4 = (23),\sigma_5 = (12),\sigma_6 = (13)
\}.
\end{split}$$

其中 $(13)$ 表示 $(r_1r_3)$, 诸如此类. $S_3$ 的全部子群为

$$\begin{split}
A_3 &= \{(1),(123),(132)\}, \\
H_1 &= \{(1),(12)\},\\
H_2 &= \{(1),(13)\},\\
H_3 &= \{(1),(23)\}.
\end{split}$$

其中 $A_3 \triangleleft S_3$, 而 $H_1,H_2,H_3$ 是一个共轭类. 我们首先计算 $\mathrm{Inv}(H_1)$. $E$ 的一组 $\mathbb{Q}$-基为 $1,\sqrt[3]{3},\sqrt[3]{6},\omega,\sqrt[3]{3}\omega,\sqrt[3]{6}\omega$. 记 $\alpha \in \mathrm{Inv}(H_1)$, 设

$$
\alpha = a_1+ a_2\sqrt[3]{3}+ a_3\sqrt[3]{6}+ a_4\omega+ a_5\sqrt[3]{3}\omega+ a_6\sqrt[3]{6}\omega, \\
$$

其中 $a_1,a_2,a_3,a_4,a_6,a_6 \in \mathbb{Q}$. 则

$$
\sigma_5(\alpha) = a_1-a_4 + a_5\sqrt[3]{3} - a_3\sqrt[3]{6} -a_4\omega + a_2\sqrt[3]{3}\omega + (a_6-a_3)\sqrt[3]{6}\omega.
$$

比较系数, 得 $a_3 = a_4 = 0,a_2 = a_5$. 故 $\alpha = a_1 + a_2\sqrt[3]{3} + a_2\sqrt[3]{3}\omega + a_6\sqrt[3]{6}\omega = a_1 - a_2\sqrt[3]{3}\omega^2 + a_6\sqrt[3]{6}\omega$. 这说明 $\alpha \in \mathrm{Inv}(H_1)$ 当且仅当 $\alpha \in \mathbb{Q}(\sqrt[3]{3}\omega^2)$. 故 $\mathrm{Inv}(H_1) = \mathbb{Q}(\sqrt[3]{3}\omega^2)$. 由 $\sigma_6 = \sigma_4\sigma_5\sigma_4^{-1}$, 知 $H_2 = \sigma_4 H_1 \sigma_4^{-1}$. 故 $\mathrm{Inv}(H_2) = \sigma_4(\mathrm{Inv}(H_1)) = \mathbb{Q}(\sqrt[3]{3}\omega)$. 同理, 由 $H_3 = \sigma_6H_1 \sigma_6^{-1}$ 知 $\mathrm{Inv}(H_3) = \sigma_6(\mathrm{Inv}(H_1)) = \mathbb{Q}(\sqrt[3]{3})$.

下面决定 $\mathrm{Inv}(A_3)$. $S_3$ 的 $3$ 阶子群只有 $A_3$. 故满足 $M/\mathbb{Q}$ 是 $2$ 次扩张的中间域 $M$ 一定是 $\mathrm{Inv}(A_3)$. 考虑 $\mathbb{Q}(\omega)/\mathbb{Q}$, $\omega$ 在 $\mathbb{Q}$ 上的极小多项式是 $2$ 次的, 故 $[\mathbb{Q}(\omega) : \mathbb{Q}] = 2$, 从而 $\mathrm{Inv}(A_3) = \mathbb{Q}(\omega)$.

我们得到

<img src="Galois-Theory-2.svg" width="90%" height="90%">

## 代数基本定理
作为伽罗瓦理论基本定理的一个应用, 我们证明代数基本定理. 代数基本定理指出 $\mathbb{C}[x]$ 中任意多项式在 $\mathbb{C}$ 中均有根. 即

**定理** (**代数基本定理**) 复数域 $\mathbb{C}$ 是代数闭域.
{:.info}

**证明** 设 $f(x) \in \mathbb{C}[x]$, $E$ 是其在 $\mathbb{C}$ 上的分裂域. 则 $E/\mathbb{C}$ 是有限扩张, $E/\mathbb{R}$ 也是有限扩张. 记 $E = \mathbb{R}(a_1,a_2,\cdots a_n)$. 其中 $a_1,a_2,\cdots a_n$ 在 $\mathbb{R}$ 上代数. 记 $a_i$ 在 $\mathbb{R}$ 上的极小多项式为 $g_i(x)$, $N$ 是 $g(x)=g_1(x)g_2(x)\cdots g_n(x)$ 在 $\mathbb{R}$ 上的分裂域. 则 $\mathbb{C} \subseteq E \subseteq N$. $N/\mathbb{R}$ 和 $N/\mathbb{C}$ 都是有限伽罗瓦扩张. 下证 $N = \mathbb{C}$  (等价的, $\mid\mathrm{Gal}(N/\mathbb{C})\mid = 1$), 从而 $E = \mathbb{C}$, $f(x)$ 的根均在 $\mathbb{C}$ 中.

(反证) 若不然. 记 $G =\mathrm{Gal}(N/\mathbb{R})$. 则 

$$\mid G\mid = [N : \mathbb{R}] = [N:\mathbb{C}][\mathbb{C}:\mathbb{R}] = 2[N: \mathbb{C}].$$

这说明 $\mid G\mid$ 含素因子 $2$. 设 $H$ 是 $G$ 的 Sylow-2 子群. 对 $N/\mathbb{R}$ 使用伽罗瓦理论基本定理. $ L = \mathrm{Inv}(H) $ . 则 $[L:\mathbb{R}] = [G:H]$ 是奇数. 而 $L/\mathbb{R}$ 是有限可分扩张, 从而是单扩张. 记 $L = \mathbb{R}(b)$, 其中 $b$ 在 $\mathbb{R}$ 上的极小多项式的次数为奇数. 实数域上奇次多项式必有实根. 因此 $[L:\mathbb{R}] = 1$, 从而 $G = H$. 这说明 $G$ 是 $2$-群. 由 $\mid\mathrm{Gal}(N/\mathbb{C})\mid \ne 1$ 知 $\mathrm{Gal}(N/\mathbb{C})$ 也是 $2$-群. 从而 $\mathrm{Gal}(N/\mathbb{C})$ 有指数为 $2$ 的极大子群 $P$ ([详见](https://wuxiangdong.github.io/2019/07/11/some-about-group.html)). 现在对 $N/\mathbb{C}$ 使用伽罗瓦理论基本定理. 设 $M= \mathrm{Inv}({P})$. 则

$$
[M:\mathbb{C}] = [\mathrm{Gal}(N/\mathbb{C}): P] = 2.
$$

但复数域无 $2$ 次扩张([习题](https://wuxiangdong.github.io/2019/07/07/Galois-Theory-1.html#%E4%B8%80%E4%BA%9B%E4%B9%A0%E9%A2%98)), 矛盾!
<p align="right">$\blacksquare$</p>

## 一些例题

**例** 设 $N$ 和 $M$ 均是有限伽罗瓦扩张 $E/F$ 的中间域, 且 $N$ 是 $M$ 在 $F$ 上的正规闭包. (即 $N$ 是包含 $M$ 的 $F$ 的最小正规扩域). 求证:

$$
\mathrm{Gal}(E/N) = \bigcap_{\sigma \in \mathrm{Gal}(E/F)} \sigma\mathrm{Gal}(E/M)\sigma^{-1}.
$$

{:.warning}

记 $G = \mathrm{Gal}(E/F)$, 对 $E/F$ 使用伽罗瓦理论基本定理.

记 $N' = \mathrm{Inv}\left(\bigcap_{\sigma \in G} \sigma\mathrm{Gal}(E/M)\sigma^{-1}\right)$. 由于 $\bigcap_{\sigma \in G} \sigma\mathrm{Gal}(E/M)\sigma^{-1} \triangleleft G$, 有 $N'/F$ 是正规扩张. $\bigcap_{\sigma \in G} \sigma\mathrm{Gal}(E/M)\sigma^{-1}$ 是 $\mathrm{Gal}(E/M)$ 的子群, 从而 $N' \supseteq M$.  这说明 $N \subseteq N'$. 又 $N/F$ 是正规扩张, 从而 $\mathrm{Gal}(E/N) \triangleleft G$. 而 $N \supseteq M$, 从而 $\mathrm{Gal}(E/N) \leqslant \mathrm{Gal}(E/M)$. 于是 $\mathrm{Gal}(E/N) \leqslant \bigcap_{\sigma \in G} \sigma\mathrm{Gal}(E/M)\sigma^{-1}$, 所以 $N \supseteq N'$. 这导致 $N = N'$, 即

$$
\mathrm{Gal}(E/N) = \mathrm{Gal}(E/N') = \bigcap_{\sigma \in \mathrm{Gal}(E/F)} \sigma\mathrm{Gal}(E/M)\sigma^{-1}.
$$

<p align="right">$\blacksquare$</p>

**例** 设 $\alpha$ 在 $\mathbb{Q}$ 上代数, $F$ 是 $\mathbb{Q}(\alpha)$ 的伽罗瓦闭包 (即包含 $\mathbb{Q}(\alpha)$ 的最小的 $\mathbb{Q}$ 的伽罗瓦扩张). 若 $\mid\mathrm{Gal}(F/\mathbb{Q})\mid$ 含素因子 $p$, 求证: 存在 $F/\mathbb{Q}$ 的中间域 $L$ 使 $[F : L] = p$ 且 $F = L(\alpha)$.
{:.warning}

**证明** 设 $\alpha$ 在 $\mathbb{Q}$ 上的极小多项式为 $f(x)$. 记 $f(x)$ 在 $\mathbb{Q}$ 上的分裂域为 $F'$. 一方面 $f(x)$ 的根都在 $F$ 中, 从而 $F \supseteq F'$. 另一方面 $F'/\mathbb{Q}$ 是域的伽罗瓦扩张且 $F'$ 包含 $\mathbb{Q}(\alpha)$, 从而 $F \subseteq F'$. 这导致 $F' = F$, $F$ 是 $f(x)$ 在 $\mathbb{Q}$ 上的分裂域.

记 $G = \mathrm{Gal}(F /\mathbb{Q})$, $f(x)$ 在 $\mathbb{Q}$ 上不可约, 故 $f(x)$ 的全部根恰为 $G\alpha = \{\sigma(\alpha) \mid \sigma \in G\}$. 记 $\alpha_1 = \alpha, \alpha_2, \alpha_3,\cdots ,\alpha_n$ 为 $f(x)$ 的全部根, 并记 $\alpha_i = \sigma_i(\alpha)$, $\sigma_i \in G$, $i = 1,2,\cdots ,n$.

$\mid G\mid$ 含素因子 $p$, 由 Sylow 定理, $G$ 存在 $p$ 阶元 $\pi$. $F = \mathbb{Q}(\alpha_1,\alpha_2 ,\cdots ,\alpha_n)$, 故 $\pi$ 由 $\pi(\alpha_1),\pi(\alpha_2),\cdots ,\pi(\alpha_n)$ 决定. $\pi \ne \mathrm{Id}$, 故 $\pi$ 一定变换某一个 $\alpha_i$. $\pi$ 将 $f(x)$ 的根变换到 $f(x)$ 的根, 记 $\pi(\alpha_i) = \alpha_j$, $i\ne j$. 于是 $\pi' = \sigma_i^{-1}\pi\sigma_i$ 也是 $p$ 阶元, 且 $\pi'(\alpha) = \sigma_i^{-1}(\alpha_j)$. $\alpha_i \ne \alpha_j$, 故 $\pi'(\alpha) \ne \alpha$. 这样 $\pi'$ 是 $p$ 阶元且变换 $\alpha$.

现在对 $F /\mathbb{Q}$ 使用伽罗瓦理论基本定理. 记 $H = \langle \pi' \rangle$, $L = \mathrm{Inv}(H)$. 有 $[F:L] = \mid H\mid = p$. $\pi'$ 变换 $\alpha$, 故 $\alpha \notin L$. 有

$$
p = [F:L] = [F:L(\alpha)][L(\alpha):L],
$$

其中 $[L(\alpha):L] \ne 1$, 于是只能是 $[L(\alpha):L] = p$ 和 $[F: L(\alpha)] = 1$. 这说明 $F = L(\alpha)$, 说明 $L$ 符合题意.
<p align="right">$\blacksquare$</p>

**例** 设 $E/F$ 是有限伽罗瓦扩张, $F$ 的特征不为 $2$, $\mathrm{Gal}(E/F) \cong \mathbb{Z}_2 \oplus \mathbb{Z}_2$. 则 $E = F(\sqrt{a},\sqrt{b})$. 其中 $a,b \in F$.
{:.warning}

**证明** 对 $E/F$ 使用伽罗瓦理论基本定理. $\mathbb{Z}_2 \oplus \mathbb{Z}_2$ 的全部子群为 $\{0\}, H_1 = \{0\} \oplus \mathbb{Z}_2 , H_2 = \mathbb{Z}_2 \oplus \{0\}, \mathbb{Z}_2 \oplus \mathbb{Z}_2$. 记 $M_1 = \mathrm{Inv}(H_1)$, 则 $H_1/F$ 是二次扩张, 存在 $a \in F$ 使 $H_1 = F(\sqrt{a})$ ([例题](https://wuxiangdong.github.io/2019/07/07/Galois-Theory-1.html#%E4%B8%80%E4%BA%9B%E4%B9%A0%E9%A2%98)). 同理记 $M_2 = \mathrm{Inv}(H_2)$, 则 $H_2 = F(\sqrt{b}), b\in F$. 有 $\sqrt{b} \notin F(\sqrt{a})$ (否则 $F(\sqrt{b}) \subseteq F(\sqrt{a})$, 这导致 $H_1 \leqslant H_2$), 从而 $[F(\sqrt{a},\sqrt{b}) : F(\sqrt{a})] = 2$ ($\sqrt{b}$ 在 $F(\sqrt{a})$ 上极小多项式为 $x^2 - b$). 从而 $[F(\sqrt{a},\sqrt{b}) :F] = 4 = [E:F]$. 而 $F(\sqrt{a},\sqrt{b}) \subseteq E$, 这说明 $E = F(\sqrt{a},\sqrt{b})$.
<p align="right">$\blacksquare$</p>

**例** 设 $E = \mathbb{C}(t)$ (复数域上有理函数域), $F = \mathbb{C}(t^3 + t^{-3})$. 求 $E/F$ 的全部中间域.
{:.warning}

**解** $t$ 是多项式 $x^6-(t^3+t^{-3})x^3 + 1$ 的一根,  而这个多项式的全部根为 $t,t\omega, t\omega^2 ,t^{-1}, t^{-1}\omega ,t^{-1}\omega^{2} \in \mathbb{C}(t)$, 其中 $\omega = e^{\frac{2\pi i}{3}}$. 这说明 $E$ 是 $f(x) = x^6 - (t^3+t^{-3})x^3 + 1$ 在 $F$ 上的分裂域, 从而 $E/F$ 是有限伽罗瓦扩张.  在 $\mathbb{C}(t^3)$ 中 $f(x)$ 被分解为不可约多项式的积 $(x^3-t^3)(x^{-3}-t^{-3})$. 而 $t^3, t^{-3} \notin F$. 这说明 $f(x)$ 在 $F$ 上不可约, 从而 $[E:F] = \deg f(x) = 6$, $G = \mathrm{Gal}(E/F)$ 是 $6$ 阶群. $G$ 的六个元分别为

$$
\begin{split}
\pi_1 &= \mathrm{Id}; \\
\pi_2 &:  t\mapsto t\omega; \\
\pi_3 &: t \mapsto t\omega^2; \\
\pi_4 &: t \mapsto t^{-1}; \\
\pi_5&: t \mapsto t^{-1}\omega; \\
\pi_6&: t \mapsto t^{-1}\omega^2.
\end{split}
$$

其中 $\pi_2$ 是 $3$ 阶元, $\pi_4$ 是 $2$ 阶元. 且 $\pi_2 ,\pi_4$ 生成 $G$, $\pi_4\pi_2\pi_4^{-1} = \pi_2^{-1}$. 这说明 $G \cong S_3$. 其所有真子群为

$$\begin{split}
A_3 &= \{\pi_1 ,\pi_2 ,\pi_3\}, \\
H_1 &= \{\pi_1, \pi_4\}, \\
H_2 &= \{\pi_1, \pi_5\}, \\
H_3 &= \{\pi_1,\pi_6\}.
\end{split}$$  

$S_3$ 只有一个 $3$ 阶子群, 从而 $E/F$ 只有一个中间域 $M$ 使 $M/F$ 是二次扩张. 记 $M = \mathbb{C}(t^3)$, $t^3$ 在 $F$ 上的极小多项式为 $x^2 - (t^3+t^{-3})x + 1$. 从而 $M/F$ 是二次扩张, 这说明 $M = \mathrm{Inv}(A_3) = \mathbb{C}(t^3)$.

下面计算 $L_1 = \mathrm{Inv}(H_1)$. $1, t, t^{2}, t^{-1}, t^{-2}, t^{-3} $ 是 $E$ 的一组基. 记 $\alpha \in L_1$, 设 $\alpha = a_1 + a_2 t + a_3 t^2 + a_4 t^{-1} + a_5 t^{-2} + a_6 t^{-3}$, $a_i \in F$, $t^3 = (t^3+t^{-3}) - t^{-3}$. 因此 

$$
\pi_4(\alpha) = a_1 + a_6(t^3+t^{-3}) + a_4t + a_5t^2 + a_2t^{-1} + a_3t^{-2} - a_6t^{-3}.
$$

比较系数, 得 $a_6 = 0,a_4 = a_2, a_3 = a_5$. 这说明 $\alpha \in M_1 \Leftrightarrow \alpha \in \mathbb{C}(t+t^{-1})$. 从而 $M_1 = \mathbb{C}(t+t^{-1})$.

$H_1,H_2,H_3$ 共轭, 我们可以算出 $\mathrm{Inv}(H_2) = \mathbb{C}(t\omega + (t\omega)^{-1})$, $\mathrm{Inv}(H_3) = \mathbb{C}(t\omega^2 + (t\omega^2)^{-1})$.

于是 $E/F$ 的全部中间域为 $\mathbb{C}(t+t^{-1}),\mathbb{C}(t\omega + (t\omega)^{-1}), \mathbb{C}(t\omega^2 + (t\omega^2)^{-1}), \mathbb{C}(t^3)$.

**例** 设 $L$ 和 $M$ 均是 $E$ 的子域且 $L / (L\cap M)$ 为有限伽罗瓦扩张. 求证 $LM/M$ 也为有限伽罗瓦扩张, 且 $\mathrm{Gal}(LM/M)\cong \mathrm{Gal}(L/(L\cap M))$.
{:.warning}

**证明** $L / (L\cap M)$ 是有限伽罗瓦扩张, 从而是 $L \cap M$ 上某一可分多项式在 $L / (L\cap M)$ 上的分裂域. 设这个多项式为 $f(x)$, 则 $f(x) \in L[x]$. 设 $F$ 是 $f(x)$ 在 $M$ 上的分裂域. 一方面, $f(x)$ 的所有根都在 $L$ 中, 从而 $ML \supseteq F$. 另一方面, $M \supseteq L \cap M$, 从而 $F \supseteq L$ ($F$ 和 $L$ 分别是 $f(x)$ 在 $M$ 和 $L \cap M$ 上的分裂域), 又有 $F\supseteq M$, 从而 $F \supseteq LM$. 这说明 $F = LM$, 从而 $LM$ 是 $f(x)$ 在 $M$ 上的分裂域, $LM/M$ 是有限伽罗瓦扩张.

记 $f(x)$ 的全部根为 $\alpha_1,\cdots ,\alpha_n \in L$, 则 $L = (L\cap M)(\alpha_1,\cdots ,\alpha_n)$. 任意 $\sigma \in \mathrm{Gal}(LM/M)$, $\sigma$ 给出 $\alpha_1,\cdots ,\alpha_n$ 的置换, 故 $\sigma(L) = \sigma((L\cap M)(\alpha_1 ,\cdots ,\alpha_n) )= L$. 于是可以给出映射 

$$\pi: \mathrm{Gal}(LM/M) \rightarrow \mathrm{Gal}(L/L\cap M), \sigma \mapsto \sigma\mid_L.$$

任意 $\sigma \in \mathrm{Gal}(LM/M)$, $\sigma \in \ker \pi \Rightarrow \sigma(a) = a,\forall a \in L$, 这导致 $\sigma$ 保持 $\alpha_1,\cdots ,\alpha_n$ 不变, 从而 $\sigma$ 保持 $LM = M(\alpha_1,\cdots ,\alpha_n)$ 的元素不变. 这说明 $\sigma = \mathrm{Id}$, 从而 $\pi$ 是单同态.

接下来, 我们只需证明 $[LM:M] = [L:L\cap M]$. $L/L\cap M$ 是有限可分扩张, 故是单扩张. 设 $L= L\cap M(\beta)$. 设 $\beta$ 在 $L\cap M$ 上的极小多项式为 $g(x)$. 因 $LM = M(L\cap M)(\beta) = M(\beta)$, 我们只需证明 $g(x)$ 在 $M[x]$ 中不可约, 从而 $g(x)$ 也是 $\beta$ 在 $M$ 上的极小多项式, 有 $[LM:M] = \deg g(x) = [L:L \cap M]$.

设 $g(x)$ 在 $M[x]$ 中有分解 $g(x) = h(x)l(x)$. 因 $L /L\cap M$ 是正规扩张, 故 $L$ 包含 $g(x)$ 的全部根 $\beta_1,\cdots ,\beta_n$. 而 $h(x)$ 和 $l(x)$ 的系数是这些根的系数为 $\pm 1$ 的多项式, 故 $h(x), l(x) \in L[x]$, 从而 $h(x), l(x)\in L\cap M[x]$. 由 $g(x)$ 在 $L \cap M$ 上不可约知 $g(x)$ 在 $M[x]$ 中不可约, 从而证明了结论.
<p align="right">$\blacksquare$</p>

**例** 设 $E /F$ 是有限伽罗瓦扩张, $\mathrm{Gal}(E /F) = A_n$ (交错群), $n \ge 4$. 则不存在 $E /F$ 的中间域 $L$ 使 $[L:F] = 2$.
{:.warning}

**证明** 使 $[L:F] = 2$ 的中间域 $L$ 导致 $\mathrm{Gal}(E /L)$ 的对 $A_n$ 的指数为 $2$, 从而是 $A_n$ 的正规子群. $n \ge 5$ 时 $A_n$ 是单群, 而 $n= 4$ 时 $A_4$ 无 $6$ 阶子群. 从而不存在这样的中间域 $L$ 满足题意.
<p align="right">$\blacksquare$</p>

**例** 设 $E/F$ 是有限伽罗瓦扩张. 如果对任一域 $K$ ($F \subsetneqq K \subseteq E$), $K$ 对 $F$ 均有相同的扩张次数 $[K:F]$. 则 $[E:F]$ 是素数.
{:.warning}

**证明** 这即是说任一 $G = \mathrm{Gal}(E/F)$ 的真子群 $H$, $[G:H]$ 都是相同的. 若 $\mid G\mid$ 含有两个以上的素因子, 设素数 $p_1,p_2$ 是它的因子, 则 $G$ 的 Sylow-$p_1$ 子群 $H_1$ 和 Sylow-$p_2$ 子群的指数是不同的. 因为 $H_1$ 的指数是 $p_2$ 的倍数, 而 $H_2$ 的指数不是. 这说明 $G$ 是 $p$-群. 若 $\mid G \mid = p^n$, $n \ge 2$. 则 $G$ 有指数为 $p^{n-1}$ 的子群 (阶数为 $p$) 和指数为 $p$ 的极大子群. 这说明 $n$ 只能为 $1$, 从而 $G$ 是素数阶群, $[E:F]$ 是素数.
<p align="right">$\blacksquare$</p>

**例** 设 $E/F$ 是有限伽罗瓦扩张, $\mathrm{Gal}(E/F)$ 是 $2p$ 阶非阿贝尔群, 其中 $p$ 是奇素数, $L$ 是满足 $[E:L] = 2$ 的中间域. 则 $L/F$ 不是有限伽罗瓦扩张.
{:.warning}

**证明** $[E:L]=2$, 说明 $H = \mathrm{Gal}(E/L)$ 是 $G = \mathrm{Gal}(E/F)$ 的 $2$ 阶子群. 取 $P$ 是 $G$ 的 Sylow-$p$ 子群. $P$ 的指数为 $2$, 从而 $P$ 是正规子群. $L/F$ 是有限伽罗瓦扩张等价于 $H \triangleleft G$. 若 $H \triangleleft G$, 由 $H \cap P = \{1\}$ 知 $G = HP \cong \mathbb{Z_2} \oplus \mathbb{Z_p} \cong \mathbb{Z}_{2p}$. 这与 $G$ 非 Abel 矛盾.
<p align="right">$\blacksquare$</p>



