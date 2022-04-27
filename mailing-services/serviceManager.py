import pandas as pd
from datetime import date, datetime, timedelta
from mailingManager import MailingManager
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText

from top_secret import sender_address, app_pass, roommates

class ServiceManager(MailingManager):
    def __init__(self, sender: str, app_pass: str, recipients: dict): 
        MailingManager.__init__(self, sender, app_pass, roommates)
        self.services = ("Kuchyn + setrit", "Koupelny", "Luxovani")
        self.getDates()
        for key, date in self.dates.items():
            print(key, date)
        self.createAndSendMessageBody()


    @staticmethod
    def getWeekNumber():
        return date.today().isocalendar()[1]

    def createAndSendMessageBody(self):
        self.assignChores()
        for key, chore in self.chores_assigned.items():
            message = MIMEMultipart()
            message['From'] = "{} <{}>".format("Sluzby Byt", self.sender)
            message['To'] = self.addresses_to[key]
            message['Subject'] = 'Sluzby {}. tyden'.format(self.getWeekNumber()) #The subject line
            mail_content = """Pic,
            Tenhle tyden ({} - {}) te ceka 
            {}
            Dik""".format(self.dates['monday'].strftime("%d. %m."), self.dates['sunday'].strftime("%d. %m."), chore)
            message.attach(MIMEText(mail_content, 'plain'))
            try:
                self.sendMassage(self.addresses_to[key], message)
                print("Message sent!")
            except Exception as e:
                print(e)

    def assignChores(self):
        self.chores_assigned = {}
        week_no = self.getWeekNumber()
        for key in self.addresses_to.keys():
            self.chores_assigned[key] = self.services[week_no % 3]


    def getDates(self):
        self.dates = {}
        days_in_week = 8
        today = datetime.today()
        day_no = today.isoweekday()
        delta_to_next_monday = days_in_week - day_no
        self.dates['monday'] = today + timedelta(days=delta_to_next_monday)
        self.dates['sunday'] = today + timedelta(days=delta_to_next_monday + days_in_week - 2)

if __name__ == "__main__":
    ServiceManager(sender_address, app_pass, roommates)
