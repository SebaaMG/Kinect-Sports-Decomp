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


void fn_82553980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (param_2 + 0x1148) * 4;
  iVar4 = *(int *)(param_1 + 0x4660) + -1;
  iVar1 = *(int *)(iVar2 + param_1);
  *(int *)(param_1 + 0x4660) = iVar4;
  if (iVar1 != iVar4) {
    fn_82F68CC0(iVar1 * 0xd0 + param_1 + 0x420,iVar4 * 0xd0 + param_1 + 0x420,0xd0);
  }
  piVar5 = (int *)(param_1 + 0x4520);
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x4520);
  while (iVar4 != *(int *)(param_1 + 0x4660)) {
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + 1;
    iVar4 = *piVar5;
  }
  *(int *)((iVar3 + 0x1148) * 4 + param_1) = iVar1;
  *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(param_1 + 0x4660);
  return;
}

