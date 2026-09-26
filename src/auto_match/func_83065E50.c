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
extern int fn_8305F2E8();
extern int fn_83065FF0();
extern unsigned int lbl_83265080;


undefined8 fn_83065E50(void)

{
  int *piVar1;
  longlong lVar2;
  int *piVar4;
  undefined8 uVar3;
  
  piVar1 = *(int **)(lbl_83265080 + 0x14);
  piVar4 = (int *)*piVar1;
  if (piVar4 == (int *)0x0) {
    lVar2 = (**(code **)(*(int *)piVar1[3] + 4))((int *)piVar1[3],piVar1[5]);
    if ((int)lVar2 <= piVar1[5]) {
      return 0;
    }
    fn_83065FF0(piVar1,lVar2 - (ulonglong)(uint)piVar1[5]);
    piVar4 = (int *)*piVar1;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    *piVar1 = *piVar4;
  }
  else {
    *piVar1 = *piVar4;
  }
  piVar1[5] = piVar1[5] + 1;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  uVar3 = fn_8305F2E8();
  return uVar3;
}

