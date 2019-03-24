








def main():
	a=5
	b=0
	while a>0:
		a-=1
		b+=1
	return b
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
