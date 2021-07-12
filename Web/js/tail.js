class Tail {
    constructor() {
        this.tail = [];
    }
    addTail(count) {
        for (var i = 0; i < count; i++){
            var size = this.tail.length;
            this.tail[size] = new Vector3;
            this.tail[size] = snake.pos;
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
            this.render(i);
        }
    }
    update() {
        // this.tail.push(snake.pos);
    }
}