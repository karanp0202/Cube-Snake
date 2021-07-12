class Vector3 {
    constructor(X, Y, Z) {
        this.X = X;
        this.Y = Y;
        this.Z = Z;
    }
}

snake = new Snake;
tail = new Tail;
cube = new Cube(40, 40, 40);
keyboard = new keyBoard;

function setup() {
    createCanvas(600, 600, WEBGL);
    angleMode(DEGREES);
    perspective(30, width / height, 0.1, 500);
    frameRate(60);
    tail.addTail(50);
}

function draw() {
    clear();
    translate(0,0, 360);
    rotateX(-cube.angle.Y);
    rotateY(-cube.angle.X);
    rotateZ(cube.angle.Z);
    
    noStroke();

    snake.changePos();
    snake.renderFace();
    
    cube.rotateCube();
    cube.renderCube();

    tail.update();
    tail.renderTail();

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
        case 81:
            document.getElementById("defaultCanvas0").remove();
            break;
    }
}