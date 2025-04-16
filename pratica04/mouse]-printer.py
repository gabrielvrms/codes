from ctypes import windll, Structure, c_long, byref
import time
import msvcrt

class Point(Structure):
    fields = [("x", c_long), ("y", c_long)]

def query_mouse_position():
    pt = Point()
    windll.user32.GetCursorPos(byref(pt))
    return {"x": pt.x, "y": pt.y}

if _name_ == "_main_":
  
  while True:
    pos = query_mouse_position()
    x, y = pos["x"], pos["y"]
    if x < 960 and y < 540:
            quadrante = "A"
    elif x >= 960 and y < 540:
            quadrante = "B"
    elif x < 960 and y >= 540:
            quadrante = "C"
    else:
            quadrante = "D"
    print(f"Mouse Position: x={x}, y={y} - Quadrante: {quadrante}")
    time.sleep(0.1)  # Adjust delay as needed

    if msvcrt.kbhit():
        if msvcrt.getch() == b'\x1b':
            break