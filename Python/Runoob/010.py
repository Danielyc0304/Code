import time

print(time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(time.time())))#輸出時間

time.sleep(1)#暫停一秒

print(time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(time.time())))#輸出時間