class Vector3 {
    constructor(X, Y, Z) {
        this.X = X;
        this.Y = Y;
        this.Z = Z;
    }
}

class Snake {
    constructor() {
        this.Speed = 0.3;
        this.pos = new Vector3(0, 0, -21);
        this.speed = new Vector3(0, 0, 0);
    }
    renderFace = () => {
        translate(-this.pos.X, -this.pos.Y, -this.pos.Z);
        box(2);
        translate(this.pos.X, this.pos.Y,this.pos.Z);
    }
    changePos = () => {
        this.pos.X += this.speed.X;
        this.pos.Y += this.speed.Y;
        this.pos.Z += this.speed.Z;
    }
}

class Cube {
    constructor(X,Y,Z) {
        this.frame = 0;
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
        translate(0, -this.sizeY/2, 0);
    }
    rotateCube() {
        this.angle.X += 0.01;
        this.angle.Y += 0.01;
        this.angle.Z += 0.01;
    }
}

class keyBoard {
    constructor() {
        
    }

    UP_Key() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = 0.0;
                snake.speed.Y = snake.Speed;
        }
    }
    
    DOWN_Key() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = 0.0;
                snake.speed.Y = -snake.Speed;
        }
    }
    
    LEFT_Key() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = snake.Speed;
                snake.speed.Y = 0.0;
        }
    }
    
    RIGHT_Key() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = -snake.Speed;
                snake.speed.Y = 0.0;
        }    
    }
}

this.snake = new Snake;
this.cube = new Cube(40, 40, 40);
this.keyboard = new keyBoard;

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
    
    snake.changePos();
    fill(0, 0, 0);
    snake.renderFace();

    //cube.rotateCube();
}

function keyPressed() {
    switch (keyCode) {
        case 87:
            keyboard.UP_Key();
            break;
        case 83:
            keyboard.DOWN_Key();
            break;
        case 65:
            keyboard.LEFT_Key();
            break;
        case 68:
            keyboard.RIGHT_Key();
            break;
    }
}