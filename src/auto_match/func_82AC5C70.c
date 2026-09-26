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
extern int fn_82631400();
extern unsigned int uStack_34;
extern unsigned int uStack_38;


undefined8 fn_82AC5C70(uint *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *apuStack_40 [2];
  uint uStack_38;
  uint uStack_34;
  
  if (param_4 == (undefined4 *)0x0) {
    return 0xffffffff80004005;
  }
  if ((*param_1 & 0xffffff00) != 0x102a1100) {
    return 0xffffffff80004005;
  }
  fn_82631400(param_1,apuStack_40);
  param_4[0x10] = param_1;
  uVar4 = *param_1;
  uVar1 = apuStack_40[0][1];
  if ((*apuStack_40[0] & 0x20) != 0) {
    *(undefined1 *)((int)param_4 + 0x29) = 1;
  }
  if ((uVar4 & 1) == 1) {
    puVar6 = (uint *)(apuStack_40[0][(param_2 + 3) * 2] + (int)apuStack_40[0]);
    *param_4 = puVar6;
    if (puVar6 < apuStack_40[0]) {
      return 0xffffffff80004005;
    }
    if ((uint *)(uVar1 + (int)apuStack_40[0]) < puVar6 + 9) {
      return 0xffffffff80004005;
    }
    uVar4 = puVar6[1];
    param_4[9] = uVar4;
    if ((ulonglong)uVar4 != ((ulonglong)uVar4 / 0xc) * 0xc) {
      return 0xffffffff80004005;
    }
    if (0x5fe8 < uVar4) {
      return 0xffffffff80004005;
    }
    uVar4 = *puVar6 + uStack_38;
    if ((uVar4 - uStack_38 & 0x1f) != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(param_4 + 10) = 0;
    puVar5 = puVar6 + 9;
    uVar2 = puVar6[5];
    param_4[3] = puVar5;
    param_4[7] = uVar2;
    puVar5 = puVar5 + puVar6[6];
    param_4[4] = puVar5;
    uVar3 = puVar6[7];
    param_4[5] = puVar5 + uVar3;
    param_4[6] = (uVar2 >> 3 & 0x7c) + (int)(puVar5 + uVar3);
    uVar2 = puVar6[2];
    param_4[0xd] = uVar2;
  }
  else {
    if ((uVar4 & 1) != 0) {
      return 0xffffffff80004005;
    }
    puVar6 = (uint *)(apuStack_40[0][(param_2 + 3) * 2] + (int)apuStack_40[0]);
    *param_4 = puVar6;
    if (puVar6 < apuStack_40[0]) {
      return 0xffffffff80004005;
    }
    if ((uint *)(uVar1 + (int)apuStack_40[0]) < puVar6 + 8) {
      return 0xffffffff80004005;
    }
    uVar4 = puVar6[1];
    param_4[9] = uVar4;
    if ((ulonglong)uVar4 != ((ulonglong)uVar4 / 0xc) * 0xc) {
      return 0xffffffff80004005;
    }
    if (0x5ff4 < uVar4) {
      return 0xffffffff80004005;
    }
    uVar4 = *puVar6 + uStack_38;
    if ((uVar4 - uStack_38 & 0x1f) != 0) {
      return 0xffffffff80004005;
    }
    *(undefined1 *)(param_4 + 10) = 1;
    uVar2 = puVar6[5];
    param_4[3] = puVar6 + 8;
    param_4[7] = uVar2;
    uVar2 = puVar6[2];
    param_4[0xd] = uVar2;
    uVar2 = uVar2 >> 8;
  }
  uVar3 = puVar6[3];
  param_4[8] = uVar2 & 0x3f;
  param_4[0xe] = uVar3;
  if (((ulonglong)(uint)param_4[9] + (ulonglong)uVar4 <= (ulonglong)uStack_34 + (ulonglong)uStack_38
      ) && ((uint)*(byte *)(param_4 + 10) == (uint)LZCOUNT(param_3) >> 5)) {
    if (apuStack_40[0][param_2 * 2 + 5] == 0) {
      param_4[2] = 0;
    }
    else {
      param_4[2] = apuStack_40[0][param_2 * 2 + 5] + (int)apuStack_40[0];
    }
    if (apuStack_40[0][4] == 0) {
      param_4[0xb] = 0;
    }
    else {
      param_4[0xb] = apuStack_40[0][4] + (int)apuStack_40[0];
    }
    if (apuStack_40[0][3] == 0) {
      param_4[0xc] = 0;
    }
    else {
      param_4[0xc] = apuStack_40[0][3] + (int)apuStack_40[0];
    }
    param_4[0x11] = apuStack_40[0];
    param_4[0x12] = uVar1;
    param_4[0x13] = uStack_38;
    param_4[0x15] = (uint)param_4[9] / 6;
    param_4[0x14] = uStack_34;
    param_4[1] = uVar4;
    return 0;
  }
  return 0xffffffff80004005;
}

