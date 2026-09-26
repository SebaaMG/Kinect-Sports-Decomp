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
extern int fn_82F68CC0();


void fn_829B9120(int param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 0x5fb);
  iVar6 = *(int *)(param_1 + 0x5dc);
  if ((int)param_3 == 0xff) {
    fn_82F68CC0(param_2,iVar6 + 1,
                 ((longlong)(int)(uint)bVar1 * (longlong)*(int *)(param_1 + 0x5b8) + 7U & 0xffffffff
                 ) >> 3);
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5b8);
    if (bVar1 == 1) {
      pbVar2 = (byte *)(iVar6 + 1);
      uVar5 = 0x80;
      uVar3 = 7;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((uVar5 & param_3) != 0) {
          *param_2 = (byte)(0x7f7f >> (7 - uVar3 & 0x3f)) & *param_2 |
                     (byte)((*pbVar2 >> (uVar3 & 0x3f) & 1) << (uVar3 & 0x3f));
        }
        if (uVar3 == 0) {
          uVar3 = 7;
          pbVar2 = pbVar2 + 1;
          param_2 = param_2 + 1;
        }
        else {
          uVar3 = uVar3 - 1;
        }
        if ((int)uVar5 == 1) {
          uVar5 = 0x80;
        }
        else {
          uVar5 = (ulonglong)((int)uVar5 >> 1);
        }
      }
    }
    else if (bVar1 == 2) {
      pbVar2 = (byte *)(iVar6 + 1);
      uVar5 = 0x80;
      uVar3 = 6;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((uVar5 & param_3) != 0) {
          *param_2 = (byte)(0x3f3f >> (6 - uVar3 & 0x3f)) & *param_2 |
                     (byte)((*pbVar2 >> (uVar3 & 0x3f) & 3) << (uVar3 & 0x3f));
        }
        if (uVar3 == 0) {
          uVar3 = 6;
          pbVar2 = pbVar2 + 1;
          param_2 = param_2 + 1;
        }
        else {
          uVar3 = uVar3 - 2;
        }
        if ((int)uVar5 == 1) {
          uVar5 = 0x80;
        }
        else {
          uVar5 = (ulonglong)((int)uVar5 >> 1);
        }
      }
    }
    else if (bVar1 == 4) {
      pbVar2 = (byte *)(iVar6 + 1);
      uVar5 = 0x80;
      uVar3 = 4;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((uVar5 & param_3) != 0) {
          *param_2 = (byte)(0xf0f >> (4 - uVar3 & 0x3f)) & *param_2 |
                     (byte)((*pbVar2 >> (uVar3 & 0x3f) & 0xf) << (uVar3 & 0x3f));
        }
        if (uVar3 == 0) {
          uVar3 = 4;
          pbVar2 = pbVar2 + 1;
          param_2 = param_2 + 1;
        }
        else {
          uVar3 = uVar3 - 4;
        }
        if ((int)uVar5 == 1) {
          uVar5 = 0x80;
        }
        else {
          uVar5 = (ulonglong)((int)uVar5 >> 1);
        }
      }
    }
    else {
      uVar3 = (uint)(bVar1 >> 3);
      iVar6 = iVar6 + 1;
      uVar5 = 0x80;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((uVar5 & param_3) != 0) {
          fn_82F68CC0(param_2,iVar6,uVar3);
        }
        iVar6 = uVar3 + iVar6;
        param_2 = param_2 + uVar3;
        if (uVar5 == 1) {
          uVar5 = 0x80;
        }
        else {
          uVar5 = uVar5 >> 1;
        }
      }
    }
  }
  return;
}

