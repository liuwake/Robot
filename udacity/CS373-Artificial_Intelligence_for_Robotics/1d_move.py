## data
p = [0.2, 0.2, 0.2, 0.2, 0.2]
world = ['green', 'red', 'red', 'green', 'green']
measurements = ['red', 'red']
motions = [1, 1]
pHit = 0.6
pMiss = 0.2
pExact = 0.8
pOvershoot = 0.1
pUndershoot = 0.1


# %## official

def sense(p, Z):
    q = []
    for i in range(len(p)):
        hit = (Z == world[i])
        q.append(p[i] * (hit * pHit + (1 - hit) * pMiss))
    s = sum(q)
    for i in range(len(q)):
        q[i] = q[i] / s
    return q


def move(p, U):
    q = []
    for i in range(len(p)):
        s = pExact * p[(i - U) % len(p)]
        s = s + pOvershoot * p[(i - U - 1) % len(p)]
        s = s + pUndershoot * p[(i - U + 1) % len(p)]
        q.append(s)
    return q


##%# my
def sense(p, Z):
    q = [p[i] * pHit if world[i] == Z else p[i] * pMiss for i in range(len(p))]
    return [q[i] / sum(q) for i in range(len(q))]


def move(p, U):
    n = len(p)
    q = [.0] * n
    for i in range(n):
        q[i] += pUndershoot * p[(i - 1 - U) % n] + pExact * p[(i - U) % n] + pOvershoot * p[(i + 1 - U) % n]
    return q
