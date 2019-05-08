from __future__ import unicode_literals, print_function
from spacy.lang.en import English
import spacy

nlp = spacy.load("en_core_web_sm")
text = open("corpus.txt", "r").read()
doc = nlp(text)

names_to_conceal = ["NAME_1", "NAME_2", "NAME_3", "NAME_4", "NAME_5"]

nlp = English()
nlp.add_pipe(nlp.create_pipe('sentencizer')) # updated

sentence_array = [sent.string.strip() for sent in doc.sents]
sentence_array = sorted(sentence_array, key=len)
sentence_string = ' '.join(map(str, sentence_array))

for name in names_to_conceal:
	black_boxes = ""
	for letter in name:
		black_boxes += "█"
	concealed_name = name[0] + black_boxes[:-1]
	sentence_string = sentence_string.replace(name, concealed_name)

f = open("output.txt",'w')
print(sentence_string, file=f)
