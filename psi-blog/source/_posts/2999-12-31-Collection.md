---
title: $\bf\text{收集}$
tags: Math
---

长期更新, 收集各种问题/技巧/日常/诸如此类.

<!--more-->

$\bf 2019$

$\bf 11\,\text{月}\,2\,\text{日}$

$\bf 1.$
{:.warning}

$\bf 2.$ 求 $\int\frac{x^3}{\sqrt{-x^2+2x+1}} dx$.
{:.warning}

$\bf 3. \text{(Circulant Determinant)}$ 见 [$\bf Wolfram$](http://mathworld.wolfram.com/CirculantDeterminant.html) 和 [$\bf StackExchange$](https://math.stackexchange.com/questions/386526/circular-determinant-problem)
{:.warning}

$\bf 11.6$

$\bf 1.$ 已知群 $G$, $N$ 是 $G$ 的正规子群, $\mid N\mid = n$, $(G:N)=m$ 且 $(n,m)=1$. 求证: $N$ 是 $G$ 唯一的 $n$ 阶子群.
{:.warning}

**证明** 设 $H \leqslant G$ 是 $G$ 的 $n$ 阶子群, $N \triangleleft G$, 故 $HN \leqslant G$. 有 $\mid HN\mid\, \mid\,  \mid G \mid = nm$, 而 $\mid HN \mid = \mid H \mid  \mid N \mid / \mid H\cap N \mid$ 与 $m$ 互素, 故 $\mid HN \mid \mid n$. 又 $n\le  \mid HN \mid$ (因 $N \leqslant HN$), 故 $n =   \mid HN \mid$. 从而 $\mid H\cap N \mid =n$, 故 $H=N$.
<p align="right">$\blacksquare$</p>

$\bf 2.$ 记 $C_{[a,b]}$ 是 $[a,b]$ 上所有连续函数构成的环(加法和乘法就是函数相加和相乘),求其极大理想.
{:.warning}

**解** 首先, 记

$$\mathfrak{m}_{x_0} := \{f \in C_{[a,b]}: f(x_0) = 0\}\,\,\, x_0 \in [a,b].$$

任$f,g\in \mathfrak{m}_{x_0}$,任意$h \in C_{[a,b]}$, 有$(f+g)(x_0) = 0$, $(hf)(x_0) = 0$. 这说明  $\mathfrak{m}_{x_0}$ 是 $C_{[a,b]}$ 的极大理想. 下面说明其所有极大理想都有形式 $\mathfrak{m}_{x_0}$.

设 $\mathfrak{m}$ 是 $C_{[a,b]}$ 的极大理想. 记

$$
	V = \{x : f(x) = 0, \forall f \in \mathfrak{m}\}.
$$

先说明 $V$ 非空. 若不然, 任意 $x \in [a,b]$, 存在 $f \in \mathfrak{m}$ 使 $f(x) \ne 0$. $f$ 连续, 故存在开集 $U_x$ 使 $f$ 在 $U_x$ 上不变号. $\{U_x\}$ 覆盖 $[a,b]$, 从而存在有限覆盖. 记 $U_{x_1},\cdots , U_{x_n}$ 覆盖 $[a,b]$, $f_i 在 U_{x_i} (1 \le i \le n)$ 上不变号(不为 $0$). 则

$$
	f = f_1^2 + f_2^2 + \cdots + f_n^2 \in \mathfrak{m}, \,\,\,\,\,\,\, f(x) > 0, \forall x \in [a,b].
$$

这导致 $C_{[a,b]}$ 的单位 $f$ 属于 $\mathfrak{m}$, 矛盾.

现在取 $x_0 \in V$, 有 $\mathfrak{m} \subset \mathfrak{m}_{x_0}$, 而 $\mathfrak{m}$ 是极大理想, 这导致 $\mathfrak{m} = \mathfrak{m}_{x_0}$.
<p align="right">$\blacksquare$</p>

$\bf 11.28$

$\bf 1.$ 设群 $G$, $N$ 是其正规子群, 且 $(G:N)$ 和 $\mid N \mid$ 互素. 证明: 任意 $g \in \mathrm{Aut}(G)$, 有 $g(N) = N$.
{:.warning}

**证明** 任意 $g \in \mathrm{Aut}(G)$, $n \in N$, 有 $o(g(n)) = o(n) \mid\,\,\mid N \mid$. 于是 $o(g(n))$ 和 $(G:N)$ 互素. 考虑 $g(n)$ 在商群 $G/N$ 中的像, 由 $\mid G/N\mid = (G:N)$ 和 $o(g(n))$ 互素, 导致 $g(n)$ 在 $G/N$ 中为 $1$. 说明 $g(n) \in N$. 因此 $g(N) \subset N$. 同理, $g^{-1}\in \mathrm{Aut}(G)$, 故 $g^{-1}(N) \subset N$, 从而 $N\subset g(N)$, 故 $g(N) = N$.
<p align="right">$\blacksquare$</p>

$\bf 2.$ 已知实反对称矩阵 $A_{m\times m}$ 和 $C_{n \times n}$. 已知矩阵 $B_{m \times n}$. 证明: $A+I_m$ 可逆,且 $C-I_n-B^T(A+I_m)^{-1}B$ 可逆.
{:.warning}

**证明** 设 $X \in \mathbb{R}^{n \times 1}$, 有

$$
(A+I_m)X = 0 \Longrightarrow X^T(A+I_m)X = 0.
$$

记 $X=(x_1,x_2,\cdots x_m)^T$, 得到 $X^T(A+I_m)X = x_1^2 + x_2^2 + \cdots + x_m^2$. 这说明 $(A+I_m)X = 0 \Rightarrow X = O$. 因此 $A+I_m$ 可逆.

同理, $C-I_n$ 可逆.

设

$\bf 12.4$

$\bf 1.$ 设正整数 $a,b$. $a\mathbb{Z}/ab\mathbb{Z} \cong \mathbb{Z}/b\mathbb{Z}$(环同构) $\Leftrightarrow (a,b)=1$.
{:.warning}

由 $a\mathbb{Z} + b\mathbb{Z} = (a,b)\mathbb{Z}$ 和 $a\mathbb{Z} \cap b\mathbb{Z} = [a,b]\mathbb{Z}$.

注: 若有上述同构, 则 $a\mathbb{Z}/ab\mathbb{Z}$ 含幺元. 试着找到这个幺元:

$$
a^2xy \equiv ay \pmod{ab}, \forall y \in \mathbb{Z} \Longleftrightarrow (ax-1)y \equiv 0 \pmod {b}, \forall y \in \mathbb{Z}.
$$

$\bf 12.5$

$\bf 1.$ 现有 $1000$ 名员工与一个老板. 老板将员工排成一排, 自己站在排尾. 老板给员工与自己标以序号 $1,2,\cdots, 1000,1001$, 不同的人标号不同. 每个人都只能看到站在自己前面的所有人的标号. 老板令员工从后至前报出一个 $1 \sim 1001$ 的整数, 报出过的整数不能再报. 结束后报出整数等于标号的员工将会留下, 否则将会被开除.  
员工十分团结, 事前他们约定令尽可能多的人留下. 请你设计一种方法实现.
{:.warning}

**答案** 将他们(包括老板)与标号看成一个$1,2,\cdots ,1001$的置换, 第 $1000$ 号员工只有两个数的位置不知道, 他报出使整个置换成为偶置换时他的标号(交换两个数奇偶性改变). 第 $999$ 名员工有三个数的位置不知道. 他将 $1000$ 号员工报出的数赋予 $1000$ 号员工后就只剩两个数字的位置不明确. 为了使整个置换成为偶置换, 他报出相应的那个数字. 递归可知 $1$ 到 $999$ 号的每个人都可以知道自己的标号.

# 2020-3-27

https://math.stackexchange.com/questions/2634576/localization-of-maximal-ideal-is-again-a-maximal-ideal-and-the-residue-fields-ar?r=SearchResults

我裂开来,分式环保证正合列.


3-29

https://math.stackexchange.com/questions/74198/question-on-a-result-of-artin-and-tate?r=SearchResults

https://math.stackexchange.com/questions/1674183/integral-and-prime-ideal-in-dedekind-domain?r=SearchResults&newreg=f1891a0988704aa487759eb4ca802b0c

4-14

Problem. 求

$$\sum_{k=0}^{n}\frac{k}{k+2}\binom{n}{k}(-1)^k$$

解1. 看到$\frac{k}{k+2} = 1 - \int_{0}^1 2x^{k+1} \mathrm{d}x$,有

$$\begin{aligned}
    \mathrm{Left}&= \sum_{k=0}^{n} \binom{n}{k}(-1)^k + 2\sum_{k=0}^{n}\int_{0}^1 x^{k+1}\binom{n}{k}(-1)^{k+1} \mathrm{d}x\\
    &= -2\int_{0}^1 x(1-x)^n \mathrm{d}x = -\frac{2}{n^{2}+3n+2}.
\end{aligned}$$

解2.

$$
    \frac{2}{k+2}\binom{n}{k} = 2\frac{n!(k+1)}{(k+2)!(n-k)!} = \frac{2}{n+1}\binom{n+1}{k+1} - \frac{2}{(n+1)(n+2)}\binom{n+2}{k+2}.
$$

Problem. 求$d= \mathrm{gcd}\left(\binom{n}{1},\cdots,\binom{n}{n-1}\right)$.

解1. 设素数$p$,有$p \mid d \Longleftrightarrow (t+1)^n = t^n+1 \in \mathbb{F}_p[t]$.后者导致$t^n+1$只有一个根.设$n = p^rs$,$\mathrm{gcd}(s,p) = 1$,有$t^n+1=(t^s+1)^{p^r}$,从而$t^s+1$只有一根,而$(st^{s-1},t^s+1) \overset{\underset{\mathrm{s \ne 0}}{}}{=} (t^{s-1},t^s+1)=1$,有$t^s+1$无重根,从而$s=1$,$n = p^r$.

也就是说,当$n$包含两个或以上个素因子时,$d=1$.

我们有$p \mid\mid \binom{p^r}{p^{r-1}}$.故当$n = p^r$时,$d=p$.

2020.4.29

$(1+6\mathbb{Z})^{-1}\mathbb{Z}[\frac{1}{6}] =\mathbb{Q}$.
{:.warning}

设$k \in \mathbb{Z}$,设$k = k_0k_1$,其中$k_1$与$6$互素,$k_0$只有素因子$2,3$.存在$u \in \mathbb{Z}$,使得$uk_1 \equiv 1 \pmod{6}$.存在$v \in \mathbb{Z}$使得$k_0v$是$6$的幂,记为$6^n$.于是

$$
\frac{1}{k} = \frac{1}{k_0k_1} = \frac{uv}{k_0k_1uv} = \frac{uv}{6^nk_1u} \in (1+6\mathbb{Z})^{-1}\mathbb{Z}[\frac{1}{6}].
$$

注, $(1+6\mathbb{Z})^{-1}\mathbb{Z}$是主理想整环,也就是.设$R$是PID,设$u$是$R$的不可约元.即使$R$有超过两个极大理想,$R[\frac{1}{u}]$也可能是域.

请对域上一元多项式环$F[x]$考虑以上命题.


2020.6.16

设$\mathbb{F}$是域,设$V$是有限维$F$线性空间.设$A,B$是$V$的线性变化.若$B$和任何和$A$交换的线性变化交换,证明$B$可以表示为$A$的多项式.

https://math.stackexchange.com/questions/497806/matrices-b-that-commute-with-every-matrix-commuting-with-a

https://math.stackexchange.com/questions/767975/textv-is-semisimple-as-a-kx-module-if-and-only-if-a-in-operatornameen

2020.6.23

找到群 $G$ 和其正规子群 $K$, 使得 $(G'k,G'K) \ne G''k'$(我们有 $G''K' \subset (G'K,G'K)$).
{:.warning}

