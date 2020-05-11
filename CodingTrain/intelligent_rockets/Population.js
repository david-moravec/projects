function Population() {
	this.popsize = 25;
	this.matingpool = [];

	this.rockets = createVector;
	for (var i = 0; i < this.popsize; i++) {
		this.rockets[i] = new Rocket();
	}

	this.evaluate = function() {
		var maxfit = 0;
		for (var i = 0; i < this.popsize; i++) {

			this.rockets[i].calcFitness()
			if (this.rockets[i].fitness > maxfit) {
				maxfit = this.rockets[i].fitness;
			}
		}

		for (var i = 0; i < this.popsize; i++) {
			this.rockets[i].Fitness /= maxfit;
		}


		for (var i = 0; i < this.popsize; i++) {
			var n = 100 * this.rockets[i].fitness;
			for (var j = 0; j < n; j++) {
				this.matingpool.push(this.rockets[i]);
			}
		}
	createP(maxfit);
	}

	this.selection = function() {
		var newRockets = [];
		for (var i = 0; i < this.popsize; i++) {
			var parentA = random(this.matingpool).dna;
			var parentB = random(this.matingpool).dna;
			var child = parentA.crossover(parentB);
			child.mutation();
			newRockets[i] = new Rocket(child);
		}
		this.rockets = newRockets;
	}

	this.run = function() {
		for (var i = 0; i < this.popsize; i++) {
			this.rockets[i].update();
			this.rockets[i].show();
		}
	}
}


