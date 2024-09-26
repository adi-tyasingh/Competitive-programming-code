import requests
import json
host = "http://model.echelonify.com"

def text2img(params: dict) -> dict:
    """
    text to image
    """
    result = requests.post(url=f"{host}/v1/generation/text-to-image",
                           data=json.dumps(params),
                           headers={"Content-Type": "application/json"})
    return result.json()

result =text2img({
    "prompt": "1girl sitting on the ground",
    "async_process": True})
print(result)