class keyBoard {
    constructor() { }

    UPKey = () => {
        if (-snake.pos.X < cube.size.X / 2 + 0.4 && -snake.pos.X > -cube.size.X / 2 - 0.4
            && snake.speed.Y == 0)
            switch (cube.frame) {
                case 0:
                    snake.speed.X = 0.0;
                    snake.speed.Y = snake.Speed;
                    return;
                case 1:
                    snake.speed.X = 0.0;
                    snake.speed.Y = snake.Speed;
                    return;
            }
        if (-snake.pos.Z < cube.size.Z / 2 + 0.4 && -snake.pos.Z > -cube.size.Z / 2 - 0.4
            && snake.speed.Y == 0)
            switch (cube.frame) {
                case 2:
                    snake.speed.Z = 0.0;
                    snake.speed.Y = snake.Speed;
                    return;
                case 3:
                    snake.speed.Z = 0.0;
                    snake.speed.Y = snake.Speed;
                    return;
            }
            if (-snake.pos.X < cube.size.X / 2 + 0.4 && -snake.pos.X > -cube.size.X / 2 - 0.4
                && snake.speed.Z == 0)
                switch (cube.frame) {
                    case 4:
                        snake.speed.X = 0.0;
                        snake.speed.Z = snake.Speed;
                        return;
                    case 5:
                        snake.speed.X = 0.0;
                        snake.speed.Z = -snake.Speed;
                        return;
                }
    }
    
    DOWNKey = () => {
        if (-snake.pos.X < cube.size.X / 2 + 0.4 && -snake.pos.X > -cube.size.X / 2 - 0.4
            && snake.speed.Y == 0)
            switch (cube.frame) {
                case 0:
                    snake.speed.X = 0.0;
                    snake.speed.Y = -snake.Speed;
                    return;
                case 1:
                    snake.speed.X = 0.0;
                    snake.speed.Y = -snake.Speed;
                    return;
            }
        if (-snake.pos.Z < cube.size.Z / 2 + 0.4 && -snake.pos.Z > -cube.size.Z / 2 - 0.4
            && snake.speed.Y == 0)
            switch (cube.frame) {
                case 2:
                    snake.speed.Z = 0.0;
                    snake.speed.Y = -snake.Speed;
                    return;
                case 3:
                    snake.speed.Z = 0.0;
                    snake.speed.Y = -snake.Speed;
                    return;
            }
        if (-snake.pos.X < cube.size.X / 2 + 0.4 && -snake.pos.X > -cube.size.X / 2 - 0.4
            && snake.speed.Z == 0)
            switch (cube.frame) {
                case 4:
                    snake.speed.X = 0.0;
                    snake.speed.Z = -snake.Speed;
                    return;
                case 5:
                    snake.speed.X = 0.0;
                    snake.speed.Z = snake.Speed;
                    return;
            }
    }
    
    LEFTKey = () => {
        if (-snake.pos.Y < cube.size.Y / 2 + 0.4 && -snake.pos.Y > -cube.size.Y / 2 - 0.4
            && snake.speed.X == 0)
            switch (cube.frame) {
                case 0:
                    snake.speed.X = snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
                case 1:
                    snake.speed.X = -snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
            }
        if (-snake.pos.Y < cube.size.Y / 2 + 0.4 && -snake.pos.Y > -cube.size.Y / 2 - 0.4
            && snake.speed.Z == 0)
                switch (cube.frame) {
                case 2:
                    snake.speed.Z = -snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
                case 3:
                    snake.speed.Z = snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
            }
        if (-snake.pos.Z < cube.size.Z / 2 + 0.4 && -snake.pos.Z > -cube.size.Z / 2 - 0.4
            && snake.speed.X == 0)
            switch (cube.frame) {
                case 4:
                    snake.speed.X = snake.Speed;
                    snake.speed.Z = 0.0;
                    return;
                case 5:
                    snake.speed.X = snake.Speed;
                    snake.speed.Z = 0.0;
                    return;
            }
    }
    
    RIGHTKey = () => {
        if (-snake.pos.Y < cube.size.Y / 2 + 0.4 && -snake.pos.Y > -cube.size.Y / 2 - 0.4
            && snake.speed.X == 0)
            switch (cube.frame) {
                case 0:
                    snake.speed.X = -snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
                case 1:
                    snake.speed.X = snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
            }
        if (-snake.pos.Y < cube.size.Y / 2 + 0.4 && -snake.pos.Y > -cube.size.Y / 2 - 0.4
            && snake.speed.Z == 0)
            switch (cube.frame) {
                case 2:
                    snake.speed.Z = snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
                case 3:
                    snake.speed.Z = -snake.Speed;
                    snake.speed.Y = 0.0;
                    return;
            }
        if (-snake.pos.Z < cube.size.Z / 2 + 0.4 && -snake.pos.Z > -cube.size.Z / 2 - 0.4
            && snake.speed.X == 0)
            switch (cube.frame) {
                case 4:
                    snake.speed.X = -snake.Speed;
                    snake.speed.Z = 0.0;
                    return;
                case 5:
                    snake.speed.X = -snake.Speed;
                    snake.speed.Z = 0.0;
                    return;
            }
    }
}