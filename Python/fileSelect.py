import tkinter as tk
from tkinter import filedialog
window = tk.Tk()
window.title("文件选择对话框示例")
window.withdraw()

#FolderName = filedialog.askdirectory()
FileName = filedialog.askopenfilename()


# if len(FileName) == 0 :
#     print('未找到文件夹')
# else :
#     print("文件是:",FileName)

if len(FileName) == 0 :
    print('未找到文件')
else :
    print("文件是:",FileName)