令 $G = \mathcal{S}_3 \times \mathcal{S}_3$.则 $G' = \mathcal{A}_3 \times \mathcal{A}_3$, $G'' = 1$.

令 $K = \{(x,x) \in G \mid x \in \mathcal{S}_3\}$,则 $K' = \{(x,x) \in G \mid x \in \mathcal{A}_3\}$.我们有 $\mid G'K\mid = \frac{9\times 6}{3} = 18$.考虑

$$
    H = \{(x,y) \in G \mid xy^{-1} \in \mathcal{A}_3\}.
$$

则显然 $G'K \subset H$ 和 $\mid H\mid = 18$.从而 $G'K = H$. 显然 $H$ 只有 $1,2,3$ 阶元. 我们有 $G''K' = K''$ 是 $3$ 阶群.

若$G''K' = D(G'K)$, 则 $G'K / G''K'$ 是 $6$ 阶交换群从而循环,这导致 $G'K / G''K'$ 有 $6$ 阶元,矛盾.


求 $N^{\mathbb{Q}(\zeta_n)}_{\mathbb{Q}}(1-\zeta_n)$, 其中 $\zeta_n$ 是本原 $n$ 次单位根.
{:.warning}

注意 $\prod_{i=1}^{n-1}(1-\zeta_n^i) = n$.记 $\Phi_n = \prod_{(i,n) = 1} (1-\zeta_n^i)$, 则 $\prod_{d \mid n} \Phi_d= n$,从而 $\Phi_n=\prod_{d \mid n} d^{\mu(n /d)}$. 分$n$是素数的幂和$n$有两个或以上素因子考虑.

