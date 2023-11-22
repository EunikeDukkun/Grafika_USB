import turtle

def draw_square():
    for _ in range(4):
        turtle.forward(100)
        turtle.left(90)

def draw_brain(rows, columns):
    start_x, start_y = turtle.position()

    for _ in range(rows):
        for _ in range(columns):
            draw_square()
            turtle.forward(100)  # Spasi antar kotak

        turtle.penup()
        turtle.goto(start_x, turtle.ycor() - 100)  # Kembali ke awal baris
        turtle.pendown()

    turtle.penup()
    turtle.goto(start_x, start_y)  # Kembali ke posisi awal
    turtle.pendown()

def main():
    turtle.speed(2)  # Kecepatan turtle

    # Move to the center of the screen
    turtle.penup()
    turtle.goto(-150, 150)
    turtle.pendown()

    draw_brain(5, 5)  # Menampilkan kotak dengan 3 baris dan 4 kolom
    turtle.exitonclick()

if __name__ == "__main__":
    main()