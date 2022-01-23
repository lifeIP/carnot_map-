#pragma once

struct MS
{
	bool NBNCND;
	bool BNCND;
	bool BCND;
	bool NBCND;
	bool NBNCD;
	bool BNCD;
	bool BCD;
	bool NBCD;
	bool NANBNC;
	bool NABNC;
	bool NABC;
	bool NANBC;
	bool ANBNC;
	bool ABNC;
	bool ABC;
	bool ANBC;
	bool NANCND;
	bool NANCD;
	bool ANCD;
	bool ANCND;
	bool NABND;
	bool NABD;
	bool ABD;
	bool ABND;
	bool NACND;
	bool NACD;
	bool ACD;
	bool ACND;
	bool NANBND;
	bool NANBD;
	bool ANBD;
	bool ANBND;
};
struct MC1
{
	//duad---->
	bool NAND;
	bool NAD;
	bool AD;
	bool AND;
	bool NBNC;
	bool BNC;
	bool BC;
	bool NBC;
	bool NBND;
	bool NCND;
	bool BND;
	bool CND;
	bool NANC;
	bool NAB;
	bool NAC;
	bool NANB;
	bool NCD;
	bool BD;
	bool CD;
	bool NBD;
	bool ANC;
	bool AB;
	bool AC;
	bool ANB;
};

MS triada(int inp[]);
MC1 any_duad(MS s);
void print(MC1 s);