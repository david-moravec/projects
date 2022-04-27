import pandas as pd
from datetime import date, datetime, timedelta
from mailingManager import Mailing

class ServiceManager:
    def __init__(self, service_file: str): 
        self.services = pd.read_csv(service_file)
        print(self.services.iloc[self.getWeekNumber() + 1])
        self.getDates()


    @staticmethod
    def getWeekNumber():
        return date.today().isocalendar()[1]

    def getDates(self):
        self.dates = {}
        days_in_week = 8
        today = datetime.today()
        day_no = today.isoweekday()
        delta_to_next_monday = days_in_week - day_no
        self.dates['monday'] = today + timedelta(days=delta_to_next_monday)
        self.dates['sunday'] = today + timedelta(days=delta_to_next_monday + days_in_week - 2)

ServiceManager("./sluzby.csv")
