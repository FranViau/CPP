tiempo = input()
hora = int(tiempo[0:2])
hora = hora % 12
minutos = int(tiempo[3:])
angMinutos = 6*minutos
angHora = float(30*hora + 0.5*float(minutos))
print(angHora, angMinutos)

"""
Do you remember a kind cartoon "Beauty and the Beast"? No, no, there was no firing from machine guns or radiation mutants time-travels!

There was a beauty named Belle. Once she had violated the Beast's order and visited the West Wing. After that she was banished from the castle...

Everybody was upset. The beautiful Belle was upset, so was the Beast, so was Lumiere the candlestick. But the worst thing was that Cogsworth was upset. Cogsworth is not a human, but is the mantel clock, which was often used as an alarm clock.

Due to Cogsworth's frustration all the inhabitants of the castle were in trouble: now they could not determine when it was time to drink morning tea, and when it was time for an evening stroll.

Fortunately, deep in the basement are lying digital clock showing the time in the format HH:MM. Now the residents of the castle face a difficult task. They should turn Cogsworth's hour and minute mustache hands in such a way, that Cogsworth began to show the correct time. Moreover they need to find turn angles in degrees for each mustache hands. The initial time showed by Cogsworth is 12:00.

You can only rotate the hands forward, that is, as is shown in the picture:


As since there are many ways too select such angles because of full rotations, choose the smallest angles in the right (non-negative) direction.

Note that Cogsworth's hour and minute mustache hands move evenly and continuously. Hands are moving independently, so when turning one hand the other hand remains standing still.

Input
The only line of input contains current time according to the digital clock, formatted as HH:MM (00 ≤  HH  ≤ 23, 00 ≤  MM  ≤ 59). The mantel clock initially shows 12:00.

Pretests contain times of the beginning of some morning TV programs of the Channel One Russia.

Output
Print two numbers x and y — the angles of turning the hour and minute hands, respectively (0 ≤ x, y < 360). The absolute or relative error in the answer should not exceed 10 - 9.
"""