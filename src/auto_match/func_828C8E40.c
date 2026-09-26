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


void fn_828C8E40(int param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  uint uVar6;
  
  uVar3 = (param_2 + 1 & 0x7fffffff) << 1;
  iVar5 = (int)uVar3;
  uVar1 = param_2;
  while (uVar4 = uVar3, iVar5 < (int)param_3) {
    puVar2 = (ulonglong *)((int)(uVar4 << 3) + param_1);
    if (*puVar2 < puVar2[-1]) {
      uVar4 = uVar4 - 1;
    }
    uVar3 = (uVar4 + 1 & 0x7fffffff) << 1;
    *(undefined8 *)((int)((uVar1 & 0xffffffff) << 3) + param_1) =
         *(undefined8 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    iVar5 = (int)uVar3;
    uVar1 = uVar4;
  }
  if (iVar5 == (int)param_3) {
    uVar3 = uVar1 & 0xffffffff;
    uVar1 = param_3 - 1;
    *(undefined8 *)((int)(uVar3 << 3) + param_1) =
         *(undefined8 *)((int)((param_3 & 0xffffffff) << 3) + param_1 + -8);
  }
  iVar5 = (int)uVar1;
  uVar6 = iVar5 - 1;
  uVar3 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while ((uVar4 = uVar3, (int)param_2 < iVar5 &&
         (uVar3 = *(ulonglong *)((int)((uVar4 & 0xffffffff) << 3) + param_1), uVar3 < *param_4))) {
    iVar5 = (int)uVar4;
    uVar6 = iVar5 - 1;
    *(ulonglong *)((int)((uVar1 & 0xffffffff) << 3) + param_1) = uVar3;
    uVar3 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    uVar1 = uVar4;
  }
  *(ulonglong *)((int)((uVar1 & 0xffffffff) << 3) + param_1) = *param_4;
  return;
}

