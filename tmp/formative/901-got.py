


















z=4
def gcd(a, b):
	global z
	while a!=b:
		if a>b:
			a=a-b
		else:
			b=b-a
	return a
	
x=3
def main():
	global z
	global x
	return gcd(x*z*100,500)+gcd(x,z)
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
