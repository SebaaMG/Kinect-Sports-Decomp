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


longlong fn_82490CB8(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  undefined4 *puVar11;
  
  puVar10 = (uint *)param_1[1];
  lVar9 = 0;
  while ((puVar10 != (uint *)param_1[2] && ((int)lVar9 < 1))) {
    uVar1 = *puVar10;
    if ((*param_1 - 0x82U < uVar1) ||
       (((iVar5 = param_1[7], iVar5 != 0 && (*(uint *)(iVar5 + 0x34) <= uVar1)) &&
        ((*(int *)(iVar5 + 0x30) != 0 || (uVar1 <= *(uint *)(iVar5 + 0x38))))))) {
      puVar10 = puVar10 + 2;
    }
    else {
      puVar2 = (undefined4 *)param_1[9];
      for (puVar11 = (undefined4 *)param_1[8]; puVar11 != puVar2; puVar11 = puVar11 + 1) {
        (**(code **)(*(int *)*puVar11 + 0x18))((int *)*puVar11,*puVar10,*puVar10);
      }
      puVar3 = (uint *)param_1[2];
      puVar8 = puVar10 + 2;
      if (puVar8 != puVar3) {
        puVar6 = puVar10 + -2;
        do {
          puVar6[2] = *puVar8;
          puVar4 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar6[3] = *puVar4;
          puVar6 = puVar6 + 2;
        } while (puVar8 != puVar3);
      }
      iVar7 = param_1[2] + -8;
      for (iVar5 = iVar7; iVar5 != param_1[2]; iVar5 = iVar5 + 8) {
      }
      param_1[2] = iVar7;
      lVar9 = lVar9 + 1;
    }
  }
  return lVar9;
}

