








def main():
	a=0
	b=1
	if a==b:
		b=5
	else:
		b=6
	return b
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
