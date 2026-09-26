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


void fn_82CABBF0(int param_1,uint param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)((param_3 - 1 & 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc));
  iVar2 = (param_3 & 1) * *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc);
  if (param_2 == 0 && param_3 == 0) goto LAB_82cabcf0;
  if (param_2 == 0) {
    *param_5 = 1;
LAB_82cabd00:
    if (param_3 == 0) {
      uVar5 = 0x10;
      uVar4 = uVar5;
    }
    else {
      uVar5 = (uint)(*pbVar6 >> 2);
      uVar4 = uVar5;
    }
  }
  else {
    if (param_3 == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = pbVar6[param_2] & 3;
      bVar1 = *(byte *)(iVar2 + param_2 + -1);
      uVar4 = bVar1 & 3;
      if (uVar5 != uVar4) {
        if (uVar4 == 2) {
          if ((pbVar6[param_2] & 3) == 0) {
            uVar5 = 2;
          }
          else {
            if (uVar5 != 1) goto LAB_82cabcf0;
            uVar5 = 2;
          }
        }
        else if ((bVar1 & 3) == 0) {
          if (uVar5 != 1) {
LAB_82cabcf0:
            uVar5 = 0;
          }
        }
        else {
          if ((uVar4 != 1) || (uVar5 != 2)) goto LAB_82cabcf0;
          uVar5 = pbVar6[param_2 - 1] & 3;
          if (uVar5 == 1) {
            uVar5 = 2;
          }
          else if (param_4 < 0xd) {
            if (uVar5 == 2) {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 2;
          }
        }
      }
    }
    *param_5 = uVar5;
    if (param_2 == 0) goto LAB_82cabd00;
    uVar5 = (uint)(*(byte *)(iVar2 + param_2 + -1) >> 2);
    uVar4 = uVar5;
    if (param_3 != 0) {
      uVar4 = (uint)(pbVar6[param_2] >> 2);
    }
  }
  uVar3 = uVar4;
  if ((param_2 & param_3) != 0) {
    uVar3 = (uint)(pbVar6[param_2 - 1] >> 2);
  }
  if (uVar5 < uVar4) {
    uVar4 = uVar3;
    if (uVar5 < uVar3) {
LAB_82cabdb4:
      *param_6 = uVar5;
      return;
    }
  }
  else {
    uVar5 = uVar3;
    if (uVar3 <= uVar4) goto LAB_82cabdb4;
  }
  *param_6 = uVar4;
  return;
}

