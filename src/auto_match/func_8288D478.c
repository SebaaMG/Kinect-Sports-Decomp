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
extern unsigned int *auStack_30;
extern int fn_8288BFA8();
extern unsigned int uStack_38;


undefined4 * fn_8288D478(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  
  puVar4 = (undefined4 *)0x0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_3, puVar1 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  piVar2 = (int *)*param_2;
  puVar4 = (undefined4 *)0x0;
  if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
    puVar4 = *(undefined4 **)*piVar2;
  }
  if (puVar4 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
  }
  uStack_38 = CONCAT44(uVar7,param_2[2]);
  puVar3 = (undefined8 *)fn_8288BFA8(auStack_30,uStack_38,CONCAT44(uVar5,param_3[2]));
  uVar6 = *puVar3;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)uVar6)) & ((U64)0xFFFFFFFF)) << 32));
  param_2[2] = (((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
  param_1[2] = (((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
  if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar2;
  }
  return param_1;
}

