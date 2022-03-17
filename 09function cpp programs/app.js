function hello() {
	const greet = 'Good Morning';
	return function () {
		console.log(greet);
	};
}

const greet = hello();

greet();
greet();
greet();
