module CoinC {
	provides interface StdControl as CoinControl;
	uses {
		interface SplitControl as RadioControl;
		interface Timer<TMilli> as RegularTimer;
		interface Timer<TMilli> as RandomTimer;
		interface Random;
		interface RootControl;
	}
}
implementation {
	enum {
		SPACE =   100,

		TIME1  =  	 5000,
		TIME2  =  	15000,
		TIME3  =  	25000,
		TIME4  =  	35000,
		TIME5  = 	45000,

		P1	  =      1,
		P2    =      5,
		P3    =     10,
	};

	//uint32_t interval = 100000;
	uint32_t interval = 60000;
	uint16_t prob = P1;
	uint32_t timerI = TIME1;
	uint32_t timerF = TIME2;

	bool radioOn = FALSE;
	bool coinOn  = FALSE;

	command error_t CoinControl.start() {
		if(!coinOn && !(call RootControl.isRoot())) {
			coinOn = TRUE;
			call RegularTimer.startPeriodic(interval);
		}
	}

	command error_t CoinControl.stop() {
		coinOn = FALSE;
        call RegularTimer.stop();
	}

	event void RadioControl.startDone(error_t err) {
		radioOn = TRUE;
		//dbg("tty", "radio on time %s\n", sim_time_string());
	}

	event void RadioControl.stopDone(error_t err) { 
		radioOn = FALSE;
		//dbg("tty", "radio off time %s\n", sim_time_string());
	}

	event void RegularTimer.fired() {
		/*first coin, decides if the radio will fail*/
		uint16_t aux = call Random.rand16() % SPACE;
		/*decides the amount of time the radio will be off or on*/
		interval = timerI + (call Random.rand32() % (timerF - timerI));

		if(aux <= prob) {
			if(radioOn)
				call RadioControl.stop();
		}else {
			if(!radioOn)
				call RadioControl.start();
		}

		if(coinOn)
			call RandomTimer.startOneShot(interval);
	}

    event void RandomTimer.fired() {
        if(!radioOn)
            call RadioControl.start();
    }

}
