if __name__ == "__main__":

	croatia_alphabet = ['c=','c-','dz=','d-','lj','nj','s=','z=']

	sentence = raw_input('')

	for i in range(0,len(croatia_alphabet)):
		sentence = sentence.replace(croatia_alphabet[i], '*')

	
	print len(sentence)
