void data()
{
	cout<<"Za moment wyswietli sie aktualna godzina oraz dzisiejsza data."<<endl;
	time_t czas;
	struct tm * ptr;
	time( & czas );
	ptr = localtime( & czas );
}
