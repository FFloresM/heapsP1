import numpy as np
import matplotlib.pyplot as plt

a, b, c, d = np.loadtxt('mem_usage', unpack=True)
p=3
plt.plot(a[:p],b[:p], 'ro-', label="binaryheap")
plt.plot(a[:p],c[:p], 'bo-', label="binomialheap", alpha=0.7)
plt.plot(a[:p],d[:p], 'go-.', label='fibonacciheap')
plt.legend()
plt.title("cantidad de elementos v/s memoria usada")
plt.ylabel("memoria (kb)")
plt.xlabel("cantidad de elementos")
plt.grid()
plt.savefig("plot_mem.png")
plt.show()