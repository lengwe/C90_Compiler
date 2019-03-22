



























def f(x):
	return x*x
	
	
c=98
def main():
	global c
	x=32
	if x<32:
		global c
		if c==98:
			global c
			return f(c)+f(c-1)+f(c-2)+f(c-3)
			
			
		
	else:
		global c
		return 0
		
		
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
