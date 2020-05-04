function Rocket(dna) {
	this.pos = createVector(width/2, height);
	this.vel = createVector();
	this.acc = createVector();
	this.completed = false;
	this.crashed = true;
	if (dna) {
		this.dna = dna;
	} else {
		this.dna = new DNA();
	}

	this.applyForce = function(force) {
		this.acc.add(force);
	}

	this.update = function() {
		var d = dist(this.pos.x, this.pos.y, target.x, target.y);
		if (d < 10) {
			this.completed = true;
			this.pos = target.copy();
		}

		this.applyForce(this.dna.genes[count]);
		if (!this.completed && !this.crashed) {
			this.vel.add(this.acc);
			this.pos.add(this.vel);
			this.acc.mult(0);
		}

		if (this.pos.x > rx && this.pos.x < rx + rw && this.pos.y > ry && this.pos.y < ry + rh) {
			this.crashed = true;
		}
	}

	this.calcFitness = function() {
		var d = dist(this.pos.x, this.pos.y, target.x, target.y);
		this.fitness = map(d, 0, width, width, 0);
		if (this.completed) {
			this.fitness *= 10;
		}
		if (this.crashed) {
			this.fitness = 1;
		}
	}

	this.show = function() {
		push();
		fill(255, 100);
		translate(this.pos.x, this.pos.y);
		rotate(this.vel.heading());
		rectMode(CENTER);
		rect(0, 0, 25, 5);
		pop();
	}
}
