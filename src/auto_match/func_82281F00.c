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
extern int fn_822821C0();
extern int fn_82F622A8();


void fn_82281F00(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar2 = (undefined4 *)param_1[1];
  if ((puVar2 <= param_2) || (bVar5 = true, param_2 < (undefined4 *)*param_1)) {
    bVar5 = false;
  }
  puVar9 = (undefined4 *)param_1[2];
  if (bVar5) {
    uVar3 = *param_1;
    if (puVar2 == puVar9) {
      uVar1 = (int)((int)puVar2 - uVar3) / 0xc;
      if (0x15555554 < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar8 = (longlong)(int)uVar1 + 1;
      uVar1 = (int)((int)puVar9 - uVar3) / 0xc;
      if ((ulonglong)uVar1 < (uVar8 & 0xffffffff)) {
        uVar7 = 0;
        if ((ulonglong)uVar1 <= (0x15555555 - (ulonglong)(uVar1 >> 1) & 0xffffffff)) {
          uVar7 = (ulonglong)(uVar1 >> 1) + (longlong)(int)uVar1;
        }
        if ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          uVar7 = uVar8;
        }
        fn_822821C0(param_1,uVar7);
      }
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar9 = (undefined4 *)(((int)((int)param_2 - uVar3) / 0xc) * 0xc + *param_1);
    if (puVar2 == (undefined4 *)0x0) goto LAB_822820cc;
    *puVar2 = *puVar9;
    puVar2[1] = 0;
    puVar2[2] = 0;
    iVar4 = puVar9[2];
    uVar10 = puVar9[1];
  }
  else {
    if (puVar2 == puVar9) {
      uVar3 = (int)((int)puVar2 - *param_1) / 0xc;
      if (0x15555554 < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar8 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)((int)puVar9 - *param_1) / 0xc;
      if ((ulonglong)uVar3 < (uVar8 & 0xffffffff)) {
        uVar7 = 0;
        if ((ulonglong)uVar3 <= (0x15555555 - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar7 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          uVar7 = uVar8;
        }
        fn_822821C0(param_1,uVar7);
      }
    }
    puVar2 = (undefined4 *)param_1[1];
    if (puVar2 == (undefined4 *)0x0) goto LAB_822820cc;
    *puVar2 = *param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    iVar4 = param_2[2];
    uVar10 = param_2[1];
  }
  if ((iVar4 != 0) && (cVar6 = fn_8223AAC0(iVar4), cVar6 != '\0')) {
    if (puVar2[2] != 0) {
      fn_822315A0();
    }
    puVar2[2] = iVar4;
    puVar2[1] = uVar10;
  }
LAB_822820cc:
  param_1[1] = param_1[1] + 0xc;
  return;
}

