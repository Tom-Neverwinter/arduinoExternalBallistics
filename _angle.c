// Specialty angular conversion functions
double DegtoMOA(double deg) {
	return deg * 60;
}
double DegtoRad(double deg) {
	return deg * 3.14159265358979323846 / 180;
}
double MOAtoDeg(double moa) {
	return moa / 60;
}
double MOAtoRad(double moa) {
	return moa / 60 * 3.14159265358979323846 / 180;
}
double RadtoDeg(double rad) {
	return rad * 180 / 3.14159265358979323846;
}
double RadtoMOA(double rad) {
	return rad * 60 * 180 / 3.14159265358979323846;
}

