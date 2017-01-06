configuration ModuleTestAppC { }

implementation {

  components ModuleTestC, MainC, LedsC, ActiveMessageC;
  components RandomC;
  components new CollectionSenderC(0xf0) as Sender;
  components CollectionC as Collector;
  components new TimerMilliC() as timer1;
  components new TimerMilliC() as timer2;

  ModuleTestC.Boot -> MainC;
  ModuleTestC.RadioControl -> ActiveMessageC;
  ModuleTestC.RoutingControl -> Collector;
  ModuleTestC.RootControl -> Collector;
  ModuleTestC.Leds -> LedsC;

  ModuleTestC.Send -> Sender;
  ModuleTestC.Receive -> Collector.Receive[0xf0];
  ModuleTestC.CtpPacket -> Collector;
  ModuleTestC.timerOne -> timer1;
  ModuleTestC.timerTwo -> timer2;
  ModuleTestC.MatrixUnicastNameFreeRouting -> Collector;
  ModuleTestC.Random -> RandomC;

} 
