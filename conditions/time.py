import datetime
currenttime = datetime.datetime.now()
hour = currenttime.hour

if hour < 12:
    print("good morning")
elif hour < 18:
    print("good afternoon")
else:
    print("good evening")

  

