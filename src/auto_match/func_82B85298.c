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
extern int fn_82ABDD90();
extern int fn_82AE7308();
extern int fn_82B4A218();
extern int fn_82B841E8();
extern int fn_82B84290();


uint * fn_82B85298(uint *param_1,int param_2,uint param_3,uint param_4,ulonglong param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  
  iVar3 = fn_82B4A218(param_3,param_4,param_2);
  iVar5 = (int)param_5 * 8;
  puVar2 = (uint *)(iVar5 + iVar3);
  uVar4 = puVar2[1];
  *param_1 = *(uint *)(iVar5 + iVar3);
  param_1[1] = uVar4;
  if (((uVar4 & 3) == 1) && (uVar4 = *param_1, (*(uint *)(uVar4 + 8) & 0x3f80) == 0x3800)) {
    iVar3 = fn_82ABDD90(param_2,0x70,0,1);
    uVar4 = *(uint *)(iVar3 + (uVar4 - 8));
    if ((param_4 == (uVar4 & 0x7fff)) &&
       ((param_5 & 0xffffffff) == ((ulonglong)(uVar4 >> 0xf) & 0x3fff))) {
      return param_1;
    }
  }
  puVar6 = (uint *)(param_3 + 0x14);
  for (uVar4 = *(uint *)(param_3 + 0x14); ((uVar4 & 1) == 0 && (uVar4 != 0));
      uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x28)) {
    if ((*(uint *)(uVar4 + 8) & 0x3f80) == 0x3800) {
      iVar3 = fn_82ABDD90(param_2,0x70,0,1);
      uVar1 = *(uint *)(iVar3 + (uVar4 - 8));
      if (((uVar1 & 0x7fff) == param_4) &&
         (((ulonglong)(uVar1 >> 0xf) & 0x3fff) == (param_5 & 0xffffffff))) goto LAB_82b8551c;
    }
  }
  if (param_3 == (-(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4))) {
    uVar4 = fn_82B841E8(param_2,param_3,0,0x74,0,1);
    uVar1 = uVar4 & 0xfffffffe;
    *(uint *)(uVar1 + 0x28) = *puVar6;
    *(uint *)((*puVar6 & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(uint *)(uVar1 + 0x24) = (uint)puVar6 | 1;
    *puVar6 = uVar1;
    iVar5 = fn_82ABDD90(param_2,0x74,0,1);
    puVar6 = (uint *)(iVar5 + (uVar4 - 4));
    *puVar6 = param_4 & 0x7fff |
              (uint)((param_5 & 0xffffffff) << 0xf) & 0x1fff8000 | *puVar6 & 0xe0000000;
  }
  else {
    uVar4 = fn_82B84290(param_2,param_3);
    iVar3 = fn_82ABDD90(param_2,0x70,0,1);
    puVar6 = (uint *)(iVar3 + (uVar4 - 8));
    *puVar6 = (uint)((param_5 & 0xffffffff) << 0xf) & 0x1fff8000 | 0x20000000 | *puVar6 & 0xe0000000
              | param_4 & 0x7fff;
    iVar3 = param_4 * 0x28 + *(int *)(param_2 + 0xc);
    if ((*(int *)(iVar3 + 0x1c) == 0) && ((*(uint *)(iVar3 + 4) & 0x4000000) != 0)) {
      fn_82AE7308(param_2,param_4);
    }
    iVar3 = *(int *)(param_4 * 0x28 + *(int *)(param_2 + 0xc) + 0x1c);
    if (iVar3 != 0) {
      uVar1 = *(uint *)(iVar3 + iVar5) >> 0x12 & 3;
      if (uVar1 == 2) {
        if ((*(uint *)(uVar4 + 0xc) & 4) == 4) goto LAB_82b8551c;
        uVar7 = (ushort)*(uint *)(uVar4 + 0xc) | 4;
      }
      else {
        if ((uVar1 != 3) || ((*(uint *)(uVar4 + 0xc) & 6) == 6)) goto LAB_82b8551c;
        uVar7 = (ushort)*(uint *)(uVar4 + 0xc) | 6;
      }
      *(ushort *)(uVar4 + 0xe) = uVar7;
    }
  }
LAB_82b8551c:
  if ((*param_1 == 0) || ((param_1[1] & 3) == 0)) {
    *puVar2 = uVar4;
    puVar2[1] = puVar2[1] & 0x10000 | 1;
  }
  *param_1 = uVar4;
  param_1[1] = param_1[1] & 0x10000 | 1;
  return param_1;
}

