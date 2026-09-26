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
extern unsigned int *auStack_10;


void fn_827F1F30(ushort *param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  ushort auStack_10 [8];
  
  if (param_2 == 0) {
    auStack_10[0] = *param_3;
  }
  else {
    auStack_10[0] = 0;
    if (param_2 < 0x10) {
      lVar5 = -(ulonglong)(param_2 >> 4);
      uVar3 = param_2 & 0xf;
      puVar4 = auStack_10;
      param_3 = (ushort *)((int)param_3 - (param_2 >> 3 & 0x1ffffffe));
      if (-1 < (int)lVar5 + -1) {
        uVar2 = *param_3;
        do {
          param_3 = param_3 + -1;
          uVar1 = *param_3;
          *puVar4 = uVar2 << uVar3;
          *puVar4 = uVar1 >> (0x10 - uVar3 & 0x3f) | *puVar4;
          puVar4 = puVar4 + -1;
          lVar5 = lVar5 + -1;
          uVar2 = uVar1;
        } while (lVar5 != 0);
      }
      *puVar4 = *param_3 << uVar3;
    }
  }
  *param_1 = auStack_10[0];
  return;
}

