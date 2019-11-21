import numpy as np
import matplotlib.pyplot as plt
from math import sin, pi

def build_plot(x, y, name):
    plt.plot()
    plt.xlabel("t")
    plt.ylabel("U(t)")
    plt.title(name)
    plt.plot(x, y, color = 'blue', linestyle = 'solid',
         label = 'Аналоговый сигнал')
    plt.step(x, y, color = 'red', linestyle = 'dashed',
         label = 'Дискретизация ')
    plt.legend(loc = 'upper right') # размещение легенды
    plt.grid(True)
    plt.show()

#-------Задание 1
t_values = []# аргументы 
t_results = [] # значения функций по аргументам
t1_values = []
t1_results = []
t2_values = []
t2_results = []
t = 0.0         # изменяющийся аргумент
t1 = 0.0
t2 = 0.0
#-------Задание 2
kotel = 0.0
kotel_values = []
kotel_results = []
while kotel < 1.0:
    kotel_results += [sin(2*pi*t]#2Hz и 4Hz отсюда и определяется шаг
    kotel_values += [kotel]
    kotel += 0.01
build_plot(kotel_values, kotel_results, "Шаг 0.01")

#-------
while t < 1.0:
    t_results += [sin(2*pi*t]
    t_values += [t]
    t += 0.01 #100Hz или T
while t1 < 1.0:
    t1_results += [sin(2*pi*t1)]
    t1_values += [t1]
    t1 += 0.025 #40Hz
while t2 < 1.0:
    t2_results += [sin(2*pi*t2)]
    t2_values += [t2]
    t2 += 0.04 #25Hz
build_plot(t_values, t_results, "Шаг 0.01")
build_plot(t1_values, t1_results, "Шаг 0.025")
build_plot(t2_values, t2_results, "Шаг 0.04")
