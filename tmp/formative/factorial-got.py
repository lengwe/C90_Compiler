
















def factorial(n):
	if n==1:
		return 1
		
		
	else:
		return (n*factorial(n-1))
		
		
	
def main():
	no=10
	return factorial(no)
	
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
