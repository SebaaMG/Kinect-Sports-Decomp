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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_823BAEC8();


undefined4 * fn_823BAC60(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = param_3[2];
  if (param_2[2] != iVar1) {
    if (iVar1 != param_4[2]) {
      puVar4 = (undefined4 *)0x0;
      if (((int *)*param_4 != (int *)0x0) &&
         (puVar2 = *(undefined4 **)*param_4, puVar2 != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)*puVar2;
      }
      if (puVar4 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar4;
      }
      puVar4 = (undefined4 *)0x0;
      if (((int *)*param_3 != (int *)0x0) &&
         (puVar2 = *(undefined4 **)*param_3, puVar2 != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)*puVar2;
      }
      uVar6 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        uVar6 = *puVar4;
      }
      puVar4 = (undefined4 *)0x0;
      if (((int *)*param_2 != (int *)0x0) &&
         (puVar2 = *(undefined4 **)*param_2, puVar2 != (undefined4 *)0x0)) {
        puVar4 = (undefined4 *)*puVar2;
      }
      uVar7 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        uVar7 = *puVar4;
      }
      fn_823BAEC8(CONCAT44(uVar7,param_2[2]),CONCAT44(uVar6,iVar1),CONCAT44(uVar5,param_4[2]))
      ;
      param_2[2] = (param_4[2] - param_3[2]) + param_2[2];
    }
  }
  piVar3 = (int *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar3 != (int *)0x0) && (puVar4 = (undefined4 *)*piVar3, puVar4 != (undefined4 *)0x0)) {
    *param_1 = *puVar4;
  }
  param_1[2] = param_2[2];
  return param_1;
}

