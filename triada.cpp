#include "triada.h"


MS triada(int inp[]) {
	bool NBNCND;//
	if (inp[0] != 0 && inp[12] != 0) {
		NBNCND = 1;
	}
	else
	{
		NBNCND = 0;
	}
	
	bool BNCND;//
	if (inp[1] != 0 && inp[13] != 0) {
		BNCND = 1;
	}
	else
	{
		BNCND = 0;
	}

	bool BCND;//
	if (inp[2] != 0 && inp[14] != 0) {
		BCND = 1;
	}
	else
	{
		BCND = 0;
	}

	bool NBCND;//
	if (inp[3] != 0 && inp[15] != 0) {
		NBCND = 1;
	}
	else
	{
		NBCND = 0;
		
	}

	bool NBNCD;//
	if (inp[4] != 0 && inp[8] != 0) {
		NBNCD = 1;
	}
	else
	{
		NBNCD = 0;
	}

	bool BNCD;//
	if (inp[5] != 0 && inp[9] != 0) {
		BNCD = 1;
	}
	else
	{
		BNCD = 0;
	}

	bool BCD;//
	if (inp[6] != 0 && inp[10] != 0) {
		BCD = 1;
	}
	else
	{
		BCD = 0;
	}

	bool NBCD;//
	if (inp[7] != 0 && inp[11] != 0) {
		NBCD = 1;
	}
	else
	{
		NBCD = 0;
	}

	bool NANBNC;//
	if (inp[0] != 0 && inp[4] != 0) {
		NANBNC = 1;
	}
	else
	{
		NANBNC = 0;
	}

	bool NABNC;//
	if (inp[1] != 0 && inp[5] != 0) {
		NABNC = 1;
	}
	else
	{
		NABNC = 0;		
	}

	bool NABC;//
	if (inp[2] != 0 && inp[6] != 0) {
		NABC = 1;
	}
	else
	{
		NABC = 0;
	}

	bool NANBC;//
	if (inp[3] != 0 && inp[7] != 0) {
		NANBC = 1;		
	}
	else
	{
		NANBC = 0;
	}

	bool ANBNC;//
	if (inp[8] != 0 && inp[12] != 0) {
		ANBNC = 1;
	}
	else
	{
		ANBNC = 0;
	}

	bool ABNC;//
	if (inp[9] != 0 && inp[13] != 0) {
		ABNC = 1;
	}
	else
	{
		ABNC = 0;
	}

	bool ABC;//
	if (inp[10] != 0 && inp[14] != 0) {
		ABC = 1;
	}
	else
	{
		ABC = 0;
	}

	bool ANBC;//
	if (inp[11] != 0 && inp[15] != 0) {
		ANBC = 1;
	}
	else
	{
		ANBC = 0;
	}
	
	bool NANCND;//
	if (inp[0] != 0 && inp[1] != 0) {
		NANCND = 1;
	}
	else
	{
		NANCND = 0;
	}

	bool NANCD;//
	if (inp[4] != 0 && inp[5] != 0) {
		NANCD = 1;
	}
	else
	{
		NANCD = 0;
	}

	bool ANCD;//
	if (inp[8] != 0 && inp[9] != 0) {
		ANCD = 1;
	}
	else
	{
		ANCD = 0;
	}

	bool ANCND;//
	if (inp[12] != 0 && inp[13] != 0) {
		ANCND = 1;
	}
	else
	{
		ANCND = 0;
	}

	bool NABND;//
	if (inp[1] != 0 && inp[2] != 0) {
		NABND = 1;
	}
	else
	{
		NABND = 0;
	}

	bool NABD;//
	if (inp[5] != 0 && inp[6] != 0) {
		NABD = 1;
	}
	else
	{
		NABD = 0;
	}

	bool ABD;//
	if (inp[9] != 0 && inp[10] != 0) {
		ABD = 1;
	}
	else
	{
		ABD = 0;
	}

	bool ABND;//
	if (inp[13] != 0 && inp[14] != 0) {
		ABND = 1;
	}
	else
	{
		ABND = 0;
	}

	bool NACND;//
	if (inp[2] != 0 && inp[3] != 0) {
		NACND = 1;
	}
	else
	{
		NACND = 0;
	}

	bool NACD;//
	if (inp[6] != 0 && inp[7] != 0) {
		NACD = 1;
	}
	else
	{
		NACD = 0;
	}

	bool ACD;//
	if (inp[10] != 0 && inp[11] != 0) {
		ACD = 1;
	}
	else
	{
		ACD = 0;
	}

	bool ACND;//
	if (inp[14] != 0 && inp[15] != 0) {
		ACND = 1;
	}
	else
	{
		ACND = 0;
	}

	bool NANBND;//
	if (inp[0] != 0 && inp[3] != 0) {
		NANBND = 1;
	}
	else
	{
		NANBND = 0;
	}

	bool NANBD;//
	if (inp[4] != 0 && inp[7] != 0) {
		NANBD = 1;
	}
	else
	{
		NANBD = 0;
	}

	bool ANBD;//
	if (inp[8] != 0 && inp[11] != 0) {
		ANBD = 1;
	}
	else
	{
		ANBD = 0;
	}

	bool ANBND;//
	if (inp[12] != 0 && inp[15] != 0) {
		ANBND = 1;
	}
	else
	{
		ANBND = 0;
	}
	MS t = { NBNCND, BNCND, BCND, NBCND, NBNCD, BNCD ,BCD ,NBCD ,NANBNC, NABNC,NABC,NANBC,ANBNC,ABNC,ABC,ANBC,NANCND,NANCD,ANCD,ANCND,NABND,NABD,ABD,ABND,NACND,NACD,ACD,ACND,NANBND,NANBD,ANBD,ANBND };
	return t;
}
