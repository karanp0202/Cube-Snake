class keyBoard {
    constructor() { }

    UPKey() {
        console.log("W key pressed !");
        switch (cube.frame) {
            case 0:
                snake.speed.X = 0.0;
                snake.speed.Y = snake.Speed;
                return;
            case 1:
                snake.speed.X = 0.0;
                snake.speed.Y = snake.Speed;
                break;
            case 2:
                snake.speed.Z = 0.0;
                snake.speed.Y = snake.Speed;
                break;
            case 3:
                snake.speed.Z = 0.0;
                snake.speed.Y = snake.Speed;
                break;
            case 4:
                snake.speed.X = 0.0;
                snake.speed.Z = snake.Speed;
                break;
            case 5:
                snake.speed.X = 0.0;
                snake.speed.Z = -snake.Speed;
                break;
        }
    }
    
    DOWNKey() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = 0.0;
                snake.speed.Y = -snake.Speed;
                return;
            case 1:
                snake.speed.X = 0.0;
                snake.speed.Y = -snake.Speed;
                break;
            case 2:
                snake.speed.Z = 0.0;
                snake.speed.Y = -snake.Speed;
                break;
            case 3:
                snake.speed.Z = 0.0;
                snake.speed.Y = -snake.Speed;
                break;
            case 4:
                snake.speed.X = 0.0;
                snake.speed.Z = -snake.Speed;
                break;
            case 5:
                snake.speed.X = 0.0;
                snake.speed.Z = snake.Speed;
                break;
        }
    }
    
    LEFTKey() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = snake.Speed;
                snake.speed.Y = 0.0;
                return;
            case 1:
                snake.speed.X = -snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 2:
                snake.speed.Z = -snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 3:
                snake.speed.Z = snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 4:
                snake.speed.X = snake.Speed;
                snake.speed.Z = 0.0;
                break;
            case 5:
                snake.speed.X = snake.Speed;
                snake.speed.Z = 0.0;
                break;
        }
    }
    
    RIGHTKey() {
        switch (cube.frame) {
            case 0:
                snake.speed.X = -snake.Speed;
                snake.speed.Y = 0.0;
                return;
            case 1:
                snake.speed.X = snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 2:
                snake.speed.Z = snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 3:
                snake.speed.Z = -snake.Speed;
                snake.speed.Y = 0.0;
                break;
            case 4:
                snake.speed.X = -snake.Speed;
                snake.speed.Z = 0.0;
                break;
            case 5:
                snake.speed.X = -snake.Speed;
                snake.speed.Z = 0.0;
                break;
        }    
    }
}