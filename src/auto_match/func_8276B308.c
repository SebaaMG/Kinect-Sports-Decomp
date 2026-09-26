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
extern int fn_82769F60();


void fn_8276B308(int *param_1,undefined8 param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar4 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) goto LAB_8276b364;
    lVar4 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  fn_82769F60(param_1,param_2,lVar4);
LAB_8276b364:
  piVar1 = (int *)*param_1;
  param_4 = piVar1[1] & param_4;
  *piVar1 = *piVar1 + 1;
  iVar2 = *param_1;
  puVar9 = (uint *)((param_4 + 1) * 8 + iVar2);
  uVar3 = *puVar9;
  uVar5 = param_4;
  if (uVar3 == 0xfffffffe) {
    *puVar9 = 0xffffffff;
    *(undefined2 *)(puVar9 + 1) = *(undefined2 *)*param_3;
    *(undefined2 *)((int)puVar9 + 6) = *(undefined2 *)param_3[1];
  }
  else {
    do {
      uVar5 = uVar5 + 1 & *(uint *)(iVar2 + 4);
      puVar6 = (uint *)((uVar5 + 1) * 8 + iVar2);
    } while (*puVar6 != 0xfffffffe);
    uVar7 = (uint)*(ushort *)(puVar9 + 1) & *(uint *)(iVar2 + 4);
    if (uVar7 == param_4) {
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar3;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar9 + 1);
        *(undefined2 *)((int)puVar6 + 6) = *(undefined2 *)((int)puVar9 + 6);
      }
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)*param_3;
      *(undefined2 *)((int)puVar9 + 6) = *(undefined2 *)param_3[1];
      *puVar9 = uVar5;
    }
    else {
      while (puVar8 = (uint *)((uVar7 + 1) * 8 + iVar2), *puVar8 != param_4) {
        uVar7 = *puVar8;
      }
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar3;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar9 + 1);
        *(undefined2 *)((int)puVar6 + 6) = *(undefined2 *)((int)puVar9 + 6);
      }
      *puVar8 = uVar5;
      *(undefined2 *)(puVar9 + 1) = *(undefined2 *)*param_3;
      *(undefined2 *)((int)puVar9 + 6) = *(undefined2 *)param_3[1];
      *puVar9 = 0xffffffff;
    }
  }
  return;
}

