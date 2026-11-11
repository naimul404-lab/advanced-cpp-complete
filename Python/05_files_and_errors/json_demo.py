import json

student = {"name": "Alice", "age": 25}
json_string = json.dumps(student)
print(json_string)

parsed = json.loads(json_string)
print(parsed["name"])
