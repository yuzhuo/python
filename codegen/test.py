import re


pattern = re.compile("zhang")

match = pattern.match("zhangsan")

if match:
    print type(match.group())