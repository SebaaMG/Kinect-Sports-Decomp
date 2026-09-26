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
extern int fn_828D5268();
extern unsigned int iStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_40;


undefined4 * fn_828D68F8(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uStack_40;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar5 = (undefined4 *)0x0;
  if (((int *)*param_4 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_4, puVar1 != (undefined4 *)0x0)) {
    puVar5 = (undefined4 *)*puVar1;
  }
  uVar3 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar3 = *puVar5;
  }
  puVar5 = (undefined4 *)0x0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_3, puVar1 != (undefined4 *)0x0)) {
    puVar5 = (undefined4 *)*puVar1;
  }
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = *puVar5;
  }
  puVar5 = (undefined4 *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_2, puVar1 != (undefined4 *)0x0)) {
    puVar5 = (undefined4 *)*puVar1;
  }
  iStack_24 = param_2[2];
  uStack_28 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uStack_28 = *puVar5;
  }
  fn_828D5268(&uStack_28,CONCAT44(uStack_28,iStack_24),CONCAT44(uVar4,param_3[2]),
                CONCAT44(uVar3,param_4[2]),uStack_40);
  piVar2 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_4[2] = iStack_24;
  param_1[2] = iStack_24;
  if ((piVar2 != (int *)0x0) && (puVar5 = (undefined4 *)*piVar2, puVar5 != (undefined4 *)0x0)) {
    *param_1 = *puVar5;
  }
  return param_1;
}

