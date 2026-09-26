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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82A29A38();
extern int fn_82AACF70();
extern int fn_82AAD090();
extern int fn_82AAD208();
extern int fn_82AAD2E0();


void fn_82AAD610(int *param_1,uint param_2,uint param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *apuStack_90 [36];
  
  puVar13 = (uint *)*param_1;
  puVar12 = (uint *)*param_5;
  uVar6 = *puVar13;
  uVar2 = uVar6 & 0xffff;
  if ((puVar13[1] & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar1 = puVar13[1];
  puVar9 = puVar13 + 2;
  uVar8 = uVar1;
  if ((param_2 < 0xffff0200) &&
     (*param_1 == *(int *)((*(int *)(param_4 + 0x1ac) + 0x19) * 8 + param_4))) {
    if (*(int *)(*(int *)(param_4 + 0x1ac) * 8 + param_4 + 0xcc) == 0) {
      fn_82A29A38();
    }
    if ((uVar6 & 0x40000000) != 0) {
      fn_82A29A38();
    }
    uVar8 = uVar1 & 0x8fffe010 | 0xf0010;
  }
  puVar7 = apuStack_90[0];
  if ((uVar6 & 0x10000000) != 0) {
    puVar7 = (uint *)*puVar9;
    puVar9 = puVar13 + 3;
    uVar8 = uVar8 & 0x8fffe021 | 0xf0021;
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
  }
  if (param_3 == 0xd) {
    param_3 = 0x430000;
    if (uVar2 != 0x50) {
      param_3 = 0x20000;
    }
    param_3 = param_3 | 0xd;
LAB_82aad824:
    *puVar12 = param_3;
  }
  else if (param_3 == 0x45) {
    uVar11 = 0x45;
    if (uVar2 == 0x14) {
      uVar11 = 0x45;
    }
    else {
      if (uVar2 == 0x15) {
        uVar11 = 0x10000;
      }
      else if (uVar2 == 0x16) {
        uVar11 = 0x20000;
      }
      else if (uVar2 == 0x17) {
        uVar11 = 0x30000;
      }
      else {
        if (uVar2 != 0x18) {
          fn_82A29A38();
          goto LAB_82aad788;
        }
        uVar11 = 0x40000;
      }
      uVar11 = uVar11 | 0x45;
    }
LAB_82aad788:
    *puVar12 = uVar11;
  }
  else {
    if (((param_3 == 0x3d) || (param_3 == 0x3c)) || (param_3 == 0x4c)) {
LAB_82aad820:
      param_3 = param_3 & 0xffff;
      goto LAB_82aad824;
    }
    if ((param_3 == 0x51) || (param_3 == 0x55)) {
      *puVar12 = param_3 & 0xffff | 0x20000;
    }
    else {
      if ((param_3 != 0x25) && (param_3 != 0x26)) goto LAB_82aad820;
      if (*(int *)(param_4 + 4) == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        if (*(int *)(param_4 + 4) != 2) {
          uVar11 = uVar1 >> 0x16 & 1;
        }
      }
      *puVar12 = uVar11 << 0x18 | param_3 & 0xffff;
    }
  }
  apuStack_90[0] = puVar12 + 1;
  uVar4 = fn_82AACF70(uVar8,param_4,apuStack_90);
  if ((*puVar9 & 0x80000000) == 0) {
    uVar4 = fn_82A29A38();
  }
  uVar8 = *puVar9;
  uVar10 = (ulonglong)uVar8;
  puVar13 = puVar9 + 1;
  uVar11 = 0;
  if ((uVar8 & 0x2000) == 0x2000) {
    if ((*puVar13 & 0x80000000) == 0) {
      fn_82A29A38(uVar4,0);
    }
    uVar11 = *puVar13;
    puVar13 = puVar9 + 2;
  }
  if (((uVar2 != 7) && (uVar2 != 0xf)) && (uVar2 != 0x20)) {
    if (uVar2 == 0x25) {
      fn_82AAD090(uVar10,uVar11,0,param_4,apuStack_90);
      uVar2 = *puVar13;
      while ((uVar2 & 0x80000000) != 0) {
        puVar13 = puVar13 + 1;
        uVar2 = *puVar13;
      }
      goto LAB_82aada10;
    }
    puVar12 = puVar13;
    if (uVar2 != 0x4f) {
      while( true ) {
        puVar13 = puVar12;
        fn_82AAD090(uVar10,uVar11,0,param_4,apuStack_90);
        uVar2 = *puVar13;
        uVar10 = (ulonglong)uVar2;
        if ((uVar2 & 0x80000000) == 0) break;
        puVar12 = puVar13 + 1;
        uVar11 = 0;
        if ((uVar2 & 0x2000) == 0x2000) {
          if ((*puVar12 & 0x80000000) == 0) {
            fn_82A29A38();
          }
          uVar11 = *puVar12;
          puVar12 = puVar13 + 2;
        }
      }
      goto LAB_82aada10;
    }
  }
  uVar3 = uVar8 & 0xf000000;
  if (uVar3 == 0x1000000) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xfffffffffeffffff;
  }
  else if (uVar3 == 0x3000000) {
    uVar10 = uVar10 & 0xfffffffffcffffff | 0x2000000;
  }
  else if (uVar3 == 0x5000000) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xfffffffffeffffff | 0x4000000;
  }
  else {
    if (uVar3 == 0x8000000) {
      lVar5 = 7;
    }
    else {
      if (uVar3 != 0xc000000) goto LAB_82aad990;
      lVar5 = 0xb;
    }
    uVar10 = lVar5 << 0x18 | uVar10 & 0xfffffffff0ffffff;
  }
LAB_82aad990:
  uVar4 = fn_82AAD090(uVar10,uVar11,0x100000,param_4,apuStack_90);
  if (uVar2 == 0x20) {
    if ((*puVar13 & 0x80000000) == 0) {
      uVar4 = fn_82A29A38();
    }
    uVar2 = *puVar13;
    puVar12 = puVar13 + 1;
    uVar8 = 0;
    if ((uVar2 & 0x2000) == 0x2000) {
      if ((*puVar12 & 0x80000000) == 0) {
        fn_82A29A38(uVar4,0);
      }
      uVar8 = *puVar12;
      puVar12 = puVar13 + 2;
    }
    puVar13 = puVar12;
    fn_82AAD090(uVar2,uVar8,0,param_4,apuStack_90);
  }
  if ((*puVar13 & 0x80000000) != 0) {
    fn_82A29A38();
  }
LAB_82aada10:
  if ((uVar6 & 0x10000000) != 0) {
    fn_82AAD2E0(uVar1,puVar7,0xe40000,param_4,apuStack_90);
  }
  if ((uVar6 & 0x40000000) != 0) {
    if (0xffff01ff < param_2) {
      fn_82A29A38();
    }
    fn_82AAD208(*(undefined4 *)(*(int *)((*(int *)(param_4 + 0x1ac) + 0x19) * 8 + param_4) + 4),
                  0x10,param_4,apuStack_90);
    uVar6 = *(int *)(param_4 + 0x1ac) + 1;
    *(uint *)(param_4 + 0x1ac) = uVar6;
    if (*(uint *)(param_4 + 0x1a8) < uVar6) {
      fn_82A29A38();
    }
  }
  *param_5 = (int)apuStack_90[0];
  *param_1 = (int)puVar13;
  return;
}

