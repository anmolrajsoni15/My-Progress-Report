import os

def Soldier(path, file, format):
    os.chdir(path)
    files = os.listdir(path)

    with open(file) as f:
        filelist = f.read().split("\n")
    
    pointer = 1

    for file in files:
        if file not in filelist:
            os.rename(file, file.capitalize())
        if os.path.splitext(file)[1] == format:
            os.rename(file, f"video_0{pointer}{format}")
            pointer+=1

Soldier(r"E:\New folder\family", r"D:\Python code\except_this.txt", ".mp4")


