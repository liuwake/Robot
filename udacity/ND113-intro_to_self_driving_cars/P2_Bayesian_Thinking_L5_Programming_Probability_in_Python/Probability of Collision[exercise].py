def probability_of_collision(car_1, car_2):
    """
    Calculate the probablity of a collision based on the car turns
    Args:
        car_1 (string): The turning direction of car_1
        car_2 (string): The turning direction of car_2

    Returns:
        float: the probability of a collision
    """
    # car_1 and car_2 will each be strings whose value will either be
    # "L" for left, "S" for straight, or "R" for right.
    probability = 0.0  # you should change this value based on the directions.

    if car_1 == "L":
    # TODO your code here for when car 1 turns left
        pass
    elif car_1 == "S":
    # TODO your code here for when car 1 goes straight
        pass
    else:
    # TODO your code here for when car 1 turns right
        pass
    return probability


# This function is used to test the correctness of your code. You shouldn't
# touch any of the code below here (but feel free to look through it to
# understand what "correct" looks like).
def test():
    num_correct = 0

    p1 = probability_of_collision("L", "L")
    if p1 == 0.5:
        num_correct += 1

    p2 = probability_of_collision("L", "R")
    if p2 == 0.1:
        num_correct += 1

    p3 = probability_of_collision("L", "S")
    if p3 == 0.25:
        num_correct += 1

    p4 = probability_of_collision("S", "R")
    if p4 == 0.1:
        num_correct += 1

    print("You got", num_correct, "out of 4 correct")


test()
