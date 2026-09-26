typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *fStack_28;
extern unsigned int *fStack_2c;
extern unsigned int *fStack_30;
extern unsigned int *fStack_38;
extern unsigned int *fStack_3c;
extern unsigned int *fStack_40;
extern unsigned int *fStack_48;
extern unsigned int *fStack_4c;
extern unsigned int *fStack_50;
extern int fn_82BEEBC0();
extern int fn_82BEEC00();
extern int fn_82BEEC58();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8322B22C;


void fn_82BE9560(void)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  if (lbl_8322B22C != 0) {
    fStack_50 = *(float *)(lbl_8322B22C + 0xa4);
    fStack_4c = *(float *)(lbl_8322B22C + 0xa8);
    fStack_48 = *(float *)(lbl_8322B22C + 0xac);
    fn_82BEEC00(&fStack_50);
    fn_82BEEC00(lbl_8322B22C + 0xb0);
    fn_82BEEBC0(&fStack_40,lbl_8322B22C + 0xb0,&fStack_50);
    fn_82BEEC00(&fStack_40);
    fn_82BEEBC0(&fStack_30,&fStack_50,&fStack_40);
    fn_82BEEC00(&fStack_30);
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x18,0);
    *pfVar1 = fStack_40;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,0);
    *(float *)(iVar2 + 4) = fStack_30;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,0);
    *(float *)(iVar2 + 8) = fStack_50;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,0);
    dVar3 = (double)lbl_821AAD20;
    *(float *)(iVar2 + 0xc) = lbl_821AAD20;
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x18,1);
    *pfVar1 = fStack_3c;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,1);
    *(float *)(iVar2 + 4) = fStack_2c;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,1);
    *(float *)(iVar2 + 8) = fStack_4c;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,1);
    *(float *)(iVar2 + 0xc) = (float)dVar3;
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x18,2);
    *pfVar1 = fStack_38;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,2);
    *(float *)(iVar2 + 4) = fStack_28;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,2);
    *(float *)(iVar2 + 8) = fStack_48;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,2);
    *(float *)(iVar2 + 0xc) = (float)dVar3;
    dVar3 = -(double)(*(float *)(lbl_8322B22C + 0x98) * fStack_40 +
                     *(float *)(lbl_8322B22C + 0xa0) * fStack_38 +
                     *(float *)(lbl_8322B22C + 0x9c) * fStack_3c);
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x18,3);
    *pfVar1 = (float)dVar3;
    dVar3 = -(double)(*(float *)(lbl_8322B22C + 0x98) * fStack_30 +
                     *(float *)(lbl_8322B22C + 0xa0) * fStack_28 +
                     *(float *)(lbl_8322B22C + 0x9c) * fStack_2c);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,3);
    *(float *)(iVar2 + 4) = (float)dVar3;
    dVar3 = -(double)(*(float *)(lbl_8322B22C + 0x98) * fStack_50 +
                     *(float *)(lbl_8322B22C + 0xa0) * fStack_48 +
                     *(float *)(lbl_8322B22C + 0x9c) * fStack_4c);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,3);
    *(float *)(iVar2 + 8) = (float)dVar3;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x18,3);
    *(undefined4 *)(iVar2 + 0xc) = lbl_82002AE0;
  }
  return;
}

