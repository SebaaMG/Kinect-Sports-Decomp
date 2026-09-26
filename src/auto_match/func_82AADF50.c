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
extern int fn_82A29A38();
extern int fn_82AAD090();


void fn_82AADF50(undefined4 *param_1,undefined8 param_2,uint param_3,int param_4,int *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *apuStack_50 [20];
  
  puVar1 = (ushort *)*param_1;
  puVar7 = (uint *)*param_5;
  uVar8 = param_3 & 0xffff;
  uVar2 = *puVar1 & 7;
  puVar3 = param_1;
  if (uVar2 == 1) {
    iVar4 = 3;
  }
  else {
    if (uVar2 == 2) {
      uVar8 = uVar8 | 0x10000;
      goto LAB_82aadfec;
    }
    if (uVar2 == 3) {
      uVar8 = uVar8 | 0x20000;
      goto LAB_82aadfec;
    }
    if (uVar2 != 4) {
      if (uVar2 != 5) {
        if (uVar2 == 6) {
          uVar8 = uVar8 | 0x40000;
        }
        else {
          puVar3 = (undefined4 *)fn_82A29A38();
        }
      }
      goto LAB_82aadfec;
    }
    iVar4 = 5;
  }
  uVar8 = iVar4 << 0x10 | uVar8;
LAB_82aadfec:
  *puVar7 = uVar8;
  puVar9 = puVar7 + 1;
  puVar6 = (uint *)(puVar1 + 2);
  apuStack_50[0] = puVar9;
  if (param_3 == 0x56) {
    uVar8 = *puVar6;
    puVar6 = (uint *)(puVar1 + 4);
    if ((uVar8 >> 0x14 & 0x700 | uVar8 & 0x1800) != 0x1300) {
      puVar3 = (undefined4 *)fn_82A29A38();
    }
    if ((uVar8 & 0xf0000) == 0xf0000) {
      *puVar9 = 0x40020;
      apuStack_50[0] = puVar7 + 2;
    }
    else {
      *puVar9 = 0x440020;
      uVar5 = (uint)((uVar8 & 0x10000) != 0);
      if ((uVar8 & 0x20000) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((uVar8 & 0x40000) != 0) {
        uVar5 = uVar5 | 0x10;
      }
      if ((uVar8 & 0x80000) != 0) {
        uVar5 = uVar5 | 0x40;
      }
      apuStack_50[0] = puVar7 + 3;
      puVar7[2] = uVar5;
    }
  }
  else if (param_3 == 0x34) {
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
  }
  uVar8 = *puVar6;
  while ((uVar8 & 0x80000000) != 0) {
    puVar7 = puVar6 + 1;
    uVar5 = 0;
    if ((uVar8 & 0x2000) == 0x2000) {
      if ((*puVar7 & 0x80000000) == 0) {
        fn_82A29A38(puVar3,0);
      }
      uVar5 = *puVar7;
      puVar7 = puVar6 + 2;
    }
    puVar3 = (undefined4 *)fn_82AAD090(uVar8,uVar5,0,param_4,apuStack_50);
    puVar6 = puVar7;
    uVar8 = *puVar7;
  }
  *param_1 = puVar6;
  *param_5 = (int)apuStack_50[0];
  return;
}

