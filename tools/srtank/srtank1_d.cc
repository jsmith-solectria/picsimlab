CPWindow1::CPWindow1(void)
{
  SetFOwner(this);
  SetClass(lxT("CPWindow"));
  SetName(lxT("window1"));
  SetTag(0);
  SetX(582);
  SetY(66);
  SetWidth(652);
  SetHeight(650);
  SetHint(lxT(""));
  SetEnable(1);
  SetVisible(1);
  SetColor(lxT("#000001"));
  SetPopupMenu(NULL);
  SetTitle(lxT("Serial Remote Tank"));
  SetOverrideRedirect(0);
  EvOnCreate=EVONCREATE & CPWindow1::_EvOnCreate;
  EvOnDestroy=EVONDESTROY & CPWindow1::_EvOnDestroy;
  //draw1
  draw1.SetFOwner(this);
  draw1.SetClass(lxT("CDraw"));
  draw1.SetName(lxT("draw1"));
  draw1.SetTag(0);
  draw1.SetX(5);
  draw1.SetY(35);
  draw1.SetWidth(320);
  draw1.SetHeight(440);
  draw1.SetHint(lxT(""));
  draw1.SetEnable(1);
  draw1.SetVisible(1);
  draw1.SetColor(lxT("#000001"));
  draw1.SetPopupMenu(NULL);
  draw1.EvMouseButtonPress=EVMOUSEBUTTONPRESS & CPWindow1::draw1_EvMouseButtonPress;
  draw1.SetTransparent(0);
  draw1.SetImgFileName(lxT(""));
  CreateChild(&draw1);
  //button1
  button1.SetFOwner(this);
  button1.SetClass(lxT("CButton"));
  button1.SetName(lxT("button1"));
  button1.SetTag(0);
  button1.SetX(216);
  button1.SetY(4);
  button1.SetWidth(108);
  button1.SetHeight(28);
  button1.SetHint(lxT(""));
  button1.SetEnable(1);
  button1.SetVisible(1);
  button1.SetColor(lxT("#000001"));
  button1.SetPopupMenu(NULL);
  button1.EvMouseButtonClick=EVMOUSEBUTTONCLICK & CPWindow1::button1_EvMouseButtonClick;
  button1.SetText(lxT("Connect"));
  CreateChild(&button1);
  //combo1
  combo1.SetFOwner(this);
  combo1.SetClass(lxT("CCombo"));
  combo1.SetName(lxT("combo1"));
  combo1.SetTag(0);
  combo1.SetX(95);
  combo1.SetY(5);
  combo1.SetWidth(118);
  combo1.SetHeight(26);
  combo1.SetHint(lxT(""));
  combo1.SetEnable(1);
  combo1.SetVisible(1);
  combo1.SetColor(lxT("#000001"));
  combo1.SetPopupMenu(NULL);
  combo1.SetItems(lxT(""));
  combo1.SetText(lxT(""));
  combo1.SetReadOnly(0);
  CreateChild(&combo1);
  //label1
  label1.SetFOwner(this);
  label1.SetClass(lxT("CLabel"));
  label1.SetName(lxT("label1"));
  label1.SetTag(0);
  label1.SetX(2);
  label1.SetY(8);
  label1.SetWidth(91);
  label1.SetHeight(20);
  label1.SetHint(lxT(""));
  label1.SetEnable(1);
  label1.SetVisible(1);
  label1.SetColor(lxT("#000001"));
  label1.SetPopupMenu(NULL);
  label1.SetText(lxT("Serial port:"));
  label1.SetAlign(1);
  CreateChild(&label1);
  //edit1
  edit1.SetFOwner(this);
  edit1.SetClass(lxT("CEdit"));
  edit1.SetName(lxT("edit1"));
  edit1.SetTag(0);
  edit1.SetX(549);
  edit1.SetY(7);
  edit1.SetWidth(80);
  edit1.SetHeight(26);
  edit1.SetHint(lxT(""));
  edit1.SetEnable(1);
  edit1.SetVisible(1);
  edit1.SetColor(lxT("#000001"));
  edit1.SetPopupMenu(NULL);
  edit1.SetText(lxT("100"));
  edit1.SetReadOnly(0);
  CreateChild(&edit1);
  //edit2
  edit2.SetFOwner(this);
  edit2.SetClass(lxT("CEdit"));
  edit2.SetName(lxT("edit2"));
  edit2.SetTag(0);
  edit2.SetX(549);
  edit2.SetY(34);
  edit2.SetWidth(80);
  edit2.SetHeight(26);
  edit2.SetHint(lxT(""));
  edit2.SetEnable(1);
  edit2.SetVisible(1);
  edit2.SetColor(lxT("#000001"));
  edit2.SetPopupMenu(NULL);
  edit2.SetText(lxT("100"));
  edit2.SetReadOnly(0);
  CreateChild(&edit2);
  //edit3
  edit3.SetFOwner(this);
  edit3.SetClass(lxT("CEdit"));
  edit3.SetName(lxT("edit3"));
  edit3.SetTag(0);
  edit3.SetX(549);
  edit3.SetY(61);
  edit3.SetWidth(80);
  edit3.SetHeight(26);
  edit3.SetHint(lxT(""));
  edit3.SetEnable(1);
  edit3.SetVisible(1);
  edit3.SetColor(lxT("#000001"));
  edit3.SetPopupMenu(NULL);
  edit3.SetText(lxT("800"));
  edit3.SetReadOnly(0);
  CreateChild(&edit3);
  //edit4
  edit4.SetFOwner(this);
  edit4.SetClass(lxT("CEdit"));
  edit4.SetName(lxT("edit4"));
  edit4.SetTag(0);
  edit4.SetX(549);
  edit4.SetY(88);
  edit4.SetWidth(80);
  edit4.SetHeight(26);
  edit4.SetHint(lxT(""));
  edit4.SetEnable(1);
  edit4.SetVisible(1);
  edit4.SetColor(lxT("#000001"));
  edit4.SetPopupMenu(NULL);
  edit4.SetText(lxT("500"));
  edit4.SetReadOnly(0);
  CreateChild(&edit4);
  //edit5
  edit5.SetFOwner(this);
  edit5.SetClass(lxT("CEdit"));
  edit5.SetName(lxT("edit5"));
  edit5.SetTag(0);
  edit5.SetX(549);
  edit5.SetY(115);
  edit5.SetWidth(80);
  edit5.SetHeight(26);
  edit5.SetHint(lxT(""));
  edit5.SetEnable(1);
  edit5.SetVisible(1);
  edit5.SetColor(lxT("#000001"));
  edit5.SetPopupMenu(NULL);
  edit5.SetText(lxT("3000"));
  edit5.SetReadOnly(0);
  CreateChild(&edit5);
  //edit6
  edit6.SetFOwner(this);
  edit6.SetClass(lxT("CEdit"));
  edit6.SetName(lxT("edit6"));
  edit6.SetTag(0);
  edit6.SetX(549);
  edit6.SetY(142);
  edit6.SetWidth(80);
  edit6.SetHeight(26);
  edit6.SetHint(lxT(""));
  edit6.SetEnable(1);
  edit6.SetVisible(1);
  edit6.SetColor(lxT("#000001"));
  edit6.SetPopupMenu(NULL);
  edit6.SetText(lxT("22"));
  edit6.SetReadOnly(0);
  CreateChild(&edit6);
  //edit7
  edit7.SetFOwner(this);
  edit7.SetClass(lxT("CEdit"));
  edit7.SetName(lxT("edit7"));
  edit7.SetTag(0);
  edit7.SetX(549);
  edit7.SetY(169);
  edit7.SetWidth(80);
  edit7.SetHeight(26);
  edit7.SetHint(lxT(""));
  edit7.SetEnable(1);
  edit7.SetVisible(1);
  edit7.SetColor(lxT("#000001"));
  edit7.SetPopupMenu(NULL);
  edit7.SetText(lxT("1.0"));
  edit7.SetReadOnly(0);
  CreateChild(&edit7);
  //edit8
  edit8.SetFOwner(this);
  edit8.SetClass(lxT("CEdit"));
  edit8.SetName(lxT("edit8"));
  edit8.SetTag(0);
  edit8.SetX(549);
  edit8.SetY(196);
  edit8.SetWidth(80);
  edit8.SetHeight(26);
  edit8.SetHint(lxT(""));
  edit8.SetEnable(1);
  edit8.SetVisible(1);
  edit8.SetColor(lxT("#000001"));
  edit8.SetPopupMenu(NULL);
  edit8.SetText(lxT("1000"));
  edit8.SetReadOnly(0);
  CreateChild(&edit8);
  //checkbox1
  checkbox1.SetFOwner(this);
  checkbox1.SetClass(lxT("CCheckBox"));
  checkbox1.SetName(lxT("checkbox1"));
  checkbox1.SetTag(0);
  checkbox1.SetX(365);
  checkbox1.SetY(252);
  checkbox1.SetWidth(110);
  checkbox1.SetHeight(25);
  checkbox1.SetHint(lxT(""));
  checkbox1.SetEnable(1);
  checkbox1.SetVisible(1);
  checkbox1.SetColor(lxT("#000001"));
  checkbox1.SetPopupMenu(NULL);
  checkbox1.SetText(lxT("0-Inlet valve"));
  checkbox1.SetCheck(0);
  CreateChild(&checkbox1);
  //checkbox2
  checkbox2.SetFOwner(this);
  checkbox2.SetClass(lxT("CCheckBox"));
  checkbox2.SetName(lxT("checkbox2"));
  checkbox2.SetTag(0);
  checkbox2.SetX(365);
  checkbox2.SetY(280);
  checkbox2.SetWidth(120);
  checkbox2.SetHeight(25);
  checkbox2.SetHint(lxT(""));
  checkbox2.SetEnable(1);
  checkbox2.SetVisible(1);
  checkbox2.SetColor(lxT("#000001"));
  checkbox2.SetPopupMenu(NULL);
  checkbox2.SetText(lxT("1-Outlet valve"));
  checkbox2.SetCheck(0);
  CreateChild(&checkbox2);
  //checkbox3
  checkbox3.SetFOwner(this);
  checkbox3.SetClass(lxT("CCheckBox"));
  checkbox3.SetName(lxT("checkbox3"));
  checkbox3.SetTag(0);
  checkbox3.SetX(365);
  checkbox3.SetY(307);
  checkbox3.SetWidth(110);
  checkbox3.SetHeight(25);
  checkbox3.SetHint(lxT(""));
  checkbox3.SetEnable(1);
  checkbox3.SetVisible(1);
  checkbox3.SetColor(lxT("#000001"));
  checkbox3.SetPopupMenu(NULL);
  checkbox3.SetText(lxT("2-Heater"));
  checkbox3.SetCheck(0);
  CreateChild(&checkbox3);
  //checkbox4
  checkbox4.SetFOwner(this);
  checkbox4.SetClass(lxT("CCheckBox"));
  checkbox4.SetName(lxT("checkbox4"));
  checkbox4.SetTag(0);
  checkbox4.SetX(365);
  checkbox4.SetY(335);
  checkbox4.SetWidth(110);
  checkbox4.SetHeight(25);
  checkbox4.SetHint(lxT(""));
  checkbox4.SetEnable(1);
  checkbox4.SetVisible(1);
  checkbox4.SetColor(lxT("#000001"));
  checkbox4.SetPopupMenu(NULL);
  checkbox4.SetText(lxT("3-Cooler"));
  checkbox4.SetCheck(0);
  CreateChild(&checkbox4);
  //checkbox5
  checkbox5.SetFOwner(this);
  checkbox5.SetClass(lxT("CCheckBox"));
  checkbox5.SetName(lxT("checkbox5"));
  checkbox5.SetTag(0);
  checkbox5.SetX(365);
  checkbox5.SetY(364);
  checkbox5.SetWidth(111);
  checkbox5.SetHeight(25);
  checkbox5.SetHint(lxT(""));
  checkbox5.SetEnable(1);
  checkbox5.SetVisible(1);
  checkbox5.SetColor(lxT("#000001"));
  checkbox5.SetPopupMenu(NULL);
  checkbox5.SetText(lxT("4-Stirrer"));
  checkbox5.SetCheck(0);
  CreateChild(&checkbox5);
  //checkbox6
  checkbox6.SetFOwner(this);
  checkbox6.SetClass(lxT("CCheckBox"));
  checkbox6.SetName(lxT("checkbox6"));
  checkbox6.SetTag(0);
  checkbox6.SetX(507);
  checkbox6.SetY(254);
  checkbox6.SetWidth(113);
  checkbox6.SetHeight(25);
  checkbox6.SetHint(lxT(""));
  checkbox6.SetEnable(1);
  checkbox6.SetVisible(1);
  checkbox6.SetColor(lxT("#000001"));
  checkbox6.SetPopupMenu(NULL);
  checkbox6.SetText(lxT("0-High floater"));
  checkbox6.SetCheck(0);
  CreateChild(&checkbox6);
  //checkbox7
  checkbox7.SetFOwner(this);
  checkbox7.SetClass(lxT("CCheckBox"));
  checkbox7.SetName(lxT("checkbox7"));
  checkbox7.SetTag(0);
  checkbox7.SetX(507);
  checkbox7.SetY(281);
  checkbox7.SetWidth(114);
  checkbox7.SetHeight(25);
  checkbox7.SetHint(lxT(""));
  checkbox7.SetEnable(1);
  checkbox7.SetVisible(1);
  checkbox7.SetColor(lxT("#000001"));
  checkbox7.SetPopupMenu(NULL);
  checkbox7.SetText(lxT("1-Low floater"));
  checkbox7.SetCheck(0);
  CreateChild(&checkbox7);
  //checkbox8
  checkbox8.SetFOwner(this);
  checkbox8.SetClass(lxT("CCheckBox"));
  checkbox8.SetName(lxT("checkbox8"));
  checkbox8.SetTag(0);
  checkbox8.SetX(507);
  checkbox8.SetY(309);
  checkbox8.SetWidth(114);
  checkbox8.SetHeight(25);
  checkbox8.SetHint(lxT(""));
  checkbox8.SetEnable(1);
  checkbox8.SetVisible(1);
  checkbox8.SetColor(lxT("#000001"));
  checkbox8.SetPopupMenu(NULL);
  checkbox8.SetText(lxT("2-Min. Temp."));
  checkbox8.SetCheck(0);
  CreateChild(&checkbox8);
  //edit9
  edit9.SetFOwner(this);
  edit9.SetClass(lxT("CEdit"));
  edit9.SetName(lxT("edit9"));
  edit9.SetTag(0);
  edit9.SetX(430);
  edit9.SetY(397);
  edit9.SetWidth(40);
  edit9.SetHeight(26);
  edit9.SetHint(lxT(""));
  edit9.SetEnable(1);
  edit9.SetVisible(1);
  edit9.SetColor(lxT("#000001"));
  edit9.SetPopupMenu(NULL);
  edit9.SetText(lxT("10"));
  edit9.SetReadOnly(1);
  CreateChild(&edit9);
  //label2
  label2.SetFOwner(this);
  label2.SetClass(lxT("CLabel"));
  label2.SetName(lxT("label2"));
  label2.SetTag(0);
  label2.SetX(390);
  label2.SetY(10);
  label2.SetWidth(147);
  label2.SetHeight(20);
  label2.SetHint(lxT(""));
  label2.SetEnable(1);
  label2.SetVisible(1);
  label2.SetColor(lxT("#000001"));
  label2.SetPopupMenu(NULL);
  label2.SetText(lxT("Inlet valve flow (l/s)"));
  label2.SetAlign(1);
  CreateChild(&label2);
  //label3
  label3.SetFOwner(this);
  label3.SetClass(lxT("CLabel"));
  label3.SetName(lxT("label3"));
  label3.SetTag(0);
  label3.SetX(390);
  label3.SetY(37);
  label3.SetWidth(147);
  label3.SetHeight(20);
  label3.SetHint(lxT(""));
  label3.SetEnable(1);
  label3.SetVisible(1);
  label3.SetColor(lxT("#000001"));
  label3.SetPopupMenu(NULL);
  label3.SetText(lxT("Outlet valve flow (l/s)"));
  label3.SetAlign(1);
  CreateChild(&label3);
  //label4
  label4.SetFOwner(this);
  label4.SetClass(lxT("CLabel"));
  label4.SetName(lxT("label4"));
  label4.SetTag(0);
  label4.SetX(390);
  label4.SetY(64);
  label4.SetWidth(147);
  label4.SetHeight(20);
  label4.SetHint(lxT(""));
  label4.SetEnable(1);
  label4.SetVisible(1);
  label4.SetColor(lxT("#000001"));
  label4.SetPopupMenu(NULL);
  label4.SetText(lxT("Heater Power (kcal/s)"));
  label4.SetAlign(1);
  CreateChild(&label4);
  //label5
  label5.SetFOwner(this);
  label5.SetClass(lxT("CLabel"));
  label5.SetName(lxT("label5"));
  label5.SetTag(0);
  label5.SetX(390);
  label5.SetY(90);
  label5.SetWidth(147);
  label5.SetHeight(20);
  label5.SetHint(lxT(""));
  label5.SetEnable(1);
  label5.SetVisible(1);
  label5.SetColor(lxT("#000001"));
  label5.SetPopupMenu(NULL);
  label5.SetText(lxT("Cooler Power (kcal/s)"));
  label5.SetAlign(1);
  CreateChild(&label5);
  //label6
  label6.SetFOwner(this);
  label6.SetClass(lxT("CLabel"));
  label6.SetName(lxT("label6"));
  label6.SetTag(0);
  label6.SetX(390);
  label6.SetY(116);
  label6.SetWidth(147);
  label6.SetHeight(20);
  label6.SetHint(lxT(""));
  label6.SetEnable(1);
  label6.SetVisible(1);
  label6.SetColor(lxT("#000001"));
  label6.SetPopupMenu(NULL);
  label6.SetText(lxT("Tank capacity (l)"));
  label6.SetAlign(1);
  CreateChild(&label6);
  //label7
  label7.SetFOwner(this);
  label7.SetClass(lxT("CLabel"));
  label7.SetName(lxT("label7"));
  label7.SetTag(0);
  label7.SetX(390);
  label7.SetY(144);
  label7.SetWidth(145);
  label7.SetHeight(20);
  label7.SetHint(lxT(""));
  label7.SetEnable(1);
  label7.SetVisible(1);
  label7.SetColor(lxT("#000001"));
  label7.SetPopupMenu(NULL);
  label7.SetText(lxT("Room temp (°C)"));
  label7.SetAlign(1);
  CreateChild(&label7);
  //label8
  label8.SetFOwner(this);
  label8.SetClass(lxT("CLabel"));
  label8.SetName(lxT("label8"));
  label8.SetTag(0);
  label8.SetX(390);
  label8.SetY(171);
  label8.SetWidth(156);
  label8.SetHeight(20);
  label8.SetHint(lxT(""));
  label8.SetEnable(1);
  label8.SetVisible(1);
  label8.SetColor(lxT("#000001"));
  label8.SetPopupMenu(NULL);
  label8.SetText(lxT("specific heat (cal/g.°C)"));
  label8.SetAlign(1);
  CreateChild(&label8);
  //label9
  label9.SetFOwner(this);
  label9.SetClass(lxT("CLabel"));
  label9.SetName(lxT("label9"));
  label9.SetTag(0);
  label9.SetX(390);
  label9.SetY(198);
  label9.SetWidth(144);
  label9.SetHeight(20);
  label9.SetHint(lxT(""));
  label9.SetEnable(1);
  label9.SetVisible(1);
  label9.SetColor(lxT("#000001"));
  label9.SetPopupMenu(NULL);
  label9.SetText(lxT("Density (g/l)"));
  label9.SetAlign(1);
  CreateChild(&label9);
  //edit10
  edit10.SetFOwner(this);
  edit10.SetClass(lxT("CEdit"));
  edit10.SetName(lxT("edit10"));
  edit10.SetTag(0);
  edit10.SetX(430);
  edit10.SetY(426);
  edit10.SetWidth(40);
  edit10.SetHeight(26);
  edit10.SetHint(lxT(""));
  edit10.SetEnable(1);
  edit10.SetVisible(1);
  edit10.SetColor(lxT("#000001"));
  edit10.SetPopupMenu(NULL);
  edit10.SetText(lxT("30"));
  edit10.SetReadOnly(1);
  CreateChild(&edit10);
  //checkbox9
  checkbox9.SetFOwner(this);
  checkbox9.SetClass(lxT("CCheckBox"));
  checkbox9.SetName(lxT("checkbox9"));
  checkbox9.SetTag(0);
  checkbox9.SetX(507);
  checkbox9.SetY(337);
  checkbox9.SetWidth(114);
  checkbox9.SetHeight(25);
  checkbox9.SetHint(lxT(""));
  checkbox9.SetEnable(1);
  checkbox9.SetVisible(1);
  checkbox9.SetColor(lxT("#000001"));
  checkbox9.SetPopupMenu(NULL);
  checkbox9.SetText(lxT("3-Max. temp"));
  checkbox9.SetCheck(0);
  CreateChild(&checkbox9);
  //edit11
  edit11.SetFOwner(this);
  edit11.SetClass(lxT("CEdit"));
  edit11.SetName(lxT("edit11"));
  edit11.SetTag(0);
  edit11.SetX(567);
  edit11.SetY(396);
  edit11.SetWidth(70);
  edit11.SetHeight(26);
  edit11.SetHint(lxT(""));
  edit11.SetEnable(1);
  edit11.SetVisible(1);
  edit11.SetColor(lxT("#000001"));
  edit11.SetPopupMenu(NULL);
  edit11.SetText(lxT("0"));
  edit11.SetReadOnly(1);
  CreateChild(&edit11);
  //edit12
  edit12.SetFOwner(this);
  edit12.SetClass(lxT("CEdit"));
  edit12.SetName(lxT("edit12"));
  edit12.SetTag(0);
  edit12.SetX(567);
  edit12.SetY(426);
  edit12.SetWidth(70);
  edit12.SetHeight(26);
  edit12.SetHint(lxT(""));
  edit12.SetEnable(1);
  edit12.SetVisible(1);
  edit12.SetColor(lxT("#000001"));
  edit12.SetPopupMenu(NULL);
  edit12.SetText(lxT("22"));
  edit12.SetReadOnly(1);
  CreateChild(&edit12);
  //label10
  label10.SetFOwner(this);
  label10.SetClass(lxT("CLabel"));
  label10.SetName(lxT("label10"));
  label10.SetTag(0);
  label10.SetX(332);
  label10.SetY(400);
  label10.SetWidth(95);
  label10.SetHeight(20);
  label10.SetHint(lxT(""));
  label10.SetEnable(1);
  label10.SetVisible(1);
  label10.SetColor(lxT("#000001"));
  label10.SetPopupMenu(NULL);
  label10.SetText(lxT("0-Min. t. ala."));
  label10.SetAlign(1);
  CreateChild(&label10);
  //label11
  label11.SetFOwner(this);
  label11.SetClass(lxT("CLabel"));
  label11.SetName(lxT("label11"));
  label11.SetTag(0);
  label11.SetX(332);
  label11.SetY(429);
  label11.SetWidth(95);
  label11.SetHeight(20);
  label11.SetHint(lxT(""));
  label11.SetEnable(1);
  label11.SetVisible(1);
  label11.SetColor(lxT("#000001"));
  label11.SetPopupMenu(NULL);
  label11.SetText(lxT("1-Max. t. ala."));
  label11.SetAlign(1);
  CreateChild(&label11);
  //label12
  label12.SetFOwner(this);
  label12.SetClass(lxT("CLabel"));
  label12.SetName(lxT("label12"));
  label12.SetTag(0);
  label12.SetX(477);
  label12.SetY(400);
  label12.SetWidth(85);
  label12.SetHeight(20);
  label12.SetHint(lxT(""));
  label12.SetEnable(1);
  label12.SetVisible(1);
  label12.SetColor(lxT("#000001"));
  label12.SetPopupMenu(NULL);
  label12.SetText(lxT("0-Volume (l)"));
  label12.SetAlign(1);
  CreateChild(&label12);
  //label13
  label13.SetFOwner(this);
  label13.SetClass(lxT("CLabel"));
  label13.SetName(lxT("label13"));
  label13.SetTag(0);
  label13.SetX(477);
  label13.SetY(429);
  label13.SetWidth(87);
  label13.SetHeight(20);
  label13.SetHint(lxT(""));
  label13.SetEnable(1);
  label13.SetVisible(1);
  label13.SetColor(lxT("#000001"));
  label13.SetPopupMenu(NULL);
  label13.SetText(lxT("1-Temp (°C)"));
  label13.SetAlign(1);
  CreateChild(&label13);
  //label14
  label14.SetFOwner(this);
  label14.SetClass(lxT("CLabel"));
  label14.SetName(lxT("label14"));
  label14.SetTag(0);
  label14.SetX(358);
  label14.SetY(228);
  label14.SetWidth(128);
  label14.SetHeight(20);
  label14.SetHint(lxT(""));
  label14.SetEnable(1);
  label14.SetVisible(1);
  label14.SetColor(lxT("#000001"));
  label14.SetPopupMenu(NULL);
  label14.SetText(lxT("Input (actuators)"));
  label14.SetAlign(1);
  CreateChild(&label14);
  //label15
  label15.SetFOwner(this);
  label15.SetClass(lxT("CLabel"));
  label15.SetName(lxT("label15"));
  label15.SetTag(0);
  label15.SetX(501);
  label15.SetY(230);
  label15.SetWidth(134);
  label15.SetHeight(20);
  label15.SetHint(lxT(""));
  label15.SetEnable(1);
  label15.SetVisible(1);
  label15.SetColor(lxT("#000001"));
  label15.SetPopupMenu(NULL);
  label15.SetText(lxT("Outputs (sensors)"));
  label15.SetAlign(1);
  CreateChild(&label15);
  //timer1
  timer1.SetFOwner(this);
  timer1.SetClass(lxT("CTimer"));
  timer1.SetName(lxT("timer1"));
  timer1.SetTag(0);
  timer1.SetTime(100);
  timer1.SetRunState(1);
  timer1.EvOnTime=EVONTIME & CPWindow1::timer1_EvOnTime;
  CreateChild(&timer1);
  //text1
  text1.SetFOwner(this);
  text1.SetClass(lxT("CText"));
  text1.SetName(lxT("text1"));
  text1.SetTag(0);
  text1.SetX(5);
  text1.SetY(480);
  text1.SetWidth(637);
  text1.SetHeight(80);
  text1.SetHint(lxT(""));
  text1.SetEnable(1);
  text1.SetVisible(1);
  text1.SetColor(lxT("#000001"));
  text1.SetPopupMenu(NULL);
  text1.SetReadOnly(1);
  CreateChild(&text1);
  //menu1
  menu1.SetFOwner(this);
  menu1.SetClass(lxT("CMenu"));
  menu1.SetName(lxT("menu1"));
  menu1.SetTag(0);
  menu1.SetMenuItems(lxT("File,Help,"));
  CreateChild(&menu1);
  //menu1_File
  menu1_File.SetFOwner(this);
  menu1_File.SetClass(lxT("CPMenu"));
  menu1_File.SetName(lxT("menu1_File"));
  menu1_File.SetTag(0);
  menu1_File.SetText(lxT("File"));
  menu1_File.SetMenuItems(lxT("Default Config,Save Config,Load Config,Exit,"));
  menu1.CreateChild(&menu1_File);
  //menu1_Help
  menu1_Help.SetFOwner(this);
  menu1_Help.SetClass(lxT("CPMenu"));
  menu1_Help.SetName(lxT("menu1_Help"));
  menu1_Help.SetTag(0);
  menu1_Help.SetText(lxT("Help"));
  menu1_Help.SetMenuItems(lxT("Contents,About,"));
  menu1.CreateChild(&menu1_Help);
  //menu1_File_DefaultConfig
  menu1_File_DefaultConfig.SetFOwner(this);
  menu1_File_DefaultConfig.SetClass(lxT("CItemMenu"));
  menu1_File_DefaultConfig.SetName(lxT("menu1_File_DefaultConfig"));
  menu1_File_DefaultConfig.SetTag(0);
  menu1_File_DefaultConfig.SetText(lxT("Default Config"));
  menu1_File_DefaultConfig.SetEnable(1);
  menu1_File_DefaultConfig.SetSubMenu(NULL);
  menu1_File_DefaultConfig.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_File_DefaultConfig_EvMenuActive;
  menu1_File.CreateChild(&menu1_File_DefaultConfig);
  //menu1_File_SaveConfig
  menu1_File_SaveConfig.SetFOwner(this);
  menu1_File_SaveConfig.SetClass(lxT("CItemMenu"));
  menu1_File_SaveConfig.SetName(lxT("menu1_File_SaveConfig"));
  menu1_File_SaveConfig.SetTag(0);
  menu1_File_SaveConfig.SetText(lxT("Save Config"));
  menu1_File_SaveConfig.SetEnable(1);
  menu1_File_SaveConfig.SetSubMenu(NULL);
  menu1_File_SaveConfig.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_File_SaveConfig_EvMenuActive;
  menu1_File.CreateChild(&menu1_File_SaveConfig);
  //menu1_File_LoadConfig
  menu1_File_LoadConfig.SetFOwner(this);
  menu1_File_LoadConfig.SetClass(lxT("CItemMenu"));
  menu1_File_LoadConfig.SetName(lxT("menu1_File_LoadConfig"));
  menu1_File_LoadConfig.SetTag(0);
  menu1_File_LoadConfig.SetText(lxT("Load Config"));
  menu1_File_LoadConfig.SetEnable(1);
  menu1_File_LoadConfig.SetSubMenu(NULL);
  menu1_File_LoadConfig.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_File_LoadConfig_EvMenuActive;
  menu1_File.CreateChild(&menu1_File_LoadConfig);
  //menu1_File_Exit
  menu1_File_Exit.SetFOwner(this);
  menu1_File_Exit.SetClass(lxT("CItemMenu"));
  menu1_File_Exit.SetName(lxT("menu1_File_Exit"));
  menu1_File_Exit.SetTag(0);
  menu1_File_Exit.SetText(lxT("Exit"));
  menu1_File_Exit.SetEnable(1);
  menu1_File_Exit.SetSubMenu(NULL);
  menu1_File_Exit.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_File_Exit_EvMenuActive;
  menu1_File.CreateChild(&menu1_File_Exit);
  //menu1_Help_Contents
  menu1_Help_Contents.SetFOwner(this);
  menu1_Help_Contents.SetClass(lxT("CItemMenu"));
  menu1_Help_Contents.SetName(lxT("menu1_Help_Contents"));
  menu1_Help_Contents.SetTag(0);
  menu1_Help_Contents.SetText(lxT("Contents"));
  menu1_Help_Contents.SetEnable(1);
  menu1_Help_Contents.SetSubMenu(NULL);
  menu1_Help_Contents.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Help_Contents_EvMenuActive;
  menu1_Help.CreateChild(&menu1_Help_Contents);
  //menu1_Help_About
  menu1_Help_About.SetFOwner(this);
  menu1_Help_About.SetClass(lxT("CItemMenu"));
  menu1_Help_About.SetName(lxT("menu1_Help_About"));
  menu1_Help_About.SetTag(0);
  menu1_Help_About.SetText(lxT("About"));
  menu1_Help_About.SetEnable(1);
  menu1_Help_About.SetSubMenu(NULL);
  menu1_Help_About.EvMenuActive=EVMENUACTIVE & CPWindow1::menu1_Help_About_EvMenuActive;
  menu1_Help.CreateChild(&menu1_Help_About);
  //filedialog1
  filedialog1.SetFOwner(this);
  filedialog1.SetClass(lxT("CFileDialog"));
  filedialog1.SetName(lxT("filedialog1"));
  filedialog1.SetTag(0);
  filedialog1.SetFileName(lxT("untitled.srt"));
  filedialog1.SetFilter(lxT("srtank Files (*.srt)|*.srt"));
  filedialog1.SetType(129);
  CreateChild(&filedialog1);
  /*#Others*/
}
