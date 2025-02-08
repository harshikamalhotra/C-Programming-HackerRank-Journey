// If-Else_Angle Classification
// A boy is playing with a clock, and initially, the clock points at 12:00. He rotates the hour hand by a given angle, x degrees. Your task is to classify the resulting angle formed between the hour hand and the minute hand based on the following rules:

// Acute Angle: An angle less than 90 degrees.
// Right Angle: An angle exactly equal to 90 degrees.
// Obtuse Angle: An angle between 90 degrees and 180 degrees.
// Straight Angle: An angle exactly equal to 180 degrees.
// Reflex Angle: An angle greater than 180 degrees but less than 360 degrees.
// Full Rotation: An angle exactly equal to 360 degrees.
// Write a program to determine the type of angle formed between the hour hand and minute hand.

// Note:

// The minute hand does not move when the hour hand is rotated. Only the hour hand rotation is considered.
// The boy may rotate the hour hand more than 1 rotation.
// If the boy decides not to rotate the hour hand at all, then assume the result as Acute Angle.

#include <stdio.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int angle;
    scanf("%d", &angle);

    if (angle > 360 && angle % 360 != 0)
    {
        angle = angle % 360;
    }

    if (angle >= 0 && angle < 90)
    {
        printf("Acute Angle");
    }
    else if (angle == 90)
    {
        printf("Right Angle");
    }
    else if (angle > 90 && angle < 180)
    {
        printf("Obtuse Angle");
    }
    else if (angle == 180)
    {
        printf("Straight Angle");
    }
    else if (angle > 180 && angle < 360)
    {
        printf("Reflex Angle");
    }
    else if (angle == 360 || angle % 360 == 0)
    {
        printf("Full Rotation");
    }
    return 0;
}
