class Tail {
    constructor(count) {
        this.tailvec = [];
        for (let i = 0; i < count; i++){
            this.tailvec[i] = this.randomise();
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

    update = () => {
        for (let i = 1; i < this.tailvec.length; i++) {
            this.tailvec[i] = this.tailvec[i - 1];
        }
        this.tailvec[0] = snake.pos;
    }

    renderTail = () => {
        for (let i = 0; i < this.tailvec.length; i++) {
            translate(-this.tailvec[i].X, -this.tailvec[i].Y, -this.tailvec[i].Z);
            fill(255, 255, 255);
            box(2);
            translate(this.tailvec[i].X, this.tailvec[i].Y, this.tailvec[i].Z);
        }
    }

}