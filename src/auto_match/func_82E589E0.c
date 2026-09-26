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
extern int fn_82A28568();
extern int fn_82A2A360();


undefined8 fn_82E589E0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  if (*param_1 == 0) {
    uVar3 = param_1[2];
    uVar1 = fn_82A2A360();
    piVar2 = (int *)fn_82A28568(uVar1,0,((ulonglong)uVar3 - 1) * 0xc + 0x10);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff8007000e;
    }
    uVar3 = 0;
    if (param_1[2] != 0) {
      piVar4 = piVar2 + 1;
      do {
        uVar3 = uVar3 + 1;
        piVar4[1] = *param_1;
        *param_1 = (int)piVar4;
        piVar4 = piVar4 + 3;
      } while (uVar3 < (uint)param_1[2]);
    }
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
  }
  *param_2 = *param_1;
  *param_1 = *(int *)(*param_1 + 4);
  return 0;
}

