def huffman(p):
    if(len(p) == 2):
        return dict(zip(p.keys(), ['1', '0']))

    p_pr = p.copy()
    a1, a2 = low_pair(p)
    p1, p2 = p_pr.pop(a1), p_pr.pop(a2)
    p_pr[a1 + a2] = p1 + p2

    c = huffman(p_pr)
    ca1a2 = c.pop(a1 + a2)
    c[a2], c[a1] = ca1a2 + '0', ca1a2 + '1'

    return c

def low_pair(p):
    sorted_p = sorted(p.items(), key=lambda x: x[1])
    return sorted_p[0][0], sorted_p[1][0]


e = { '0': 0.33, '1': 0.33, '2': 0.33}
print(huffman(e))
