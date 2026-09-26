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
extern int fn_827B76D8();
extern int fn_827B9528();


void fn_827BA058(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_827B76D8(param_1 + 0x794,param_3);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    fn_827B9528(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)piVar1[1] = *piVar1;
    *piVar1 = *(int *)(param_1 + 0x740);
    piVar1[1] = param_1 + 0x740;
    *(int **)(*(int *)(param_1 + 0x740) + 4) = piVar1;
    *(int **)(param_1 + 0x740) = piVar1;
  }
  return;
}

