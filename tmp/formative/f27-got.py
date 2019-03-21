























def f(x):
	return (x*x*(-1))
	
	
c=98
def main():
	global c
	x=3
	z=5
	if x==23 or z==5:
		global c
		return 45
		
		
	else:
		global c
		return 0
		
		
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
