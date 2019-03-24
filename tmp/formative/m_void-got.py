









def voidF():
	pass
def main():
	voidF()
	return 10
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
