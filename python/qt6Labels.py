import sys
from PyQt6.QtWidgets import QApplication, QWidget, QPushButton, QLabel

def função1():
    label.setText("Botão 1 pressionado")
    label.adjustSize()

app = QApplication(sys.argv)

janela = QWidget()
janela.resize(800,600)
janela.setWindowTitle("Janela principal")

btn = QPushButton("Botão 1", janela)
btn.setGeometry(100,100, 150,80)
btn.clicked.connect(função1)
#btn.setStyleSheet('background-color:blue;color:white')


label = QLabel("Texto", janela)
label.move(400, 100)
label.setStyleSheet('font-size:25px')
janela.show()

app.exec()