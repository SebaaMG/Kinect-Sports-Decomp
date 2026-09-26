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
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B10048();
extern int fn_82B84290();


int fn_82B10120(undefined8 param_1,undefined8 param_2,uint param_3,ulonglong param_4,
                 ulonglong param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  uint *puVar6;
  bool bVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  
  if ((param_6 == '\0') || ((*(uint *)(param_3 + 8) & 0x3f80) != 0x3700)) goto LAB_82b10234;
  puVar6 = *(uint **)((int)((param_4 + 0xb & 0xffffffff) << 2) + param_3);
  uVar1 = *puVar6;
  uVar9 = (ulonglong)uVar1 & 0x1f;
  if (((uVar1 & 0x18) == 0) || ((param_5 & 0x18) == 0)) {
    if (((uVar1 & 2) != 0) && ((param_5 & 1) != 0)) goto LAB_82b10178;
    if ((uVar1 & 4) == 0) {
LAB_82b101a4:
      bVar8 = true;
    }
    else {
      bVar8 = false;
      if ((param_5 & 1) == 0) goto LAB_82b101a4;
    }
  }
  else {
LAB_82b10178:
    bVar8 = false;
  }
  if (bVar8) {
    if (((uVar1 & 4) != 0) && ((param_5 & 2) != 0)) {
      uVar9 = uVar9 - 4;
    }
    uVar7 = param_5;
    if ((uVar9 & param_5 & 4) != 0) {
      uVar9 = uVar9 - 4;
      uVar7 = param_5 - 4;
    }
    if (((uVar9 & 1) != 0) && ((uVar7 & 2) != 0)) {
      uVar7 = uVar7 - 2;
    }
    if (((uVar9 | uVar7) & 0xfffffffe) == 0) {
      uVar2 = puVar6[3];
      uVar3 = *(uint *)(uVar2 + 8) >> 7 & 0x7f;
      if ((uVar3 == 0x7d) || (bVar8 = false, uVar3 == 0x7c)) {
        bVar8 = true;
      }
      if (!bVar8) {
        param_4 = (ulonglong)(uVar1 >> 5) & 3;
        param_5 = uVar9 | uVar7;
        param_3 = uVar2;
      }
    }
  }
LAB_82b10234:
  iVar5 = fn_82B10048(param_1,param_2,param_3,param_4,param_5);
  if (iVar5 == 0) {
    iVar5 = fn_82B84290(param_1);
    if (param_6 != '\0') {
      *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xfeffffe1 | 0x1000002;
    }
    uVar4 = fn_82AD17B0(param_1,param_3);
    puVar6 = (uint *)fn_82AD1978(iVar5,uVar4);
    *puVar6 = (uint)((param_4 & 0xffffffff) << 5) & 0x360 | 0x2001c80 | *puVar6 & 0xf3fffc80 |
              (uint)param_5 & 0x1f;
  }
  return iVar5;
}

