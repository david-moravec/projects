from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

mail_content = """Hello,
This is a simple mail. There is only text, no attachments are there The mail is sent using Python SMTP library.
Thank You"""
#The mail addresses and password
sender_address = 'teslamaxcyclone@gmail.com'
sender_pass = 'NaDlouhemLanu9/71'
receiver_address = 'moravakovec@gmail.com'
#Setup the MIME
message = MIMEMultipart()
message['From'] = "{} <{}>".format("Sluzby Byt", sender_address)
message['To'] = receiver_address
message['Subject'] = 'A test mail sent by Python. It has an attachment.'   #The subject line
message.attach(MIMEText(mail_content, 'plain'))
