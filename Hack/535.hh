<?hh

error_reporting(E_ALL); 
$timeStart = microtime(true);

$values = Map {
	1 => 'a', 2 => 'A',
	3 => 'b', 4 => 'B',
	5 => 'c', 6 => 'C',
	7 => 'd', 8 => 'D',
	9 => 'e', 10 => 'E',
	11 => 'f', 12 => 'F',
	13 => 'g', 14 => 'G',
	15 => 'h', 16 => 'H',
	17 => 'i', 18 => 'I',
	19 => 'j', 20 => 'J',
	21 => 'k', 22 => 'K',
	23 => 'l', 24 => 'L',
	25 => 'm', 26 => 'M',
	27 => 'n', 28 => 'N',
	29 => 'o', 30 => 'O',
	31 => 'p', 32 => 'P',
	33 => 'q', 34 => 'Q',
	35 => 'r', 36 => 'R',
	37 => 's', 38 => 'S',
	39 => 't', 40 => 'T',
	41 => 'u', 42 => 'U',
	43 => 'v', 44 => 'V',
	45 => 'w', 46 => 'W',
	47 => 'x', 48 => 'X',
	49 => 'y', 50 => 'Y',
	51 => 'z', 52 => 'Z',
};

$i = 1;
while ($i < count($values)) {
	echo $values[$i] . ' ';
	++$i;
}

$timeEnd = microtime(true);
$time = $timeEnd - $timeStart;
echo '<p>' . $time . ' Sekunden ' . '<br />' . ($time * 1000000) . ' [&micro;s]</p>';