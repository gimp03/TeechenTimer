#include "stdafx.h"
#include "teechentimer.h"

TeechenTimer::TeechenTimer(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	timer = new QTimer(this);
	timer->setSingleShot(false);
	connect(timer,SIGNAL(timeout()),this, SLOT(lcdChange()));
}

void TeechenTimer::on_timeEdit_timeChanged()
{
	timeValue = ui.timeEdit->time();
	ss = timeValue.toString("ss");
	iss = ss.toInt(&ok,10);
	ui.lcdSec->display(ss);
	mm = timeValue.toString("mm");
	ui.lcdMin->display(mm);
	hh = timeValue.toString("hh");
	ui.lcdHour->display(hh);
	//cc = timeValue.currentTime();
	ui.LCDTest->display(timeValue.currentTime().toString("hh:mm:ss"));
}

void TeechenTimer::lcdChange(/*int h, int m, int s*/)
{
	--iss;
	//ui.lcdSec->display(iss.toString("ss"));
	cc = timeValue.currentTime().toString("hh:mm:ss");
	icc = cc.toInt(&ok,10);
	ui.LCDTest->display(--icc);
}

void TeechenTimer::on_btnStart_clicked()
{
	//timer->start(10);
	lcdChange();
}

TeechenTimer::~TeechenTimer()
{

}
