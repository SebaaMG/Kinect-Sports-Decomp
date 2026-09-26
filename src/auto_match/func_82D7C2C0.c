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
extern int fn_82CE5410();
extern int fn_82CE6460();


void fn_82D7C2C0(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar1 = *param_1;
  *param_1 = (uint)((ulonglong)uVar1 - 0x80);
  if ((ulonglong)uVar1 - 0x80 == 0) {
    uVar2 = *(undefined4 *)(param_1[2] * 4 + param_1[1] + -4);
    param_1[2] = param_1[2] - 1;
    iVar7 = fn_82CE5410();
    (**(code **)(**(int **)(iVar7 + 0x10) + 8))(*(int **)(iVar7 + 0x10),uVar2,0x200);
    *param_1 = 0x200;
  }
  if ((param_1[3] & 0x80000000) == 0) {
    uVar9 = (ulonglong)param_1[2] + 3;
    uVar3 = (uVar9 & 0xffffffff) >> 0x10;
    uVar4 = (uVar3 | uVar9 & 0xffffffff) >> 8;
    uVar5 = (uVar4 | uVar3 | uVar9 & 0xffffffff) >> 4;
    uVar6 = (uVar5 | uVar4 | uVar3 | uVar9 & 0xffffffff) >> 2;
    lVar10 = ((uVar6 | uVar5 | uVar4 | uVar3 | uVar9 & 0xffffffff) >> 1 |
             uVar6 | uVar5 | uVar4 | uVar3 | uVar9) + 1;
    if ((int)lVar10 < 1) {
      iVar7 = fn_82CE5410();
      lVar10 = 1;
      puVar8 = param_1 + 4;
    }
    else {
      if ((int)(param_1[3] & 0x3fffffff) <= (int)lVar10) {
        return;
      }
      iVar7 = fn_82CE5410();
      puVar8 = (uint *)0x0;
    }
    fn_82CE6460(*(undefined4 *)(iVar7 + 0x10),param_1 + 1,4,puVar8,lVar10);
  }
  return;
}