设 $\alpha_1,\ldots ,\alpha_k$ 不同向量的内积两两小于零, 证明任 $k-1$ 个向量线性无关.
{:.warning}

否则, 设 $\sum_{i=1}^{k-1} a_i \alpha_i = 0$, $a_i$ 不全为 $0$. 用 $\alpha_k$ 内积得存在 $a_i > 0$, 存在 $a_i < 0$. 设 $a_1,\ldots ,a_t > 0$, $a_{t+1},\ldots ,a_{t+m} < 0$, 剩下的等于零,有

$$
    \sum_{i=1}^{t} a_i\alpha_i = -\sum_{i=1}^{m} a_{t+i}\alpha_{t+i}.
$$

记为$\beta$, 则 $(\beta,\beta) = -\sum_{i=1}^{t}\sum_{j=1}^{m} a_ia_{t+j}(\alpha_i,\alpha_{t+j}) < 0$, 矛盾.

设 $A$ 是 $n \times t$ 形矩阵, 设 $B$ 是 $t \times n$ 形矩阵. 证明除取特征值 $0$ 的 Jordan 块, $AB,BA$ 的 Jordan 标准型相同.
{:.warning}

由 $\lambda$ 矩阵 $\begin{pmatrix}\lambda I_n-AB & -A\\ & \lambda I_t\end{pmatrix}$ 和 $\begin{pmatrix}\lambda I_n & -A\\ & \lambda I_t - BA\end{pmatrix}$ 相抵,得到 $\begin{pmatrix}AB & A \\ & \end{pmatrix}$ 和 $\begin{pmatrix} & A \\ & BA\end{pmatrix}$ 相似, 于是设 $\lambda_0 \ne 0$, $k \ge 0$, 有

