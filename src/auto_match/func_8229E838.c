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
extern int fn_8229E090();
extern int fn_82F63CA0();


void fn_8229E838(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  param_1[4] = 1;
  if (piVar3 != (int *)param_1[1]) {
    piVar2 = piVar3 + 1;
    do {
      iVar1 = *piVar3;
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x414) == 0)) {
        piVar3 = piVar3 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        fn_8229E090(iVar1,1,1);
        fn_82F63CA0(piVar3,piVar2,(param_1[1] - (int)piVar2 >> 2) << 2);
        param_1[1] = param_1[1] + -4;
      }
    } while (piVar3 != (int *)param_1[1]);
  }
  param_1[4] = 0;
  return;
}

