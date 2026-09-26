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
extern int fn_82A1DDC0();


void fn_82808858(int param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  puVar2 = *(uint **)(param_1 + 100);
  uVar1 = *(ushort *)((int)puVar2 + 0x32);
  fn_82A1DDC0(param_3,(longlong)(int)(uint)*(byte *)(puVar2[2] + *(int *)(param_2 + 4)) *
                            (longlong)(int)puVar2[1] + (ulonglong)*puVar2,puVar2[0xe]);
  lVar4 = 0;
  uVar5 = 0;
  if (*(short *)(param_1 + 0x48) != 0) {
    lVar3 = (ulonglong)uVar1 * 4;
    do {
      if ((*(int *)(param_1 + 0x50) != 0) && (*(char *)(*(int *)(param_1 + 0x50) + uVar5) == '\0'))
      {
        fn_82A1DDC0(lVar4 + param_3,*(undefined4 *)(param_1 + 0x54),lVar3);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar3 + lVar4;
    } while (uVar5 < *(ushort *)(param_1 + 0x48));
  }
  return;
}

