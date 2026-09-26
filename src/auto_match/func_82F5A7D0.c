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
extern int fn_82A1DD38();
extern int fn_82F535C8();
extern int fn_8306ED30();
extern unsigned int lbl_82167C98;
extern unsigned int lbl_831BAFCC;
extern unsigned int lbl_832628C2;


void fn_82F5A7D0(int param_1,longlong param_2,longlong param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  
  pfVar3 = param_4 + -1;
  lVar5 = 0x14;
  do {
    pfVar3 = pfVar3 + 1;
    *pfVar3 = 1.0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if (*(int *)(param_1 + 0x10) == 2) {
    uVar4 = 0;
    pfVar3 = param_4;
    do {
      fn_8306ED30();
      dVar6 = (double)fn_82F535C8();
      iVar2 = *(int *)(((int)&lbl_82167C98 - (int)param_4) + (int)pfVar3);
      fVar1 = (float)((double)lbl_831BAFCC / (double)(float)((double)lbl_831BAFCC + dVar6));
      if (lbl_832628C2 == '\0') {
        *pfVar3 = fVar1;
      }
      else if (iVar2 != -1) {
        param_4[iVar2] = param_4[iVar2] * fVar1;
      }
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar4 < 0x14);
  }
  fn_82A1DD38(param_1 + 0x10,param_3 * 0x1c0 + param_2 + 0x30,0x1c0);
  return;
}

