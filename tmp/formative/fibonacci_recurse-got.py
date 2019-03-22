


















def fibonacci_recursive(n):
	if n==0:
		return 0
		
		
	if n==1:
		return 1
		
		
	return fibonacci_recursive(n-1)+fibonacci_recursive(n-2)
	
	
def main():
	return fibonacci_recursive(10)
	
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
