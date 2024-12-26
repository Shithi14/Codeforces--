from PIL import Image

# Open the image file
image = Image.open("image.png")

# Save the image with reduced quality
image.save("compressed_image.png", optimize=True, quality=50)