$$\begin{aligned}
\operatorname{rank}\left(\begin{pmatrix}AB & A \\ & \end{pmatrix} - \lambda_0 I\right)^k &= \operatorname{rank} \begin{pmatrix}AB-\lambda_0 & A \\ & -\lambda_0I\end{pmatrix}^k \\
&= \operatorname{rank} \begin{pmatrix}(AB-\lambda_0)^{k} & * \\ & (-\lambda_0)^kI\end{pmatrix} \\
&= \operatorname{rank} (AB-\lambda_0)^k +t \,\,\,\,\,\,\text{($\lambda_0 \ne 0$)}.
\end{aligned}$$

同理

$$
\operatorname{rank}\left(\begin{pmatrix} & A \\ & BA\end{pmatrix} - \lambda_0 I\right)^k = \operatorname{rank} (BA-\lambda_0)^k + n.
$$

它们相似,从而 $\operatorname{rank} (AB-\lambda_0)^k + t = \operatorname{rank}(BA-\lambda_0)^k + n$. 取二阶差分得 $AB$, $BA$ 对应对角元为 $\lambda_0$ 的 Jordan 块一样.

作为推论, 若 $\operatorname{rank}(AB)^k = \operatorname{rank}(BA)^k$, $\forall k \ge 0$, 则 $AB \sim BA$.

