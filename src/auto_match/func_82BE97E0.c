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
extern int fn_82BEEC58();
extern int fn_82F67DE8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8322B22C;


void fn_82BE97E0(undefined8 param_1,double param_2,double param_3)

{
  float *pfVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)fn_82F6A544();
  if (lbl_8322B22C != 0) {
    dVar5 = (double)(float)((double)(uint)(*(int *)(lbl_8322B22C + 0xc4) -
                                          *(int *)(lbl_8322B22C + 0xbc)) /
                           (double)(uint)(*(int *)(lbl_8322B22C + 200) -
                                         *(int *)(lbl_8322B22C + 0xc0)));
    dVar3 = (double)fn_82F67DE8((double)(float)(dVar3 * (double)lbl_82002C5C));
    dVar4 = (double)lbl_82002AE0;
    dVar3 = (double)(float)(dVar4 / (double)(float)dVar3);
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x58,0);
    *pfVar1 = (float)(dVar3 / dVar5);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,0);
    dVar5 = (double)lbl_821AAD20;
    *(float *)(iVar2 + 4) = lbl_821AAD20;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,0);
    *(float *)(iVar2 + 8) = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,0);
    *(float *)(iVar2 + 0xc) = (float)dVar5;
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x58,1);
    *pfVar1 = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,1);
    *(float *)(iVar2 + 4) = (float)dVar3;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,1);
    *(float *)(iVar2 + 8) = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,1);
    *(float *)(iVar2 + 0xc) = (float)dVar5;
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x58,2);
    *pfVar1 = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,2);
    *(float *)(iVar2 + 4) = (float)dVar5;
    dVar3 = (double)(float)(param_3 - param_2);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,2);
    *(float *)(iVar2 + 8) = (float)(param_3 / dVar3);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,2);
    *(float *)(iVar2 + 0xc) = (float)dVar4;
    pfVar1 = (float *)fn_82BEEC58(lbl_8322B22C + 0x58,3);
    *pfVar1 = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,3);
    *(float *)(iVar2 + 4) = (float)dVar5;
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,3);
    *(float *)(iVar2 + 8) = -(float)((double)(float)(param_2 * param_3) / dVar3);
    iVar2 = fn_82BEEC58(lbl_8322B22C + 0x58,3);
    *(float *)(iVar2 + 0xc) = (float)dVar5;
  }
  fn_82F6A590();
  return;
}

