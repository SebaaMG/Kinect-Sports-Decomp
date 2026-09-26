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
extern int fn_829C2180();
extern int fn_829C2330();
extern unsigned int lbl_82054B08;


ulonglong fn_829B8A30(int *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((param_1 == (int *)0x0) || ((uint *)param_1[7] == (uint *)0x0)) || (*param_1 == 0)) {
    return 0xfffffffffffffffe;
  }
  uVar2 = *(uint *)param_1[7];
  uVar5 = 0xfffffffffffffffb;
  uVar4 = -(ulonglong)(param_2 == 4) & 0xfffffffffffffffb;
joined_r0x829b8a7c:
  if (0xd < uVar2) {
    return 0xfffffffffffffffe;
  }
  switch(*(ushort *)(&lbl_82054B08 + uVar2 * 2) + 0x829b8ad8) {
  case 0x829b8ad8:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    bVar1 = *(byte *)*param_1;
    *(uint *)(param_1[7] + 4) = (uint)bVar1;
    *param_1 = *param_1 + 1;
    puVar3 = (undefined4 *)param_1[7];
    if ((bVar1 & 0xf) == 8) {
      if (((uint)puVar3[1] >> 4) + 8 <= (uint)puVar3[4]) {
        *puVar3 = 1;
        uVar5 = uVar4;
        goto code_r0x829b8b60;
      }
      *puVar3 = 0xd;
      param_1[6] = (int)"invalid window size";
    }
    else {
      *puVar3 = 0xd;
      param_1[6] = (int)"unknown compression method";
    }
    goto code_r0x829b8dbc;
  case 0x829b8b60:
code_r0x829b8b60:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    puVar3 = (undefined4 *)param_1[7];
    param_1[2] = param_1[2] + 1;
    bVar1 = *(byte *)*param_1;
    *param_1 = (int)((byte *)*param_1 + 1);
    uVar5 = ((ulonglong)(uint)puVar3[1] & 0xffffff) * 0x100 + (ulonglong)bVar1;
    if (uVar5 != (uVar5 / 0x1f) * 0x1f) {
      *puVar3 = 0xd;
      param_1[6] = (int)"incorrect header check";
      goto code_r0x829b8dbc;
    }
    if ((bVar1 & 0x20) != 0) {
      *puVar3 = 2;
      uVar5 = uVar4;
      goto code_r0x829b8df0;
    }
    *puVar3 = 7;
    uVar5 = uVar4;
    break;
  case 0x829b8bd8:
    uVar5 = fn_829C2330(*(undefined4 *)(param_1[7] + 0x14),param_1,uVar5);
    if ((int)uVar5 == -3) {
      *(undefined4 *)param_1[7] = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
    }
    else {
      if ((int)uVar5 == 0) {
        uVar5 = uVar4;
      }
      if ((int)uVar5 != 1) {
        return uVar5;
      }
      fn_829C2180(*(undefined4 *)(param_1[7] + 0x14),param_1,param_1[7] + 4);
      puVar3 = (undefined4 *)param_1[7];
      if (puVar3[3] == 0) {
        *puVar3 = 8;
        uVar5 = uVar4;
        goto code_r0x829b8c58;
      }
      *puVar3 = 0xc;
      uVar5 = uVar4;
    }
    break;
  case 0x829b8c58:
code_r0x829b8c58:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 9;
    uVar5 = uVar4;
  case 0x829b8ca8:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 * 0x10000 + *(int *)(param_1[7] + 8);
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 10;
    uVar5 = uVar4;
  case 0x829b8d00:
    goto code_r0x829b8d00;
  case 0x829b8d58:
    goto code_r0x829b8d58;
  case 0x829b8df0:
code_r0x829b8df0:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 3;
    uVar5 = uVar4;
  case 0x829b8e40:
    if (param_1[1] == 0) {
      return uVar5;
    }
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 * 0x10000 + *(int *)(param_1[7] + 8);
    *param_1 = *param_1 + 1;
    *(undefined4 *)param_1[7] = 4;
    uVar5 = uVar4;
  case 0x829b8e98:
    goto code_r0x829b8e98;
  case 0x829b8eec:
    goto code_r0x829b8eec;
  case 0x829b8f4c:
    *(undefined4 *)param_1[7] = 0xd;
    param_1[6] = (int)"need dictionary";
    *(undefined4 *)(param_1[7] + 4) = 0;
    return 0xfffffffffffffffe;
  case 0x829b8f70:
    goto code_r0x829b8dd8;
  case 0x829b8f78:
    return 0xfffffffffffffffd;
  }
code_r0x829b8dc4:
  uVar2 = *(uint *)param_1[7];
  goto joined_r0x829b8a7c;
code_r0x829b8d00:
  if (param_1[1] == 0) {
    return uVar5;
  }
  param_1[1] = param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 * 0x100 + *(int *)(param_1[7] + 8);
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 0xb;
  uVar5 = uVar4;
code_r0x829b8d58:
  if (param_1[1] == 0) {
    return uVar5;
  }
  param_1[1] = param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 + *(int *)(param_1[7] + 8);
  puVar3 = (undefined4 *)param_1[7];
  *param_1 = *param_1 + 1;
  if (puVar3[1] == puVar3[2]) {
    *puVar3 = 0xc;
code_r0x829b8dd8:
    return 1;
  }
  *puVar3 = 0xd;
  param_1[6] = (int)"incorrect data check";
code_r0x829b8dbc:
  *(undefined4 *)(param_1[7] + 4) = 5;
  uVar5 = uVar4;
  goto code_r0x829b8dc4;
code_r0x829b8e98:
  if (param_1[1] == 0) {
    return uVar5;
  }
  param_1[1] = param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 * 0x100 + *(int *)(param_1[7] + 8);
  *param_1 = *param_1 + 1;
  *(undefined4 *)param_1[7] = 5;
  uVar5 = uVar4;
code_r0x829b8eec:
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 + *(int *)(param_1[7] + 8);
    *param_1 = *param_1 + 1;
    param_1[0xc] = ((undefined4 *)param_1[7])[2];
    *(undefined4 *)param_1[7] = 6;
    return 2;
  }
  return uVar5;
}

