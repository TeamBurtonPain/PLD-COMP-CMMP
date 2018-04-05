import os

def getFiles(dossier):
    files = os.listdir("./"+dossier)
    filesFull = [dossier+"/"+i for i in files]
    return filesFull

def genTestFront(filecmmp, stream, valid):

    stream.write("\tTEST(testFront,"+filecmmp.upper().replace("/","").replace(".","")+"){\n\t\ttestFront::testReturnFront no_error;\n")
    stream.write("\t\tEXPECT_"+ ("EQ" if valid else "NE") +"(testFront::testFront(\""+filecmmp+"\"),no_error);\n")
    stream.write("\t}\n")


if __name__ == "__main__":
    files = getFiles("ValidPrograms")
    stream_cpp = open( "testFront.cpp", "a")
    stream_cpp.write("//code généré par gen_test.py\n")
    stream_cpp.write("namespace{\n")
    for f in files:
        genTestFront(f, stream_cpp, True)
    stream_cpp.write("}\n")

    files = getFiles("LexError")
    stream_cpp = open( "testFront.cpp", "a")
    stream_cpp.write("//code généré par gen_test.py\n")
    stream_cpp.write("namespace{\n")
    for f in files:
        genTestFront(f, stream_cpp, False)
    stream_cpp.write("}\n")

    files = getFiles("SemanticError")
    stream_cpp = open( "testFront.cpp", "a")
    stream_cpp.write("//code généré par gen_test.py\n")
    stream_cpp.write("namespace{\n")
    for f in files:
        genTestFront(f, stream_cpp, False)
    stream_cpp.write("}\n")

    files = getFiles("SyntaxError")
    stream_cpp = open( "testFront.cpp", "a")
    stream_cpp.write("//code généré par gen_test.py\n")
    stream_cpp.write("namespace{\n")
    for f in files:
        genTestFront(f, stream_cpp, False)
    stream_cpp.write("}\n")