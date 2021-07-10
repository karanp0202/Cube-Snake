class Vector3 {
    constructor(X, Y, Z) {
        this.X = X;
        this.Y = Y;
        this.Z = Z;
    }
}

snake = new Snake;
cube = new Cube(40, 40, 40);
keyboard = new keyBoard;

function setup() {
    createCanvas(600, 600, WEBGL);
    perspective(PI / 5.0, width / height, 0.1, 500);
    frameRate(60);
    angleMode(DEGREES);
}

function draw() {
    clear();
    translate(0,0, 410);
    rotateX(-cube.angle.Y);
    rotateY(-cube.angle.X);
    rotateZ(cube.angle.Z);

    cube.renderCube();
    
    snake.changePos();
    fill(0, 0, 0);
    snake.renderFace();

    cube.rotateCube();
}

function keyPressed() {
    switch (keyCode) {
        case 87:
            keyboard.UPKey();
            break;
        case 83:
            keyboard.DOWNKey();
            break;
        case 65:
            keyboard.LEFTKey();
            break;
        case 68:
            keyboard.RIGHTKey();
            break;
        case 48:
            cube.frame = 0;
            break;
        case 49:
            cube.frame = 1;
            break;
        case 50:
            cube.frame = 2;
            break;
        case 51:
            cube.frame = 3;
            break;
        case 52:
            cube.frame = 4;
            break;
        case 53:
            cube.frame = 5;
            break;
        case 81:
            document.getElementById("defaultCanvas0").remove();
            break;
    }
}