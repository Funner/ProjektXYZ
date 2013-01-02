<?php
function NahodneCislo($min, $max)
{
	$cislo = rand($min,$max);
	return $cislo;
}
define ("MIN",1);
define ("MAX",50);
$cislo1 = NahodneCislo(MIN,MAX);
$cislo2 = NahodneCislo(MIN,MAX);
$vysledek = $cislo1 + $cislo2;

echo "<form action=\"registrace.php\" method=\"post\">";
echo "<tr><td>";
echo "Jmeno: ", "</td><td>";
echo "<input type=text name=\"jmeno\">","<br>";
echo "</td></tr>";
echo "<tr><td>";
echo "Prijmeni: ", "</td><td>";
echo "<input type=text name=\"prijmeni\">","<br>";
echo "</td></tr>";
echo "<tr><td>";
echo "Prezdivka: ", "</td><td>";
echo "<input type=text name=\"prezdivka\">","<br>";
echo "</td></tr>";
echo "<tr><td>";
echo "Email: ", "</td><td>";
echo "<input type=text name=\"email\">","<br>";
echo "</td></tr>";
echo "<tr><td>";
echo "Heslo: ", "</td><td>";
echo "<input type=password name=\"heslo1\">","<br>";
echo "</td></tr>";
echo "<tr><td>";
echo "Heslo pro overeni: ", "</td><td>";
echo "<input type=password name=\"heslo2\">","<br>";
echo "<tr><td>";
echo "Kolik je ", $cislo1,"+",$cislo2," ?", "</td><td>";
echo "<input type=text name=\"odpoved\">","<br>";
echo "</td></tr>";
echo "<input type=submit value=\"Potvrdit\">","<br>";
?>