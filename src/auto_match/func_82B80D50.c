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


undefined8 fn_82B80D50(int param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar4 == 0) || (bVar2 = true, 0x66 < uVar4)) {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(uint *)(param_1 + 8) & 0x380000) < 0x100001) goto LAB_82b80db0;
      uVar4 = *(uint *)((*(uint **)(param_1 + 0x2c))[3] + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
        bVar2 = true;
      }
      uVar4 = *(uint *)((*(uint **)(param_1 + 0x30))[3] + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar3 = false, uVar4 == 0x7c)) {
        bVar3 = true;
      }
      if (((bVar2) && (bVar3)) && (((**(uint **)(param_1 + 0x30) ^ param_5) & 0x18) != 0)) {
        return 0;
      }
      if ((!bVar2) && (!bVar3)) goto LAB_82b80db0;
      bVar2 = ((**(uint **)(param_1 + 0x2c) >> 1 & 0xff ^ param_5 >> 1) & 1) == 0;
    }
    else {
      bVar2 = (param_5 & 8) == 0;
    }
  }
  else {
    if ((param_5 & 0xfffffffe) != 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
      bVar2 = true;
    }
    bVar2 = !bVar2;
  }
  if (!bVar2) {
    return 0;
  }
LAB_82b80db0:
  puVar5 = (uint *)(param_2[3] + 4);
  for (puVar1 = (uint *)*puVar5; puVar1 != param_2; puVar1 = (uint *)puVar1[2]) {
    puVar5 = puVar1 + 2;
  }
  *puVar5 = param_2[2];
  param_2[2] = *(uint *)(param_3 + 4);
  *(uint **)(param_3 + 4) = param_2;
  param_2[3] = param_3;
  *param_2 = param_5 & 0x1f | (param_4 & 0xff) << 5 | *param_2 & 0xffffe000;
  return 1;
}

