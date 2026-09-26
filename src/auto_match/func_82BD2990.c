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
extern unsigned int *auStack_60;
extern int fn_82F63F40();
extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_57;


void fn_82BD2990(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_60 [9];
  undefined1 uStack_57;
  
  if (param_1 < (double)lbl_821AAD20) {
    uVar2 = 0x2d;
    param_1 = -param_1;
  }
  else {
    uVar2 = 0x2b;
  }
  dVar5 = (double)lbl_8200D898;
  iVar4 = 0;
  dVar1 = param_1 - (double)(longlong)(int)param_1;
  dVar6 = (double)(float)dVar1;
  iVar3 = (int)dVar1;
  do {
    dVar1 = (double)(float)(dVar6 - (double)(longlong)iVar3) * dVar5;
    dVar6 = (double)(float)dVar1;
    iVar3 = (int)dVar1;
    fn_82F63F40(auStack_60 + iVar4,0xffffffff821aa66c,iVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  uStack_57 = 0;
  fn_82F63F40(param_3,0xffffffff820e8354,uVar2,(int)param_1,auStack_60);
  return;
}

