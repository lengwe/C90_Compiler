










x=0
z=5
def f():
	global x
	global z
	return 2+z
	
def main():
	global x
	global z
	y=2+x
	return y+f()
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
