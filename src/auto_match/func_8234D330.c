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
extern int fn_8234D4C0();
extern int fn_82F622A8();


void fn_8234D330(int *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  
  puVar8 = (undefined2 *)param_1[1];
  if ((puVar8 <= param_2) || (bVar4 = true, param_2 < (undefined2 *)*param_1)) {
    bVar4 = false;
  }
  puVar1 = (undefined2 *)param_1[2];
  if (bVar4) {
    iVar2 = *param_1;
    if (puVar8 == puVar1) {
      uVar3 = (int)puVar8 - iVar2 >> 1;
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)puVar1 - iVar2 >> 1;
      if ((ulonglong)uVar3 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar3 <= (0x7fffffff - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_8234D4C0(param_1,uVar5);
      }
    }
    puVar8 = (undefined2 *)param_1[1];
    if (puVar8 == (undefined2 *)0x0) goto LAB_8234d49c;
    uVar7 = *(undefined2 *)(((int)param_2 - iVar2 >> 1) * 2 + *param_1);
  }
  else {
    if (puVar8 == puVar1) {
      uVar3 = (int)puVar8 - *param_1 >> 1;
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar6 = (longlong)(int)uVar3 + 1;
      uVar3 = (int)puVar1 - *param_1 >> 1;
      if ((ulonglong)uVar3 < (uVar6 & 0xffffffff)) {
        uVar5 = 0;
        if ((ulonglong)uVar3 <= (0x7fffffff - (ulonglong)(uVar3 >> 1) & 0xffffffff)) {
          uVar5 = (ulonglong)(uVar3 >> 1) + (longlong)(int)uVar3;
        }
        if ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff)) {
          uVar5 = uVar6;
        }
        fn_8234D4C0(param_1,uVar5);
      }
    }
    puVar8 = (undefined2 *)param_1[1];
    if (puVar8 == (undefined2 *)0x0) goto LAB_8234d49c;
    uVar7 = *param_2;
  }
  *puVar8 = uVar7;
LAB_8234d49c:
  param_1[1] = param_1[1] + 2;
  return;
}

