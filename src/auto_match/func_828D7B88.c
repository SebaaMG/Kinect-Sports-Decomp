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
extern int fn_828D7848();


void fn_828D7B88(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_2, puVar1 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (undefined4 *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  uVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = *puVar2;
  }
  fn_828D7848(CONCAT44(uVar4,param_1[2]),CONCAT44(uVar3,param_2[2]),
                (ulonglong)(uint)param_2[2] - (ulonglong)(uint)param_1[2]);
  return;
}

