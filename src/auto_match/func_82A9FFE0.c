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
extern unsigned int *auStack_60;
extern int fn_82A9FD38();
extern int fn_82A9FF70();


void fn_82A9FFE0(undefined8 param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_60 [96];
  
  if (((param_2 != (int *)0x0) && (iVar1 = (**(code **)(*param_2 + 0xc))(param_2), iVar1 != 0)) &&
     (uVar2 = (ulonglong)*(uint *)(iVar1 + 0xc), uVar2 != 0)) {
    iVar4 = *(int *)(iVar1 + 0x10) + iVar1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      iVar3 = *(int *)(iVar4 + 0xc) + iVar1;
      if (*(short *)(iVar3 + 2) == 3) {
        fn_82A9FF70(param_1,auStack_60,iVar1,iVar4,iVar3);
        fn_82A9FD38(param_1,auStack_60,iVar1,iVar4,iVar3);
      }
      iVar4 = iVar4 + 0x14;
    }
  }
  return;
}

