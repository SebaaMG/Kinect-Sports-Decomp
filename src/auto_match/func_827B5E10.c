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


void fn_827B5E10(int param_1,int param_2,int param_3,int param_4,longlong param_5,uint param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x2d0) != 0) && (uVar4 = 0, param_6 != 0)) {
    do {
      if ((int)param_5 != 0) {
        puVar3 = (undefined1 *)
                 ((uVar4 + param_4) * *(int *)(param_2 + 0x14) + param_3 + *(int *)(param_2 + 0x18)
                 + -1);
        pbVar2 = (byte *)(*(int *)(*(int *)(param_1 + 0x2d0) + 0x14) * uVar4 +
                          *(int *)(*(int *)(param_1 + 0x2d0) + 0x18) + -1);
        lVar5 = param_5;
        do {
          pbVar2 = pbVar2 + 1;
          pbVar1 = puVar3 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = (char)((ulonglong)
                           ((longlong)(int)(uint)*pbVar1 * (longlong)(int)(0xff - (uint)*pbVar2) +
                           0xff) >> 8);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_6);
  }
  return;
}

