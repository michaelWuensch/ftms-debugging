# ftms-debugging

## requirements
- Linux
- QT Creator
- qt5-connectivity module

## setup environment
$ sudo apt update
$ sudo apt install qt5-qmake qtbase5-dev qt5-qmake-bin qtbase5-dev-tools build-essential qtconnectivity5-dev

## build
$ qmake FTMSTesting.pro
$ make

## run
- turn on bluetooth on the pc
- drag and drop FTMSTesting Program into terminal and hit enter (run as sudo for required ble permissions)
