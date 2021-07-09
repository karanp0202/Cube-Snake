import('./Web/js/p5.js');

class Vector3 {
    angleX = 0;
    angleY = 0;
    angleZ = 0;
}

let angle = new Vector3;

function setup() {
    createCanvas(800, 500, WEBGL);
    perspective(PI / 5.0, width / height, 0.1, 5000);
}

function mousePressed() {

}

function draw() {
    clear();
    translate(0,0, -200);
    rotateX(angle.angleX);
    rotateY(angle.angleY);
    rotateZ(angle.angleZ);
    noStroke();
    baseCube();
    // rotateGL();
}

function baseCube() {
    translate(0,0, 100);
    fill(252, 142, 134);
    box(200, 200, 0);

    translate(0,0, -200);
    fill(252, 240, 134);
    box(200, 200, 0);

    translate(100,0, 100);
    fill(134, 252, 167);
    box(0, 200, 200);
    
    translate(-200,0, 0);
    fill(154, 183, 255);
    box(0, 200, 200);

    translate(100, -100, 0);
    fill(219, 134, 252);
    box(200, 0, 200);

    translate(0, 200, 0);
    fill(252, 134, 197);
    box(200, 0, 200);
}

function rotateGL() {
    angle.angleX += 0.01;
    angle.angleY += 0.01;
    angle.angleZ += 0.01;
}