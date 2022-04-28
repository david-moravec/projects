import smtplib
from email.mime.multipart import MIMEMultipart

class MailingManager:
    def __init__(self, sender: str, sender_pass: str, recipients: dict):
        self.sender = sender
        self.sender_pass = sender_pass
        self.addresses_to = recipients

    def sendMassage(self, reciever: str, message):
        session = smtplib.SMTP('smtp.gmail.com', 587) #use gmail with port
        session.starttls() #enable security
        session.login(self.sender, self.sender_pass) #login with mail_id and password
        text = message.as_string()
        session.sendmail(self.sender, reciever, text)
        session.quit()
