class Food {
    constructor(count) {
        this.foodvec = [];
        this.score = 0;
        for (let i = 0; i < count; i++){
            this.foodvec[i] = this.randomise();
        }
    }

    randomise = () => {
        var ret = new Vector3;
        var frame = parseInt(Math.random()*6);
        ret.X = Math.random()*40-20;
        ret.Y = Math.random()*40-20;
        ret.Z = Math.random()*40-20;
        switch (parseInt(frame)) {
            case 0:
                ret.Z = -21;
                break;
            case 1:
                ret.Z = 21;
                break;
            case 2:
                ret.X = -21;
                break;
            case 3:
                ret.X = 21;
                break;
            case 4:
                ret.Y = 21;
                break;
            case 5:
                ret.Y = -21;
                break;
        }
        return ret;
    }

    check = () => {
        for (let i = 0; i < this.foodvec.length; i++) {
            if (snake.pos.X > this.foodvec[i].X - 2.0 && snake.pos.X < this.foodvec[i].X + 2.0
                && snake.pos.Y > this.foodvec[i].Y - 2.0 && snake.pos.Y < this.foodvec[i].Y + 2.0
                && snake.pos.Z > this.foodvec[i].Z - 2.0 && snake.pos.Z < this.foodvec[i].Z + 2.0) {
                this.foodvec[i] = this.randomise(); this.score++;
                tail.add(10);
                document.getElementById("scorecount").innerHTML = this.score.toString();;
            }
        }
    }

    renderFood = () => {
        for (let i = 0; i < this.foodvec.length; i++) {
            translate(-this.foodvec[i].X, -this.foodvec[i].Y, -this.foodvec[i].Z);
            fill(255, 120, 15);
            box(2);
            translate(this.foodvec[i].X, this.foodvec[i].Y, this.foodvec[i].Z);
        }
    }

}