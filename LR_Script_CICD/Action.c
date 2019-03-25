Action()
{
	lr_start_transaction("01");
	
	lr_think_time(5);
	
	lr_end_transaction("01", LR_AUTO);

	
	lr_start_transaction("02");
	
	lr_think_time(5);
	
	lr_end_transaction("02", LR_AUTO);



	
	return 0;
}
