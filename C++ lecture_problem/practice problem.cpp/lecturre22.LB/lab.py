import cv2
import numpy as np

# Create a white canvas
img1 = np.ones((300,300,3), dtype="uint8") * 255

# Draw four black squares (corner pattern)
cv2.rectangle(img1, (50,50), (80,80), (0,0,0), -1)
cv2.rectangle(img1, (220,50), (250,80), (0,0,0), -1)
cv2.rectangle(img1, (50,220), (80,250), (0,0,0), -1)
cv2.rectangle(img1, (220,220), (250,250), (0,0,0), -1)

# Display first image
cv2.imshow("Corner Pattern", img1)


# Create second image for grid pattern
img2 = np.ones((300,300,3), dtype="uint8") * 255

# Draw vertical lines
for x in range(50, 300, 50):
    cv2.line(img2, (x,0), (x,300), (0,0,0), 3)

# Draw horizontal lines
for y in range(50, 300, 50):
    cv2.line(img2, (0,y), (300,y), (0,0,0), 3)

# Display grid image
cv2.imshow("Grid Pattern", img2)

cv2.waitKey(0)
cv2.destroyAllWindows()