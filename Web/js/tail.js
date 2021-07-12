class Tail {
    constructor() {
        this.tail = [];
    }
    addTail(count) {
        for (var i = 0; i < count; i++){
            var size = this.tail.length;
            var pos = new Vector3;
            pos.X = 0;pos.Y = 0;pos.Z = 0;
            this.tail[size] = new Vector3;
            this.tail[size] = pos;
        }
    }
    render(i) {
        // console.log("moving view for " + this.tail[i].X + this.tail[i].Y + this.tail[i].Z);
        translate(-this.tail[i].X, -this.tail[i].Y, -this.tail[i].Z);
        fill(255, 255, 255);
        box(2);
        translate(this.tail[i].X, this.tail[i].Y, this.tail[i].Z);
    }
    renderTail() {
        for (let i = 0; i < this.tail.length; i++) {
            // console.log(this.tail[i].X + this.tail[i].Y + this.tail[i].Z);
            this.render(i);
        }
    }
    update() {
        for (let i = tail.length; i > 0; i--){
            this.tail[i].X = this.tail[i - 1].X;
            this.tail[i].Y = this.tail[i - 1].Y;
            this.tail[i].Z = this.tail[i - 1].Z;
        }
        this.tail[this.tail.length - 1].X = snake.pos.X;
        // this.tail.push(snake.pos);
    }
}