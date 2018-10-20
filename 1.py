from math import sinh
from math import atanh

a = float (input ("a:"))
x = float (input ("x:"))

G = 5*(10*a*a-11*a*x+x*x)/24*a*a-49*a*x+15*x*x
F = sinh(3*a*a+7*a*x+4*x*x)
Y = -atanh(30*a*a+37*a*x-4*x*x)

print ("G=""%2f" %G)
print ("F=""%2f" %F)
print ("Y=""%2f" %Y)
