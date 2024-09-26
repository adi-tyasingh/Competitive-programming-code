import requests
import base64

# Define the API endpoint
url = "http://4.240.106.246:5000/predictions"

# Define the JSON payload for the request
payload = {
    "input": {
        "alpha": 0.5,
        "prompt_a": "funky synth solo",
        "prompt_b": "90's rap",
        "denoising": 0.75,
        "seed_image_id": "vibes",
        "num_inference_steps": 50
    }
}

# Make a POST request to the API with the JSON payload
response = requests.post(url, json=payload)

# Check if the request was successful
if response.status_code == 200:
    # Parse the JSON response
    response_data = response.json()
    
    # Extract the base64-encoded audio string
    audio_base64 = response_data['output']['audio']
    
    # Strip the 'data:audio/x-wav;base64,' prefix from the base64 string
    audio_base64 = audio_base64.split(",")[1]
    
    # Decode the base64-encoded audio
    audio_data = base64.b64decode(audio_base64)
    
    # Save the audio to a file
    with open("output_audio.wav", "wb") as audio_file:
        audio_file.write(audio_data)
    
    print("Audio file saved as 'output_audio.wav'")
else:
    print(f"Failed to retrieve audio. Status code: {response.status_code}")
    print("Response:", response.text)
