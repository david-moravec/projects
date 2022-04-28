import smtplib
from email.mime.multipart import MIMEMultipart

class MailingManager:
    def __init__(self, sender: str, sender_pass: str, recipients: dict):
        self.sender = sender
        self.sender_pass = sender_pass
        self.addresses_to = recipients

    def startSession(self):
        print("Starting session\n\n")
        self.session = smtplib.SMTP('smtp.gmail.com', 587) #use gmail with port
        self.session.starttls() #enable security
        self.session.login(self.sender, self.sender_pass) #login with mail_id and password

    def endSession(self):
        print("\n\nEnding mailing session")
        self.session.quit()

    def sendMassage(self, reciever: str, message):
        text = message.as_string()
        self.session.sendmail(self.sender, reciever, text)
