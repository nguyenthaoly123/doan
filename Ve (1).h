#pragma once
#include <bits/stdc++.h>
const int MAX_VE = 200;
struct ve{
	unsigned int CMND;
	int ghe_so;
	bool tt;
};
typedef struct ve VE;

struct chuyenbay; 
typedef struct chuyenbay CB;          
struct Datetime;  
struct nodeCB;  
struct nodeHK; 

typedef nodeCB* PTR;
typedef nodeHK* NODEPTR;
static int TimVeHanhKhach(CB &cb, unsigned int cmnd);
static int TimViTriTheoSoGhe(CB &cb, int soGheMuon);
void InSoDoGhe(CB &cb);
static void NhapNhanhHanhKhach(NODEPTR &root, unsigned int cmnd);
bool ConHon3Tieng(Datetime dt);
void DatVe(PTR &First, NODEPTR &root);
void HuyVe(PTR &First, NODEPTR &root);
void MenuVe() ;
void VeKhungDon(int t, int b, int l, int r);
static string TrangThaiStr(int tt);
static void VeSoDoGhe(CB &cb);
static void InDanhSachVeTrong(CB &cb, int startRow);
//static void InDSMayBay(DSMB &LA, int highlight, int startIdx);
static void InDSChuyenBay(vector<PTR> &dsCB, int highlight, int startIdx);
static int BuocChonMayBay(DSMB &LA);
static PTR BuocChonChuyenBay(PTR First, const char *soHieuMB);
static void BuocXemVeTrong(CB &cb);
void InVeTrong();



