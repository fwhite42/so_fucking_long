const {
	randomInt
} = require("crypto");

function randomPosition() {
	let x = randomInt(0, this.width)
	let y = randomInt(0, this.height)
	return {x, y};
}

function drawPoint(position, value) {
	this.matrix[position.y][position.x] = value;
}

function drawLine(start, stop, value) {
	if (start.x == stop.x) {
		let y;
		if (start.y > stop.y) [start, stop] = [stop, start];
		y = start.y;
		while (y <= stop.y) {
			drawPoint.call(this, {x:start.x, y}, value)
			y++;
		}
	} else {
		if (start.x > stop.x) [start, stop] = [stop, start];
		let m = (start.y - stop.y) / (start.x - stop.x);
		let y = x => (m * x - ( m * (start.x) - start.y )) | 0;
		let x = start.x
		while (x <= stop.x) {
			drawPoint.call(this, {x, y:y(x)}, value);
			x++;
		}
	}
}

function drawRandomPoint(value) {
	let position = randomPosition.call(this);
	if (this.matrix[position.y][position.x] != floor)
		return drawRandomPoint.call(this, value);
	drawPoint.call(this, position, value);
	return position;
}

function drawBorders(value) {
	let top_left		= {x: 0, y: 0};
	let top_right		= {x: 0, y: (this.height - 1)};
	let bottom_left		= {x: (this.width - 1), y: 0};
	let bottom_right	= {x: (this.width - 1), y: (this.height - 1)};

	drawLine.call(this, top_left, top_right, value);
	drawLine.call(this, top_left, bottom_left, value);
	drawLine.call(this, top_right, bottom_right, value);
	drawLine.call(this, bottom_left, bottom_right, value);
}

function drawRandomLine(value) {
	let A = randomPosition.call(this);
	let B = randomPosition.call(this);
	drawLine.call(this, A, B, value);
}

function drawRandomHLine(value) {
	let A = randomPosition.call(this);
	let B = {x: randomInt(0, this.width), y:A.y}
	drawLine.call(this, A, B, value);
}

function drawRandomVLine(value) {
	let A = randomPosition.call(this);
	let B = {y: randomInt(0, this.height), x:A.x}
	drawLine.call(this, A, B, value);
}

class Map {
	constructor(width, height, config) {
		this.config		= config
		this.matrix		= Array(height)
					.fill(this.config.floor)
					.map(x => Array(width).fill(x));
		this.width		= width;
		this.height		= height;
		this.drawPoint		= drawPoint.bind(this);
		this.drawLine		= drawLine.bind(this);
		this.drawRandomPoint	= drawRandomPoint.bind(this);
		this.drawRandomLine	= drawRandomPoint.bind(this);
		this.drawRandomHLine	= drawRandomPoint.bind(this);
		this.drawRandomVLine	= drawRandomPoint.bind(this);
		this.drawBorders	= drawBorders.bind(this);
	}
	print() {
		console.log(this.toString());
	}
	toString() {
		return this.matrix.map(line => line.join("")).join("\n");
	}
}

async function main(av) {
	width	= +av[2];
	height	= +av[3];
	coins	= +av[4];
	const config = {
		wall:	"1",
		floor:	"0",
		player:	"P",
		coin:	"C",
		enemy:	"X",
		exit:	"E"
	}
	const map = new Map(width, height, config);
	map.drawBorders(map.config.wall);
	map.drawRandomPoint(map.config.player);
	map.drawRandomPoint(map.config.exit);
	while (coins--)
		map.drawRandomPoint(map.config.coin);
	map.print();
	return (map.toString())
}

main(process.argv);
