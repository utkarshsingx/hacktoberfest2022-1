import img2pdf #must install this module before using
import sys
import os

filepath = sys.argv[1]
if os.path.isdir(filepath):
    with open("output.pdf", "wb") as f:
        imgs = []
        for fname in os.listdir(filepath):
            if not fname.endswith(".jpg"):
                continue
            path = os.path.join(filepath, fname)
            if os.path.isdir(path):
                continue
            imgs.append(path)
        f.write(img2pdf.convert(imgs))
elif os.path.isfile(filepath):
    if filepath.endswith(".jpg"):
        with open("output.pdf", "wb") as f:
            f.write(img2pdf.convert(filepath))
else:
    print("File/Dir: ")
    
    
    
    
    
    
    
    
