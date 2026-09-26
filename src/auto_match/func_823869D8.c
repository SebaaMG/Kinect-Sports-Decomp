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
extern int fn_82386E68();
extern int fn_8265CA20();
extern int fn_82F622A8();


void fn_823869D8(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = (uint)param_2;
  if (0xfffffff < uVar4) {
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 4) < uVar4) {
    iVar3 = fn_82386E68(param_2);
    iVar6 = param_1[1];
    iVar5 = iVar3;
    for (iVar7 = *param_1; iVar7 != iVar6; iVar7 = iVar7 + 0x10) {
      if (iVar5 != 0) {
        puVar1 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
      }
      iVar5 = iVar5 + 0x10;
    }
    iVar7 = *param_1;
    iVar6 = param_1[1] - iVar7;
    if (iVar7 != 0) {
      for (; iVar7 != param_1[1]; iVar7 = iVar7 + 0x10) {
      }
      fn_8265CA20();
    }
    *param_1 = iVar3;
    param_1[2] = uVar4 * 0x10 + iVar3;
    param_1[1] = (iVar6 >> 4) * 0x10 + iVar3;
  }
  return;
}

