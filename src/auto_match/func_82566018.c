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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8232CA90();
extern int fn_82F622A8();


void fn_82566018(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((puVar1 <= param_2) || (bVar5 = true, param_2 < (undefined4 *)*param_1)) {
    bVar5 = false;
  }
  puVar9 = (undefined4 *)param_1[2];
  if (bVar5) {
    uVar2 = *param_1;
    if (puVar1 == puVar9) {
      uVar4 = (int)((int)puVar1 - uVar2) >> 3;
      if (0x1ffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar8 = (longlong)(int)uVar4 + 1;
      uVar4 = (int)((int)puVar9 - uVar2) >> 3;
      if ((ulonglong)uVar4 < (uVar8 & 0xffffffff)) {
        uVar7 = 0;
        if ((ulonglong)uVar4 <= (0x1fffffff - (ulonglong)(uVar4 >> 1) & 0xffffffff)) {
          uVar7 = (ulonglong)(uVar4 >> 1) + (longlong)(int)uVar4;
        }
        if ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          uVar7 = uVar8;
        }
        fn_8232CA90(param_1,uVar7);
      }
    }
    puVar1 = (undefined4 *)param_1[1];
    puVar9 = (undefined4 *)(((int)((int)param_2 - uVar2) >> 3) * 8 + *param_1);
    if (puVar1 == (undefined4 *)0x0) goto LAB_825661c8;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar3 = puVar9[1];
    uVar10 = *puVar9;
  }
  else {
    if (puVar1 == puVar9) {
      uVar2 = (int)((int)puVar1 - *param_1) >> 3;
      if (0x1ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar8 = (longlong)(int)uVar2 + 1;
      uVar2 = (int)((int)puVar9 - *param_1) >> 3;
      if ((ulonglong)uVar2 < (uVar8 & 0xffffffff)) {
        uVar7 = 0;
        if ((ulonglong)uVar2 <= (0x1fffffff - (ulonglong)(uVar2 >> 1) & 0xffffffff)) {
          uVar7 = (ulonglong)(uVar2 >> 1) + (longlong)(int)uVar2;
        }
        if ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          uVar7 = uVar8;
        }
        fn_8232CA90(param_1,uVar7);
      }
    }
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_825661c8;
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar3 = param_2[1];
    uVar10 = *param_2;
  }
  if ((iVar3 != 0) && (cVar6 = fn_8223AAC0(iVar3), cVar6 != '\0')) {
    if (puVar1[1] != 0) {
      fn_822315A0();
    }
    puVar1[1] = iVar3;
    *puVar1 = uVar10;
  }
LAB_825661c8:
  param_1[1] = param_1[1] + 8;
  return;
}

