# PipesAndFilters
Performance Evaluation of Pipes-and-Filters Architectural Pattern in Multicore Environments
# USED MODULES

01) cryptography
> This module is used to make public and private key.

02) pybase64
> Provides a fast base64 implementation for base64 encoding/decoding.

03) json
> To  to parse JSON data - both encoding and decoding.

04) os
> To create,list and make directories etc.

05) re 
> Regular expression(re) to fetch, clean and find the regular patterns in the text.

06) io
> To Create and save text inside a file in different encoding.

07) spacy 
> It is a natural language processing module used to do different NLP tasks like NER, matching, match pattern, POS tag, etc.

08) nltk
> It is a NLP featured module used in algo to acomplish tasks like lemmatisation, wordnets, etc. 

09) enchant
> This module is used to validate the presence of word in standard english dictionary.

10) pickle
> This module is used to serialize python objects in file directly in encoded form. 

11) numpy
> This module is used to create multidimensional array and process mathematical operations.

12) pandas 
> We used data frame class of pandas to fit the required data in the given datastructure.

13) shutil
> Used to perform file operations like copy, delete, etc.

14) sklearn
> It is a ML library and its text classifier class TFIDF vectorizer, SVC is used for text classification.

15) requests
> This module was used to request judgements using indian kanoon API.


# REPOSITORY CONTENTS

> .py files

1) Authentication_indian_kanoon.py
This file creates and uses puplic and private key to fetch the raw json data using IndianKanoon API and save them in folders judgement_madhyapradesh, judgement, judgements.

2) Process Json File.py (Run when processed documents are needed)
This file uses downloaded raw json data to fetch the usable data in the form of formatted and unformatted text files and saves them in folders judgement_madhyapradesh, judgement, judgements respectivley.

3) Name_Entity_Recognition.py
This file uses the unformatted text file to fetch the lawyers name from the same file and stores the fetched data in the name dictionary.pkl file.

4) Docs_Clustering.py
This file uses the name dictionary.pkl file to cluster the files (judgements) with respect to the corresponding lawyers they belong to and creates a folder Result which contains folders named after lawyers which contains all the judgements for that particular lawyer.

5) Data collection file.py
This file fetches the cites and citedby from the judgements in the folder named after lawyers and saves them in respective folders with file named as cite.pkl. This file also classifies the judgements releated to a lawyer in three clases win, lose, unkown repectively and save them in the file called res.pkl

6) RankCalculation.py
This file uses the metadata in cite and res present in the lawyer named folder to rank the lawyers accordingly. 

7) run.py
A single python file that runs all of the above *.py files in a singleton command in the proper order.

8) test.py
A python file that takes  .pkl file in command argument and display its contents on the command prompt.


>Folders

1) Judgements_madhyapradesh (8692 unique judgements)
This folder contains judgements from Madhya Pradesh High Court in json, formatted text file and unformatted text file formats.

2) Judgements
This folder contains the judgements from the courts of different Indian states in json and unformatted text file formats.
These are testing dataset containing 198 different judgements.

3) Judgement
This folder contains the judgements from the courts of different Indian states in json and formatted text file formats.
These are testing dataset containing 198 different judgements.

4) Result
Folder Result contains folders named after lawyer's name which contains all the judgements for that particular lawyer.

> Other files 

1) private_key.pem
Private key used for the communication between IndianKanoon and client.

2) ppdb-xl.txt
This file contains the synonyms of the english words used for the data agumentation in the text classification.

3) winloss.pkl
This file contains the outcome of the judgements and used for training of text classify model.

4) FinalRanking.csv
This file contains ranked lawyers with their corresponding scores in descending order.



# Instructions to run the complete project.
Step 1 - Download Dewansaab.zip from the link -  

    https://drive.google.com/file/d/13dUOGoXE3OuyudjFcm9VTyF463qa4RQh/view?usp=sharing

Step 2 - Unzip Dewansaab.zip file
Step 3 - Open command prompt and change the present working directory (pwd) to Dewansaab/FilesPython
         
            >  'cd path to the Dewansaab/FilesPython'
               
               eg :- 'cd  /Users/mohit/Desktop/Dewansaab/FilesPython'

Step 4 - Activate the virtual environment InternshipPro using the command below 
  
            >   'source ../InternshipPro/bin/activate'

Step 5 - To run the complete internship project please use the following command
 
            > 'python run.py'
                                
Step 6 - To read the resultant *.pkl files use the given command 
 
            > 'python test.py filename'
                                    
                    eg :- 'python test.py winloss'
                                                    
                                    
       Note : If any other virtual environment is already running on system should be turned         off before activating the above virtual environment.

<br>
<img height="700" src="https://drive.google.com/file/d/10hVczpjNin7Aif_am_gdpywYDrleDeVl/view?usp=sharing"  />
<br>
