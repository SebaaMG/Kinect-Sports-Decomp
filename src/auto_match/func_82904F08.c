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
extern int fn_82904258();


int fn_82904F08(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 4);
  iVar5 = 0;
  if (iVar2 == 1) {
    do {
      if (*(int *)(param_2 + 4) != 1) break;
      iVar2 = fn_82904F08(param_1,*(undefined4 *)(param_2 + 8),iVar5 * 4 + param_3);
      param_2 = *(int *)(param_2 + 0xc);
      iVar5 = iVar2 + iVar5;
    } while (param_2 != 0);
    if (param_2 == 0) {
      return iVar5;
    }
    iVar2 = fn_82904F08(param_1,param_2,iVar5 * 4 + param_3);
    return iVar2 + iVar5;
  }
  if (iVar2 == 6) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
LAB_82905084:
    iVar2 = fn_82904F08(param_1,uVar1,param_3);
    return iVar2;
  }
  if (iVar2 == 8) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x14) == 0) {
      return 0;
    }
    do {
      iVar2 = fn_82904F08(param_1,*(undefined4 *)(param_2 + 0x10),iVar5 * 4 + param_3);
      uVar3 = uVar3 + 1;
      iVar5 = iVar2 + iVar5;
    } while (uVar3 < *(uint *)(param_2 + 0x14));
    return iVar5;
  }
  if (iVar2 != 9) {
    if (iVar2 != 0xb) {
      fn_82904258(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    goto LAB_82905084;
  }
  uVar3 = 0;
  iVar2 = *(int *)(param_2 + 0x20) * *(int *)(param_2 + 0x1c);
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 0:
    uVar3 = 0x17;
    break;
  case 2:
  case 6:
    uVar3 = 2;
    break;
  case 3:
  case 7:
    uVar3 = 0x2000000;
    goto code_r0x82904fdc;
  case 4:
  case 8:
    uVar3 = 0x4000000;
    goto code_r0x82904fdc;
  case 5:
  case 9:
    uVar3 = 0x8000000;
code_r0x82904fdc:
    uVar3 = uVar3 | 2;
    break;
  case 0xb:
    uVar3 = 0x2000000;
    break;
  case 0xc:
    uVar3 = 0x4000000;
    break;
  case 0xd:
    uVar3 = 0x8000000;
  }
  if ((*(uint *)(param_1 + 0x14) & 0x20) != 0) {
    uVar3 = uVar3 & 0xf1ffffff | 0x2000000;
  }
  if (iVar2 != 0) {
    puVar4 = (uint *)(param_3 + -4);
    for (iVar5 = iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar4 = puVar4 + 1;
      *puVar4 = uVar3;
    }
  }
  return iVar2;
}

