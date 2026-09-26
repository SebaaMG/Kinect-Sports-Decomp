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


void fn_828088F8(int param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_1 + 100);
  uVar5 = 0;
  uVar4 = (longlong)(int)(uint)*(byte *)(puVar1[2] + *(int *)(param_2 + 4)) *
          (longlong)(int)puVar1[1] + (ulonglong)*puVar1;
  if (*(short *)(param_1 + 0x48) != 0) {
    lVar2 = (ulonglong)*(ushort *)((int)puVar1 + 0x32) * 4;
    do {
      uVar3 = uVar4;
      if ((*(int *)(param_1 + 0x50) != 0) && (*(char *)(*(int *)(param_1 + 0x50) + uVar5) == '\0'))
      {
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x54);
      }
      fn_82F68CC0(param_3,uVar3,lVar2);
      uVar5 = uVar5 + 1;
      param_3 = lVar2 + param_3;
      uVar4 = lVar2 + uVar4;
    } while (uVar5 < *(ushort *)(param_1 + 0x48));
  }
  return;
}

