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
extern int fn_82A1F2B8();
extern int fn_82A3FF60();


int fn_82A43D78(int *param_1)

{
  bool bVar1;
  undefined8 in_r0;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  if (((uint)param_1[9] < (uint)param_1[8]) && (iVar2 = KeGetCurrentProcessType(), iVar2 != 2)) {
    bVar1 = true;
  }
  if ((*param_1 == 0) || (bVar1)) {
    if (param_1[9] + 1U < 0x41) {
      piVar3 = (int *)fn_82A3FF60(0xffffffff83219d50,0x10,0x20970000,0);
      if (piVar3 != (int *)0x0) {
        piVar3[2] = *param_1;
        *param_1 = (int)(piVar3 + 1);
        *piVar3 = param_1[1];
        param_1[1] = (int)piVar3;
        param_1[9] = param_1[9] + 1;
      }
    }
    else {
      fn_82A1F2B8(0xffffffff820896a8);
      trapWord(0x1f,in_r0,0x16);
    }
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

