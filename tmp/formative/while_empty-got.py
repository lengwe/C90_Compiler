














def main():
	y=9
	x=8
	z=8
	while y:
		y=y-1
	while x:
		x=x-1
	while z:
		z=z-1
	return x+z+y
	
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
