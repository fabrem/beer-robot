# The Beer Robot

This is a project that I started with a friend and with the only purpose of having fun. We started this project in the summer of 2019 to deepen our knowledge in robotics. The goal of this robot is simple: always serve the perfect beer! We came up with a design that we modelised in SketchUp, and we quickly started with the mechanical side of things.

image de la modélisation

image des photos de bobu

Our first idea was to open the beer bottle by spinning a dented wheel attached to a drill (here a hockey puck) and hence popping the cap when approaching the device. We quickly came to the conclusion that the horizontal force to apply between the cap and the dented wheel was simply too much to handle for a robot like ours.

mettre video de bobu si possible - photo sinon

After some research, we found that the direct force to apply in order to open the beer's cap was ~20 kPa (2.9 pound-force). Our workaround was to order two powerful linear actuators (able to push 125lbs each) and design a moving system so serving and decapsulating the beer wouldn't be a problem. The motor used to rotate the beer is a standard window motor you can find in older honda civic/subaru models (purchased online too).

new design

After numerous failed attemps, we managed to open our first beer!! :)

mettre video de la bière ouverte

Our robot is still a prototype, so our work is still in progress. All of the code used to move the robot is listed in this repo. As for the circuits, I used an Arduino Uno, two 12V DC motor controllers (L298N) and a 12V power supply (8 AA batteries in serial).





Sources:
https://www.youtube.com/watch?v=ut_lZWhz2LU
https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
https://www.banggood.com/Wholesale-L298N-Dual-H-Bridge-Stepper-Motor-Driver-Board-p-42826.html?rmmds=myorder&cur_warehouse=USA
https://www.banggood.com/DC-12V-200N-50-300mm-Stroke-Tubular-Motor-Linear-Actuator-Motor-p-1142871.html?rmmds=myorder&ID=515969&cur_warehouse=CN
https://www.amazon.ca/Dorman-742-815-Subaru-Driver-Window/dp/B00CPYAQBC/ref=asc_df_B00CPYAQBC/?tag=googleshopc0c-20&linkCode=df0&hvadid=292965422580&hvpos=1o6&hvnetw=g&hvrand=13952548413645323556&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9060806&hvtargid=pla-571705341035&psc=1