import sys

from PyQt6.QtWidgets import (
    QApplication, 
    QMainWindow,
    QPushButton,
)

from random import choice

window_titles = [
    "my App",
    "my App",
    "Still my app",
    "Still my app",
    "What On Earth",
    "What On Earth",
    "Fuck you",
    "Fuck you",
    "Suprise!",
    "Suprise!",
    "something got fucked up",
]

class MainWindow(QMainWindow):
    def __init__(self) -> None:
        super().__init__()

        self.button_checked = True

        self.setWindowTitle("My App")

        self.button = QPushButton("Press Me")
        self.button.clicked.connect(self.button_clicked)
        self.windowTitleChanged.connect(self.title_changed)

        self.setCentralWidget(self.button)


    def button_clicked(self) -> None:
        print(f'The button was clicked')
        title: str = choice(window_titles)
        print(f'setting title to {title}')
        self.setWindowTitle(title)


    def title_changed(self) -> None:
        print(f'Title changed to: {self.windowTitle()}')

        if self.windowTitle() == window_titles[-1]:
            self.button.setDisabled(True)


app = QApplication(sys.argv)

window = MainWindow()
window.show()


app.exec()