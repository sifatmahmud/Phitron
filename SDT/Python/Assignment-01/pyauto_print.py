import pyautogui
import time

n = int(input())
time.sleep(2)

pyautogui.write(str(n))
pyautogui.write('\n')
i = 1
while i <= n:
    pyautogui.write('#' * i)
    pyautogui.write('\n')
    i += 1
