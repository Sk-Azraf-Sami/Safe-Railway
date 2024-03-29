# Arduino Railway Safety Project

[![Last Update](https://img.shields.io/badge/Last%20Update-February%2024%2C%202024-blue)](https://github.com/yourusername/your-repo)
[![Using Technology](https://img.shields.io/badge/Using%20Technology-Arduino-orange)](https://github.com/yourusername/your-repo)

Welcome to the Arduino Railway Safety Project! This project aims to enhance railway safety with three key features: automatic crossing bar, platform safety, and train coming alert.


https://github.com/Sk-Azraf-Sami/Safe-Railway/assets/106574604/e6bf1c83-e490-415d-ac50-dd65619dbbc6

https://github.com/Sk-Azraf-Sami/Safe-Railway/assets/106574604/793a9852-924e-4174-b7ad-de6a7f8257dd

<figure>
  <img src="https://github.com/Sk-Azraf-Sami/Safe-Railway/raw/main/assets/3.jpeg" alt="Image 3" >
</figure>
<br/>
<br/>
<figure>
  <img src="https://github.com/Sk-Azraf-Sami/Safe-Railway/raw/main/assets/4.jpeg" alt="Image 4">
</figure>

## Features

1. **Automatic Crossing Bar:**
   - Automatically lowers the crossing bar when a train is approaching to prevent traffic from crossing the railway.

2. **Platform Safety:**
   - Ensures safety on railway platforms by alerting passengers about approaching trains and preventing accidents.

3. **Train Coming Alert:**
   - Detects the approach of trains and alerts nearby individuals to ensure their safety.

## Issue Resolution

**Issue:** We encountered a problem where the sonar sensor would detect any object as a train, leading to the crossing bar being lowered unnecessarily.

**Solution:**
   - Implemented a load module to distinguish between trains and other objects based on weight.
   - By cross-checking the weight detected by the load module, we can accurately determine if a train is approaching and lower the crossing bar accordingly.

## Version

This is version 1.0 of the Arduino Railway Safety Project.

## Components 

- Arduino Uno
- Breadboard
- Male-to-Male & Male-to-female jumper wires
- Load cell & load module
- Servo Motor
- Ultrasonic Distance Sensor (HC-SR04)
- Buzzer
- LED

## Usage

To use this project, follow these steps:
1. Connect the Arduino board to the required sensors and modules.
2. Upload the provided code to the Arduino board.
3. Ensure proper calibration of sensors and modules.
4. Monitor the system for railway safety.

## Contributing

Meet our team:

- [Shureed Shazzad](https://github.com/shureedshazzad)
- [Sk. Azraf Sami](https://github.com/Sk-Azraf-Sami)

Contributions to the Arduino Railway Safety Project are welcome! If you would like to contribute, please follow these guidelines:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your-feature-name`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add some feature'`).
5. Push to the branch (`git push origin feature/your-feature-name`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Documentation

For detailed documentation, please refer to [Documentation](https://github.com/Sk-Azraf-Sami/Safe-Railway/blob/main/Safe-Railway.pdf).

## Contact

If you have any questions or suggestions, feel free to contact with me or with my teammate 
