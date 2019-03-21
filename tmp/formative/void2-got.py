













z=98
def p(x, y, e):
	global z
	z=x+y+z*x*y
	
def main():
	global z
	p(3,5,7)
	return z
	
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
