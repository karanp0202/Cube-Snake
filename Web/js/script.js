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
    fill(255, 0, 0);
    translate(0,0, -200);
    rotateX(angle.angleX);
    rotateY(angle.angleY);
    rotateZ(angle.angleZ);
    translate(0,0, 100);
    box(200, 200, 1);
    translate(0,0, -200);
    box(200, 200, 1);
    angle.angleX += 0.01;
    angle.angleY += 0.01;
    angle.angleZ += 0.01;
}