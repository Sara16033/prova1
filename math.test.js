const { add } = require('./math');

test('addizione corretta: 2 + 2 = 4', () => {
  const risultato = add(2, 2);
  expect(risultato).toBe(4);
});

test('addizione errata: 3 + 5 = 7', () => {
  const risultato = add(3, 5);
  expect(risultato).toBe(7);
});

