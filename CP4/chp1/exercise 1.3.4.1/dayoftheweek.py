""" Given a date (in the past), determine the day of the week on that day 
and the number of day(s) that has elapsed since that day until present.
 """

from datetime import date 
s = date(2010, 8, 9) 
# class = date(year, month, day)
t = date.today()
# Returns current local date
# equivalent to date.fromtimestamp(time.time())
print(s.strftime("%a")) # 'Mon', %A for 'Monday' %a is short for "abbreviated weekday name"
# date.strftime(format)
#Return a string representing the date, controlled by an explicit format string
#
print("{} day(s) ago".format((t-s).days)) # ans grows over time
#str.format(*args, **kwargs)
# The string on which this method is called can contain literal text or replacement fields delimited by braces {}.
# Replacement field contains either numeric index of a positional argument or the name of a keywrod arguemtn
# REturns a copy of the string where each replacement field is replaced with the string value of the corresponding argument
