---
title: Sylow 定理
tags: Math Algebra
---
主要是习题整理.


<!-- vim-markdown-toc GFM -->

* [Sylow Theorems](#sylow-theorems)
* [Fusion in the normalizer of a $\bm p$-Sylow subgroup](#fusion-in-the-normalizer-of-a-bm-p-sylow-subgroup)
* [Local conjugacy and Alperin's Theorem](#local-conjugacy-and-alperins-theorem)
* [Exercises](#exercises)

<!-- vim-markdown-toc -->

## Sylow Theorems

**Definition.** 设有限群 $G$,设 $p^n$ 为 $\mid G \mid$ 的因子中最大的 $p$ 的幂次.$G$ 的子群 $H$ 被称为 $p$-Sylow 子群,如果 $\mid H\mid = p^n$.
{:.success}

**Proposition.** i) 每个有限群都有 $p$-Sylow 子群,其中 $p \mid \,\mid\!G\!\mid$.  
ii) (1) $G$ 的每个 $p$-子群都被含于某一 $p$-Sylow 子群.  
(2) $G$ 的 $p$-Sylow 子群彼此共轭.  
(3) $G$ 的 $p$-Sylow 子群的个数 $\equiv 1 \pmod{p}$.
{:.warning}

**Proposition.(Frattini)** 设 $H$ 是 $G$ 的正规子群, $Q$ 是 $H$ 的一个 $p$-Sylow 子群,则 $HN_G(Q) = G$.
{:.warning}

**Corollary.** 令 $S$ 是 $G$ 的一个 $p$-Sylow 子群,令 $H$ 为 $G$ 的子群,且 $N_G(S) \subset H$.则 $N_G(H) = H$. 特别地, $N_G(N_G(S)) = N_G(S)$.
{:.warning}

_Proof._ 记 $K = N_G(H)$, 则 $H$ 正规于 $K$. 由 Frattini 论断,有 $K = HN_K(S)$. 但是 $N_K(S) \subset N_G(S) \subset H$, 有 $K = H$.

## Fusion in the normalizer of a $\bm p$-Sylow subgroup

若 $S \subset K$, 都是 $G$ 的子群. $H$ 的两个元素被称为在 $K$ 中融合,如果它们是 $K$-共轭的.

**Proposition.** 设 $S$ 是 $G$ 的 $p$-Sylow 子群.令 $(A_i,B_i)_{i \in I}$ 为两族 $S$-正规的子集(即 $gA_ig^{-1} = A_i, gB_ig^{-1} = B_i \forall i \in I, g \in S$). 若 $g \in G$ 使 $gA_ig^{-1} = B_i, \forall i \in I$,则存在 $n \in N_G(S)$ 使得 $nA_in^{-1} = B_i, \forall i \in I$.
{:.warning}

_proof._ 令 $N_A = \bigcap_{i \in I} N_G(A_i)$ 和 $N_B = \bigcap_{i \in I} N_G(B_i)$. 则 $gN_Ag^{-1} = N_B$. 由 $A_i,B_i$ 是 $S$-正规的,知道 $S \subset N_A \cap N_B$, 从而 $gSg^{-1} \subset N_B$. $S$, $gSg^{-1}$ 是 $N_B$ 的 $p$-Sylow 子群, 从而存在 $z \in N_B$, 使得 $zSz^{-1} = gSg^{-1}$. 因此 $n = z^{-1}g \in N_G(B)$, 且 $nA_in^{-1} = z^{-1}gA_ig^{-1}z = z^{-1}Bz = B_i, \forall i \in I$.

**Corollary.** $S$ 的两个正规子群如果是 $G$-共轭的,则是 $N_G(S)$-共轭的.
{:.warning}

**Theorem.(Burnside)** 设 $X,Y$ 是 $S$ 的中心的子集, 且 $g \in G$ 使 $gXg^{-1} = Y$.则存在 $n \in N_G(S)$ 使 $nxn^{-1} = gxg^{-1}, \forall x \in X$.

## Local conjugacy and Alperin's Theorem

设 $S$ 是 $G$ 的一个 $p$-Sylow 子群.

**Theorem.** 设 $A \subset S$, 设 $g \in G$ 使得 $A^g \subset S$. 则存在整数 $n \ge 1$, 和 $S$ 的子群 $U_1,\ldots ,U_n$, 以及 $g_1,\ldots ,g_n \in G$,使得  
(1) $g = g_1\cdots g_n$.  
(2) $g_i \in N_G(U_i)$, 对 $1 \le i \le n$.  
(3) $A^{g_1\cdots g_{i-1}} \subset U_i$, 对 $1 \le i \le n$.
{:.warning}

## Exercises
_(Construction of subgroups of index 2)_ 令 $S$ 是一有限群 $G$ 的 $2$-Sylow 子群. 令 $H$ 是 $S$ 的子群.则 $G$ 作用于 $G /H$,令 $\varepsilon_H$ 是映射的合成

$$
    G \longrightarrow \mathcal{S}_{G /H} \xrightarrow{\varepsilon} \{\pm 1\}.
$$

其中 $\varepsilon(\sigma)$ 给出 $\sigma$ 的符号.

令 $C$ 是 $S$ 的一个非平凡循环群.且 $\mid C\mid \times  \mid H \mid =  \mid S \mid$, 对每一个 $g \in G$,$C \cap gHg^{-1} = 1$.

a) $C$ 在 $G /H$ 上的作用作用自由,它的轨道数是奇数.  
b) $\varepsilon_H(C) = \{1,-1\}$.从而 $\ker \varepsilon_H$ 是 $G$ 的一个指数为 $2$ 的子群,并且不包含 $C$.
