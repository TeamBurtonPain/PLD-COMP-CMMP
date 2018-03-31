import os

def getFiles(dossier):
    files = os.listdir("./"+dossier)
    filesFull = [dossier+"/"+i for i in files]
    return filesFull

def genTest(filecmmp, stream):
    stream.write("\t\tEXPECT_EQ(testFront::testFront(\""+filecmmp+"\"),no_error);\n")


if __name__ == "__main__":
    files = getFiles("ValidPrograms")
    stream_cpp = open( "testFront.cpp", "a")
    stream_cpp.write("//code généré par gen_test.py\n")
    stream_cpp.write("namespace{\n\tTEST(testFront, VALID){\n\t\ttestFront::testReturnFront no_error;\n")
    for f in files:
        genTest(f, stream_cpp)
    stream_cpp.write("\t}\n")
    stream_cpp.write("}\n")