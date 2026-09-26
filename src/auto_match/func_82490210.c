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


void fn_82490210(int param_1,ulonglong param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  uVar3 = param_2;
  while( true ) {
    uVar6 = uVar3 + 1 & 0x7fffffff;
    uVar5 = uVar6 * 2;
    if ((int)param_3 <= (int)uVar5) break;
    piVar4 = (int *)((int)(uVar6 << 3) + param_1);
    if (*piVar4 < piVar4[-1]) {
      uVar5 = uVar5 - 1;
    }
    *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + param_1) =
         *(undefined4 *)((int)((uVar5 & 0xffffffff) << 2) + param_1);
    uVar3 = uVar5;
  }
  if ((int)uVar5 == (int)param_3) {
    uVar6 = uVar3 & 0xffffffff;
    uVar3 = param_3 - 1;
    *(undefined4 *)((int)(uVar6 << 2) + param_1) =
         *(undefined4 *)((int)((param_3 & 0xffffffff) << 2) + param_1 + -4);
  }
  iVar2 = (int)uVar3;
  uVar7 = iVar2 - 1;
  bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
  while ((uVar6 = (longlong)((int)uVar7 >> 1) + (ulonglong)bVar8, (int)param_2 < iVar2 &&
         (iVar1 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + param_1), iVar1 < *param_4))) {
    iVar2 = (int)uVar6;
    uVar7 = iVar2 - 1;
    bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
    *(int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = iVar1;
    uVar3 = uVar6;
  }
  *(int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = *param_4;
  return;
}

