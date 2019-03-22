























def f(x):
	return (x*x*(-1))
	
	
c=3
def main():
	global c
	x=2
	if x==2 and c==3:
		global c
		return f(45)
		
		
	else:
		global c
		return -1
		
		
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
