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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int lbl_82002AE0;


double fn_828E5538(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  uint uVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  
  uVar5 = (uint)param_3;
  bVar7 = true;
  if ((int)uVar5 < 0) {
    dVar8 = (double)(lbl_82002AE0 / (float)(longlong)(1 << (-uVar5 & 0x3f)));
  }
  else {
    dVar8 = (double)(longlong)(1 << (uVar5 & 0x3f));
  }
  uVar1 = 0;
  iVar6 = (int)(param_2 + param_3);
  if (0 < iVar6) {
    iVar3 = fn_828E9DA8(param_1);
    iVar4 = fn_828E9D90(param_1);
    if (iVar3 - iVar4 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = fn_828E9FF8(param_1,1);
    }
    bVar7 = lVar2 != 0;
    iVar3 = fn_828E9DA8(param_1);
    iVar4 = fn_828E9D90(param_1);
    if (iVar3 - iVar4 < iVar6) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_828E9FF8(param_1,param_2 + param_3);
    }
  }
  return (double)(float)((double)(longlong)
                                 ((longlong)(int)((-(uint)bVar7 & 2) - 1) * (uVar1 & 0xffffffff)) /
                        dVar8);
}

