normalize = (angle) => {
    // to normalise the angles
    if (angle.X > 360) angle.X -= 360;
    if (angle.Y > 360) angle.Y -= 360;
    if (angle.Z > 360) angle.Z -= 360;
    if (angle.X < 0.0) angle.X += 360;
    if (angle.Y < 0.0) angle.Y += 360;
    if (angle.Z < 0.0) angle.Z += 360;
    return angle;
}

stretch = (angle) => {
    // to tilt the cube as snake position on frame
    switch (cube.frame) {
        case 0:
            angle.X -= (snake.pos.X / 15.0);
            angle.Y += (snake.pos.Y / 15.0);
            break;
        case 1:
            angle.X += (snake.pos.X / 15.0);
            angle.Y += (snake.pos.Y / 15.0);
            break;
        case 2:
            angle.X += (snake.pos.Z / 15.0);
            angle.Z += (snake.pos.Y / 15.0);
            break;
        case 3:
            angle.X -= (snake.pos.Z / 15.0);
            angle.Z -= (snake.pos.Y / 15.0);
            break;
        case 4:
            angle.Y += (snake.pos.Z / 15.0);
            angle.Z += (snake.pos.X / 15.0);
            break;
        case 5:
            angle.Y -= (snake.pos.Z / 15.0);
            angle.Z -= (snake.pos.X / 15.0);
            break;
    }
    return angle;
}

setFrame = (angle) => {
    // pull cube to the angle of active frame
    switch (cube.frame) {
        case 0:
            // for angle 0.00
            if (angle.X > 0.0 && angle.X <= 180.0) angle.X -= angle.X / 20.0;
            if (angle.X >= 180.0 && angle.X < 360) angle.X += (360 - angle.X) / 20.0;
            if (angle.Y > 0.0 && angle.Y <= 180.0) angle.Y -= angle.Y / 20.0;
            if (angle.Y >= 180.0 && angle.Y < 360) angle.Y += (360 - angle.Y) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
        case 1:
            // for angle 180.00
            if (angle.X >= 0.0 && angle.X < 180.0) angle.X += (180.0 - angle.X) / 20.0;
            if (angle.X > 180.0 && angle.X <= 360) angle.X -= (angle.X - 180.0) / 20.0;
            if (angle.Y > 0.0 && angle.Y <= 180.0) angle.Y -= angle.Y / 20.0;
            if (angle.Y >= 180.0 && angle.Y < 360) angle.Y += (360 - angle.Y) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
        case 2:
            // for angle 90.00
            if (angle.X >= 0.0 && angle.X < 90.0) angle.X += (90.0 - angle.X) / 20.0;
            if (angle.X > 90.0 && angle.X <= 270.0) angle.X -= (angle.X - 90.0) / 20.0;
            if (angle.X >= 270.0 && angle.X <= 360) angle.X += (450.0 - angle.X) / 20.0;
            if (angle.Y > 0.0 && angle.Y <= 180.0) angle.Y -= angle.Y / 20.0;
            if (angle.Y >= 180.0 && angle.Y < 360) angle.Y += (360 - angle.Y) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
        case 3:
            // for angle 270.00
            if (angle.X >= 0.0 && angle.X <= 90.0) angle.X -= (angle.X + 90.0) / 20.0;
            if (angle.X >= 90.0 && angle.X < 270.0) angle.X += (270.0 - angle.X) / 20.0;
            if (angle.X > 270.0 && angle.X <= 360) angle.X -= (angle.X - 270.0) / 20.0;
            if (angle.Y > 0.0 && angle.Y <= 180.0) angle.Y -= angle.Y / 20.0;
            if (angle.Y >= 180.0 && angle.Y < 360) angle.Y += (360 - angle.Y) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
        case 4:
            if (angle.X > 0.0 && angle.X <= 180.0) angle.X -= angle.X / 20.0;
            if (angle.X >= 180.0 && angle.X < 360) angle.X += (360 - angle.X) / 20.0;
            if (angle.Y >= 0.0 && angle.Y < 90.0) angle.Y += (90.0 - angle.Y) / 20.0;
            if (angle.Y > 90.0 && angle.Y <= 270.0) angle.Y -= (angle.Y - 90.0) / 20.0;
            if (angle.Y >= 270.0 && angle.Y <= 360) angle.Y += (450.0 - angle.Y) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
        case 5:
            if (angle.X > 0.0 && angle.X <= 180.0) angle.X -= angle.X / 20.0;
            if (angle.X >= 180.0 && angle.X < 360) angle.X += (360 - angle.X) / 20.0;
            if (angle.Y >= 0.0 && angle.Y <= 90.0) angle.Y -= (angle.Y + 90.0) / 20.0;
            if (angle.Y >= 90.0 && angle.Y < 270.0) angle.Y += (270.0 - angle.Y) / 20.0;
            if (angle.Y > 270.0 && angle.Y <= 360) angle.Y -= (angle.Y - 270.0) / 20.0;
            if (angle.Z > 0.0 && angle.Z <= 180.0) angle.Z -= angle.Z / 20.0;
            if (angle.Z >= 180.0 && angle.Z < 360) angle.Z += (360 - angle.Z) / 20.0;
            break;
    }
    angle = this.stretch(angle);
    return angle;
}

class Cube {
    constructor(X,Y,Z) {
        this.frame = 0;
        this.size = new Vector3(X, Y, Z);
        this.angle = new Vector3(0, 0, 0);
    }
    renderCube = () => {
        
        translate(0, 0, this.size.Z / 2);
        fill(252, 142, 134); box(this.size.X, this.size.Y, 0);
        translate(0, 0, -this.size.Z);
        fill(252, 240, 134); box(this.size.X, this.size.Y, 0);
        translate(this.size.X / 2, 0, this.size.Z / 2);
        fill(134, 252, 167); box(0, this.size.Y, this.size.Z);
        translate(-this.size.X, 0, 0);
        fill(154, 183, 255); box(0, this.size.Y, this.size.Z);
        translate(this.size.X / 2, -this.size.Y / 2, 0);
        fill(219, 134, 252); box(this.size.X, 0, this.size.Z);
        translate(0, this.size.Y, 0);
        fill(252, 134, 197); box(this.size.X, 0, this.size.Z);
        translate(0, -this.size.Y/2, 0);
    }
    rotateCube = () => {
        // this.angle.X += 0.01;
        // this.angle.Y += 0.01;
        // this.angle.Z += 0.01;
        
        this.angle = normalize(this.angle);
        this.angle = setFrame(this.angle);
    }
}