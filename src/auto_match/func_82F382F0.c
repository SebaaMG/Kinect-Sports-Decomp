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
extern int fn_82F377E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


undefined8 fn_82F382F0(int param_1,byte *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  int *apiStack_70 [4];
  byte abStack_60 [16];
  byte abStack_50 [80];
  
  uVar3 = *(uint *)(param_1 + 0x70);
  pbVar8 = (byte *)&lbl_8202E618;
  pbVar7 = param_2;
  do {
    bVar1 = *pbVar8;
    bVar2 = *pbVar7;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar8 = pbVar8 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    if (param_3 < uVar3) {
      *param_4 = param_3;
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffffffffc00d36d5;
    }
  }
  else {
    uVar9 = 0;
    uVar5 = 0xffffffffc00d36d5;
    uVar10 = 0;
    if (uVar3 != 0) {
      do {
        fn_82F377E8(param_1 + 8,uVar10,apiStack_70);
        piVar4 = (int *)*apiStack_70[0];
        if (piVar4 == (int *)0x0) {
          return 0xffffffff8000ffff;
        }
        iVar6 = (**(code **)(*piVar4 + 0xc))(piVar4,abStack_60);
        if (iVar6 < 0) {
          return 0xffffffffc00d36d5;
        }
        pbVar8 = abStack_60;
        pbVar7 = param_2;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar7;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (pbVar8 != abStack_50);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
          if (uVar9 == param_3) {
            *param_4 = (uint)uVar10;
            return 0;
          }
          uVar9 = uVar9 + 1;
        }
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (ulonglong)uVar3);
    }
  }
  return uVar5;
}

