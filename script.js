class Vector3 {
    constructor(X, Y, Z) {
        this.X = X;
        this.Y = Y;
        this.Z = Z;
    }
}

class Snake {
    constructor() {
        this.pos = new Vector3(0,0,-21);
    }
    renderFace = () => {
        translate(0, -20, 0);
        translate(-this.pos.X, -this.pos.Y, -this.pos.Z);
        box(2);
        translate(this.pos.X, this.pos.Y,this.pos.Z);
    }
}

class Cube {
    constructor(X,Y,Z) {
        this.sizeX = X;
        this.sizeY = Y;
        this.sizeZ = Z;
        this.angle = new Vector3(0, 0, 0);
    }
    renderCube() {
        noStroke();
        
        translate(0, 0, this.sizeZ / 2);
        fill(252, 142, 134); box(this.sizeX, this.sizeY, 0);
        translate(0, 0, -this.sizeZ);
        fill(252, 240, 134); box(this.sizeX, this.sizeY, 0);
        translate(this.sizeX / 2, 0, this.sizeZ / 2);
        fill(134, 252, 167); box(0, this.sizeY, this.sizeZ);
        translate(-this.sizeX, 0, 0);
        fill(154, 183, 255); box(0, this.sizeY, this.sizeZ);
        translate(this.sizeX / 2, -this.sizeY / 2, 0);
        fill(219, 134, 252); box(this.sizeX, 0, this.sizeZ);
        translate(0, this.sizeY, 0);
        fill(252, 134, 197); box(this.sizeX, 0, this.sizeZ);
    }
    rotateCube() {
        this.angle.X += 0.01;
        this.angle.Y += 0.01;
        this.angle.Z += 0.01;
    }
}

this.snake = new Snake;
this.cube = new Cube(40, 40, 40);

function setup() {
    createCanvas(600, 600, WEBGL);
    const canvas = document.getElementById("defaultCanvas0");
    perspective(PI / 5.0, width / height, 0.1, 500);
}

function draw() {
    clear();
    translate(0,0, 380);
    rotateX(cube.angle.X);
    rotateY(cube.angle.Y);
    rotateZ(cube.angle.Z);

    cube.renderCube();
    
    fill(0, 0, 0);
    snake.renderFace();

    cube.rotateCube();
}