与 Jordan 块交换的矩阵可以看看~.

2020-7-2

一些反例.

给定数列$\{a_n\}$,$\sum_{n=1}^{+\infty} a_n$收敛.记$S = \{\sigma \in \mathcal{S}_{\mathbb{N}_+} \mid \sum_{n=1}^{+\infty} a_{\sigma(n)}\,\text{收敛}\}$.举出例子说明$S$不一定是群.
{:.warning}

令$a_n = \frac{(-1)^{n+1}}{n}$, 则 $\sum_{n=1}^{\infty} a_n = \ln 2$.

我们找到双射$s\colon \mathbb{N}_+ \to \mathbb{N}_+$, 使得$\sum a_{sn}$ 不收敛, 再找到 $\sigma \in S$,使得 $\sum a_{\sigma s(n)}$收敛, 即$\sigma s \in S$,从而 $s = \sigma^{-1}(\sigma s) \not\in S$得到$S$不是群.

取

$$
    s\colon k \mapsto \begin{cases}
        2k-2n-3 & 2^n < k < 2^{n+1}; \\
        2n+2 & k = 2^n.
    \end{cases}
$$

(也就是说$\sum a_{sn}$是:在$2^n$处取按顺序取$\{a_n\}$的偶数项,在其他地方按顺序取奇数项.)于是

$$
    \sum_{n=1}^{N} a_{sn} = \sum_{n=1}^{\left\lfloor \log_2 N \right\rfloor + 1} a_{2n} + \sum_{n=1}^{N - \left\lfloor \log_2 N \right\rfloor - 1} a_{2n-1}.
$$

只需看到$\sum_{n=1}^{N} a_{2n} = -\frac{1}{2}(\gamma + \log N + o(1))$, $\sum_{n=1}^{N} a_{2n-1} = \frac{1}{2}(\gamma + \log N + o(1))$得$\sum a_{sn}$不收敛.

现取

$$
    \sigma\colon \begin{cases}
        3k+1 \mapsto 4k+1, \\
        3k+2 \mapsto 4k+3, \\
        3k+3 \mapsto 2k+2.
    \end{cases}
$$

(也就是说$\sum a_{\sigma n}$是: 每取两项$a_n$的奇数项后取一个$a_n$的偶数项.)易见$\sum_{n=1}^{3N}a_{\sigma n}$收敛.而$a_{3N+1}$和$a_{3N+2} \to 0$,$N \to \infty$,易见$\sum a_{\sigma n}$收敛.

(注意$\sigma n$把奇偶项打散了.)有

$$\begin{aligned}
    \sigma(6k+1) = 8k+1;\\
    \sigma(6k+2) = 8k+3;\\
    \sigma(6k+3) = 4k+2;\\
    \sigma(6k+4) = 8k+5;\\
    \sigma(6k+5) = 8k+7;\\
    \sigma(6k+6) = 4k+4.
\end{aligned}$$

易见$\sum a_{\sigma(2n)}$ 和 $\sum a_{\sigma(2n-1)}$ 收敛. 而

$$
    \sum_{n=1}^{N} a_{\sigma(s(n))} = \sum_{n=1}^{\left\lfloor \log_2 N \right\rfloor}a_{\sigma(2n)} + \sum_{n=1}^{N- \left\lfloor \log_2N  \right\rfloor -1}a_{\sigma(2n-1)}.
$$

易见$\sum a_{\sigma sn}$收敛.

(实际上$\sigma^{-1} \in S$,从而$S$也不是半群.)


