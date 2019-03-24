













z=9
def main():
	global z
	if z<9:
		return 8
		
	else:
		if z==9:
			return 7
			
		else:
			return 6
			
	
if __name__ == "__main__":
	import sys
	ret=main()
	sys.exit(ret)
