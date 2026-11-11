import random

questions = {
    "What is 2 + 2?": "4",
    "What is 5 * 3?": "15",
}

score = 0
for question, answer in questions.items():
    user_answer = input(question + " ")
    if user_answer == answer:
        score += 1

print("Final score:", score)