设$P,Q,S,T \in M_n(\mathbb{R})$, $\begin{pmatrix}P & S \\ Q & T\end{pmatrix}$ 可逆. 说明$\begin{pmatrix}P + \lambda T & -Q + \lambda S \\ Q - \lambda S & P + \lambda T\end{pmatrix}$的行列式可能为$0$.
{:.warning}

取

$$
P = \begin{pmatrix}1 & \\ & 1\end{pmatrix}, S = \begin{pmatrix}-1 & \\  & 1\end{pmatrix}, Q = \begin{pmatrix}& -1 \\ 1& \end{pmatrix}, T = \begin{pmatrix} & 1 \\ 1 &\end{pmatrix}.
$$

(是待定$Q$用Wolfram算出来的.)

命题.

设群$G=AB$,其中$A,B$是$G$的Abel子群.证明$G'$交换.
{:.warning}

**证明.** 不难验证$G'$是由$A',B',(A,B)$生成的正规子群.而$A',B' = 1$,且设$a \in A$,$b\in B$, 设$c \in A$,有

$$
    (a,b)^c = (a,b^c) = (ac)^{-1}b^{-1}ac b \in (A,B).
$$

同理$c \in B$时有$(a,b)^c \in (A,B)$.从而$(A,B)$正规,$G ' =(A,B)$.

由$G=AB$知$AB=BA$.于是任意$a,a' \in A$, $b,b' \in B$, 可令 $b^{a'} = a^{\prime\prime}b^{*}$, $a^{b'} = b^{\prime\prime}a^*$, 其中$a^{\prime\prime},a^* \in A$, $b^{\prime\prime},b^{*}\in B$.只需证明$(a,b)^{a'b'} = (a,b)^{b'a'}$,就证明了$(A,B)$交换.而

