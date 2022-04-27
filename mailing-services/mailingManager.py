import smtplib
from message import message
form top_secret import sender_address, sender_pass, receiver_address
from email.mime.multipart import MIMEMultipart

class Mailing:
    def __init__(self, sender: str, sender_pass: str, recievers: list, message: MIMEMultipart):
        self.sender = sender
        self.sender_pass = sender_pass
        self.recievers = recievers
        self.message = message

    def sendMassage(self):
        session = smtplib.SMTP('smtp.gmail.com', 587) #use gmail with port
        session.starttls() #enable security
        session.login(self.sender, self.sender_pass) #login with mail_id and password
        text = message.as_string()
        session.sendmail(sender_address, receiver_address, text)
        session.quit()



#teslaMaxCyclone = Mailing(sender_address, sender_pass, [receiver_address], message)
#teslaMaxCyclone.sendMassage()
#print('Mail Sent')
