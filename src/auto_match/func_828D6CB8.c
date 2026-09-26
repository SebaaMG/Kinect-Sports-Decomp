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
extern int fn_828D5DC0();
extern unsigned int uStack_20;


void fn_828D6CB8(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 uStack_20;
  
  puVar3 = (undefined4 *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_2, puVar1 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)*puVar1;
  }
  uVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = *puVar3;
  }
  puVar3 = (undefined4 *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)*puVar1;
  }
  uVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = *puVar3;
  }
  fn_828D5DC0(CONCAT44(uVar4,param_1[2]),CONCAT44(uVar2,param_2[2]),uStack_20);
  return;
}