$$\begin{aligned}
    (a,b)^{a'b'} = (a,b^{a'})^{b'} = (a,a^{\prime\prime}b^*)^{b'} = (a,b^*)^{b'} = (b^{\prime\prime}a^*,b^*) = (a^*,b^*), \\
    (a,b)^{b'a'} = (b^{\prime\prime}a^*,b)^{a'} = (a^*,b)^{a'} = (a^*,a^{\prime\prime}b^*) = (a^*,b^*).
\end{aligned}$$

证完.

(来自徐明曜著《有限群》).

2020-7-16

在加性范畴中有限直和和直积一样.
https://math.stackexchange.com/questions/25213/in-an-additive-category-why-is-finite-products-the-same-as-finite-coproducts


2020-8-13

令 $p$ 是一个素数, 令 $n = mp^r$ 是正整数, 其中 $p \nmid m$. 在 $\mathbb{F}_p$ 的代数闭包中取本原 $m$ 次单位根(当然存在) $\omega$, 令 $F_n(x) = \prod_{d \in (\mathbb{Z}/n\mathbb{Z})^\times}(x-\omega^d)$. 则 $F(x) \in \mathbb{F}_p[x]$, 且 $F_n(x) \equiv \Phi_n(x) \pmod {p}$, 其中 $\Phi_n(x)$ 是 $n$ 次分圆多项式.

实际上 $F_n(x) = F_m(x)^{\varphi(p^r)}$(同态 $(\mathbb{Z}/n\mathbb{Z})^\times \to (\mathbb{Z}/m\mathbb{Z})^\times$ 满, 其核大小 $\varphi(p^r)$.). 先证明 $n$ 和 $p$ 互素时结论成立, 再利用

{% note %}
设 $p \nmid m$, 则

$$
    \Phi_{pm}(x) = \frac{\Phi_n(x^p)}{\Phi_{m}(x)}.
$$

若 $p \mid m$ 则

$$
    \Phi_{pn}(x) = \Phi_n(x^p).
$$
{% endnote %}

同时利用 $f(x^p) \equiv f(x)^p \pmod {p}$, $f(x) \in \mathbb{Z}[x]$ 即可.

然而当 $n$ 和 $p$ 互素时, $F,\Phi$ 都满足

$$
    F_n(x) = \frac{x^n-1}{\prod_{d \mid n, d\ne n}F_d(x)},\,\,\,\,\,\Phi_n(x) = \frac{x^n-1}{\prod_{d \mid n,d \ne n}\Phi_d(x)}.
$$

(用单位根).



2020.8.21

https://math.stackexchange.com/questions/1575646/how-can-we-prove-mathbbq-sqrt-2-sqrt-3-sqrt-n-mathbbq-s/1575702#1575702

https://math.stackexchange.com/questions/113689/proving-that-left-mathbb-q-sqrt-p-1-dots-sqrt-p-n-mathbb-q-right-2n-f

https://math.stackexchange.com/questions/1230173/elementary-proof-for-sqrtp-n1-notin-mathbbq-sqrtp-1-sqrtp-2?noredirect=1

https://mathoverflow.net/questions/131464/relations-between-automorphisms-of-field-of-rational-functions-and-mobius-transf

https://math.stackexchange.com/questions/1842130/galois-group-of-function-field

https://math.stackexchange.com/questions/1654414/why-is-textgalk-k-cong-textgalk-omega-k-omega-with-omega-not?r=SearchResults

2020.8.22

设 $k$ 是任意一环, 令 $G$ 是有限群. 则 $R = k[G]$ 半单当且仅当 $k$ 是半单的且 $|G|$ 在 $k$ 中可逆. 见 https://www.isibang.ac.in/~sury/ayushtiwari.pdf Theorem 10.


2020.8.23 凌晨.

设 $A$ 为交换环, 令 $\mathfrak{p}_1,\ldots ,\mathfrak{p}_n$ 是 $A$ 的素理想. 则 $S = A -\bigcup_{i=1}^{n} \mathfrak{p}_i$ 是乘性子集. 且 $S^{-1}A_{S^{-1}\mathfrak{p}_i} \simeq A_{\mathfrak{p}_i}$.(都显然.)

现在设 $A$ 是整环. 则 $S^{-1}A = \bigcap_{i=1}^{n}A_{\mathfrak{p}_i}$.(此时, 局部化都在 $A$ 的商域中.) 这是因为:

由 $S^{-1}A_{S^{-1}\mathfrak{p}_i} = A_{\mathfrak{p}_i}$, 有 $\bigcap A_{\mathfrak{p}_i} =\bigcap S^{-1}A_{S^{-1}\mathfrak{p_i}}$. 熟知 $S^{-1}A$ 是其所有素理想处局部化的交, 于是 $S^{-1}A= \bigcap_{\mathfrak{q}} S^{-1}A_{S^{-1}q}$, 其中 $\mathfrak{q}$ 是包含在 $\bigcup_{i=1}^{n}\mathfrak{p}_i$ 的素理想, 熟知此时存在 $i$ 使得 $\mathfrak{q}\subset \mathfrak{p}_i$. 于是 $\bigcap_\mathfrak{q} S^{-1}A_{S^{-1}\mathfrak{q}}=\bigcap_i S^{-1}A_{S^{-1}\mathfrak{p}_i}$. 从而证完.

关于两个熟知的事实:

{% note %}
设 $A$ 是整环, 则 $A$ 是其所有素理想处局部化的交.
{% endnote %}

*proof.* 设 $x \in \bigcap_{\mathfrak{q}}A_{\mathfrak{q}}$. 令

$$
    I=\{y \in A\mid yx \in A\}.
$$

则显然 $I = A$ 或 $I$ 是 $A$ 的理想. 若 $1 \not\in I$, 则 $I$ 是真理想, 故存在 $A$ 的极大理想 $\mathfrak{m}$ 包含 $I$. 有 $x \in A_{\mathfrak{m}}$, 故存在 $y \in A-\mathfrak{m}$ 使得 $yx \in A$, 导致 $y \in I \subset \mathfrak{m}$, 矛盾.


{% note %}
设 $R$ 是环, 设 $I_i,i=1,2,\ldots ,r$ 和 $J$ 是理想.假设

(1) $J \not\subset I_i$, 任意 $i=1,\ldots ,r$.  
(2) $I_i$ 中至多两个不是素理想.

则存在 $x \in J$ 使得 $x \not\in I_i,i=1,\ldots ,r$.
{% endnote %}

见 https://stacks.math.columbia.edu/tag/00DS


2020.8.24

https://math.stackexchange.com/questions/1292619/suppose-a2bba2-2aba-prove-that-there-exists-a-positive-integer-k-such-tha?noredirect=1

https://math.stackexchange.com/questions/227984/if-a-and-ab-ba-commute-show-that-ab-ba-is-nilpotent?noredirect=1

https://math.stackexchange.com/questions/3177989/if-nilpotent-matrix-a-and-ab%e2%88%92ba-commute-show-that-ab-is-nilpotent?noredirect=1

2020.8.26

https://math.stackexchange.com/questions/1714328/each-minimal-normal-subgroup-of-is-contained-in-the-center


2020.8.29

{% note %}
设$\mathfrak{m}$是交换环$R$的极大理想, 设 $M$ 是 $R$-模. 记 $S=R-\mathfrak{m}$.

(i) 若 $s \in S, n > 0$. 证明存在 $s_1\in R$ 使得 $s_1s \equiv 1 \pmod{\mathfrak{m}^n}$.  
(ii) 定义 $R_\mathfrak{m}R \times  M /\mathfrak{m}^nM$, $(a /s,\overline{m})\mapsto \overline{as_1m}$, 其中 $s_1$ 如 (i). 证明这个映射是良定义的(不依赖 $s_1$), 并且使 $M /\mathfrak{m}^nM$ 成为 $R_{\mathfrak{m}}$ 模.  
(iii) 令 $\hat{\mathfrak{m}}$ 为 $\mathfrak{m}R_{\mathfrak{m}}$. 证明有 $R_\mathfrak{m}$ 模同构 $M/\mathfrak{m}^nM \simeq M_{\mathfrak{m}} /\hat{m}^nM_{\mathfrak{m}}$.
{% endnote %}

*proof.* (i) $n=1$ 由 $R /\mathfrak{m}$ 是域得知. 下设 $n \ge 2$, 由归纳, 存在 $s_2 \in R$ 使得

$$
    ss_2 \equiv 1 \pmod{\mathfrak{m}^{n-1}}.
$$

从而 $(ss_2-1)^2 \in \mathfrak{m}^{2n-2} \subset \mathfrak{m}^n$. 于是令 $s_1 = (2s_2-ss_2^2)$ 即可.

(ii) 略

(iii)

$$
    S^{-1}M /S^{-1}\mathfrak{m}^nM\simeq S^{-1}(M /\mathfrak{m}^{n} M) \simeq S^{-1}R \otimes_{R} M /\mathfrak{m}^nM.
$$

作互逆的$R_{\mathfrak{m}}$模同态

$$
    \begin{aligned}
        S^{-1}R \otimes_{R} M /\mathfrak{m}^nM \to M /m^{n}M ,(a /s,\overline{m}) \mapsto \overline{as_1m}, \\
        M /m^{n}M \to S^{-1}R \otimes_{R} M /\mathfrak{m}^nM, a \mapsto 1\otimes a.
    \end{aligned}
$$

即可.

{% note %}
设 $R$ 是整环, 设 $K$ 为 $R$ 商域. 证明 $b \in aR$ 等价于 $b \in aR_{\mathfrak{p}}$, 任意 $R$ 的素理想 $\mathfrak{p}$ 等价于 $b \in aR_{\mathfrak{m}}$, 任意 $R$ 的极大理想 $\mathfrak{m}$.
{% endnote %}

*proof.* 只证明 $3$ 推 $1$. 令 $I = \{x \in R \mid xb \in aR\}$. 则 $I$ 是 $R$ 的理想. 若 $1 \not\in I$ 取 $\mathfrak{m}$ 是一个包含 $I$ 的极大理想. 由条件存在 $s \in R-\mathfrak{m}$ 使得 $bs \in aR$. 导致 $s \in I \subset \mathfrak{m}$ 矛盾.
