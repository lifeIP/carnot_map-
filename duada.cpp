#include "triada.h"



MC1 any_duad(MS s) {
	bool nand = 0;
	if (s.NANCND != 0 && s.NACND != 0) {
		nand = 1;
	}
	bool nad = 0;
	if (s.NANCD != 0 && s.NACD != 0) {
		nad = 1;
	}
	bool ad = 0;
	if (s.ANCD != 0 && s.ACD != 0) {
		ad = 1;
	}
	bool aand = 0;
	if (s.ANCND != 0 && s.ACND != 0) {
		aand = 1;
	}
	bool nbnc = 0;
	if (s.NANBNC != 0 && s.ANBNC != 0) {
		nbnc = 1;
	}
	bool bnc = 0;
	if (s.NABNC != 0 && s.ABNC != 0) {
		bnc = 1;
	}
	bool bc = 0;
	if (s.NABC != 0 && s.ABC != 0) {
		bc = 1;
	}
	bool nbc = 0;
	if (s.NANBC != 0 && s.ANBC != 0) {
		nbc = 1;
	}
	bool nbnd = 0;
	if (s.NANBND != 0 && s.ANBND != 0) {
		nbnd = 1;
	}
	bool ncnd = 0;
	if (s.NANCND != 0 && s.ANCND != 0) {
		ncnd = 1;
	}
	bool bnd = 0;
	if (s.NABND != 0 && s.ABND != 0) {
		bnd = 1;
	}
	bool cnd = 0;
	if (s.NACND != 0 && s.ACND != 0) {
		cnd = 1;
	}
	bool nanc = 0;
	if (s.NANCND != 0 && s.NANCD != 0) {
		nanc = 1;
	}
	bool nab = 0;
	if (s.NABND != 0 && s.NABD != 0) {
		nab = 1;
	}
	bool nac = 0;
	if (s.NACND != 0 && s.NACD != 0) {
		nac = 1;
	}
	bool nanb = 0;
	if (s.NANBNC != 0 && s.NANBC != 0) {
		nanb = 1;
	}
	bool ncd = 0;
	if (s.NANCD != 0 && s.ANCD != 0) {
		ncd = 1;
	}
	bool bd = 0;
	if (s.NABD != 0 && s.ABD != 0) {
		bd = 1;
	}
	bool cd = 0;
	if (s.NACD != 0 && s.ACD != 0) {
		cd = 1;
	}
	bool nbd = 0;
	if (s.NANBD != 0 && s.ANBD != 0) {
		nbd = 1;
	}
	bool anc = 0;
	if (s.ANCD != 0 && s.ANCND != 0) {
		anc = 1;
	}
	bool ab = 0;
	if (s.ABD != 0 && s.ABND != 0) {
		ab = 1;
	}
	bool ac = 0;
	if (s.ACD != 0 && s.ACND != 0) {
		ac = 1;
	}
	bool anb = 0;
	if (s.ANBD != 0 && s.ANBND != 0) {
		anb = 1;
	}
	MC1 d = { nand,nad,ad,aand,nbnc,bnc,bc,nbc,nbnd,ncnd,bnd,cnd,nanc,nab,nac,nanb,ncd,bd,cd,nbd,anc,ab,ac,anb };
	return d;
}
