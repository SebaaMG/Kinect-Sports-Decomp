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


undefined8 fn_82EE0A68(int *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = param_1;
  if (param_2 == 0) {
    param_1[1] = 0;
    param_1[2] = param_1[2] & 0xfffffffe;
    *(undefined2 *)(param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    piVar3 = (int *)param_1[0x82];
    param_1[0x82] = 0;
  }
  uVar2 = 0;
  do {
    if (piVar3 == (int *)0x0) {
      return uVar2;
    }
    piVar1 = (int *)piVar3[0x82];
    uVar2 = (**(code **)(*param_1 + 4))(param_1,piVar3);
    piVar3 = piVar1;
  } while (-1 < (int)uVar2);
  return uVar2;
}

