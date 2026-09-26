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
#define _iStack00000010 ((*(U64*)&iStack00000010))
#define _iStack00000018 ((*(U64*)&iStack00000018))
#define _iStack00000020 ((*(U64*)&iStack00000020))
extern int fn_828C4690();
extern unsigned int iStack00000010;
extern unsigned int iStack00000018;
extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_828C4710(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  int iStack00000010;
  int iStack00000018;
  int iStack00000020;
  uint uStack00000024;
  
  iStack00000010 = (int)(param_1 >> 0x20);
  iVar3 = iStack00000010;
  uVar6 = param_1 >> 2 & 0x3fffffff;
  uVar5 = uVar6;
  if (*(uint *)(iStack00000010 + 8) <= uVar6) {
    uVar5 = uVar6 - *(uint *)(iStack00000010 + 8);
  }
  iStack00000018 = (int)(param_2 >> 0x20);
  iVar4 = iStack00000018;
  uVar8 = param_2 >> 2 & 0x3fffffff;
  uVar7 = uVar8;
  if (*(uint *)(iStack00000018 + 8) <= uVar8) {
    uVar7 = uVar8 - *(uint *)(iStack00000018 + 8);
  }
  piVar1 = (int *)(iStack00000018 + 4);
  piVar2 = (int *)(iStack00000010 + 4);
  _iStack00000010 = param_1;
  _iStack00000018 = param_2;
  _iStack00000020 = param_3;
  if (*(uint *)(*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + *piVar1) +
                        (int)((param_2 & 3) << 2)) + 8) <
      *(uint *)(*(int *)(*(int *)((int)((uVar5 & 0xffffffff) << 2) + *piVar2) +
                        (int)((param_1 & 3) << 2)) + 8)) {
    fn_828C4690(param_2,param_1);
  }
  uVar5 = uVar8;
  if (*(uint *)(iVar4 + 8) <= uVar8) {
    uVar5 = uVar8 - *(uint *)(iVar4 + 8);
  }
  uVar9 = uStack00000024 >> 2;
  if (*(uint *)(iStack00000020 + 8) <= uVar9) {
    uVar9 = uVar9 - *(uint *)(iStack00000020 + 8);
  }
  if (*(uint *)(*(int *)(*(int *)(*(int *)(iStack00000020 + 4) + uVar9 * 4) +
                        (int)((_iStack00000020 & 3) << 2)) + 8) <
      *(uint *)(*(int *)(*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((param_2 & 3) << 2)) + 8)) {
    fn_828C4690(param_3,param_2);
  }
  uVar5 = (ulonglong)*(uint *)(iVar3 + 8);
  if (uVar5 <= uVar6) {
    uVar6 = uVar6 - uVar5;
  }
  if (*(uint *)(iVar4 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(iVar4 + 8);
  }
  if (*(uint *)(*(int *)(*(int *)((int)((uVar8 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) +
                        (int)((param_2 & 3) << 2)) + 8) <
      *(uint *)(*(int *)(*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(iVar3 + 4)) +
                        (int)((param_1 & 3) << 2)) + 8)) {
    fn_828C4690(param_2,param_1);
  }
  return;
}

