

























def f(x):
	return x*x
	
	
c=98
def main():
	global c
	x=32
	if x<32:
		global c
		return f(c)
		
		
	else:
		global c
		return 0
		
		
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
