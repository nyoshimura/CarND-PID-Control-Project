# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
## Project Specification
There are 5 specifications:
#### 1. My code should compile (done)
#### 2. The PID procedure follows what was taught in the lessons (done)
#### 3. Describe the effect each of the P, I, D components had in my implementation
- P factor affects the response speed to reach target value, so it should be large to adapt tight curve.
- I factor improves the steady state error, but it is integral factor so should be small to assure quick response.
- D factor suppress the overshoot, but it is differential factor so should be small to reduce oscillating motion.
#### 4. Describe how the final hyperparameters were chosen
I tried twiddle approach, but mostly these are chosen by manual tuning (because it is fastest way). I started from PD gain tuning to drive a lap, then add I factor and tuned.
#### 5. The vehicle must successfully drive a lap around the track (done)
