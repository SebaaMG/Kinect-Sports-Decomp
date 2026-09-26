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


undefined8 fn_82CAACB8(int *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = (int)param_3;
  if ((param_2 != (int *)0x0) && (*param_2 = 0, param_1 != (int *)0x0)) {
    uVar1 = param_1[4];
    if (iVar2 < (int)uVar1) {
      if (iVar2 == 0) {
        piVar4 = (int *)*param_1;
        iVar2 = *piVar4;
        *param_1 = iVar2;
        if (iVar2 == 0) {
          param_1[1] = 0;
        }
      }
      else if ((iVar2 == -1) && (uVar1 == 1)) {
        piVar4 = (int *)param_1[1];
        *param_1 = 0;
      }
      else {
        if (iVar2 == -1) {
          param_3 = (ulonglong)uVar1 - 1;
        }
        piVar3 = (int *)*param_1;
        param_3 = param_3 + -1;
        if (0 < param_3) {
          do {
            piVar3 = (int *)*piVar3;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
        }
        piVar4 = (int *)*piVar3;
        *piVar3 = *piVar4;
        if (iVar2 == -1) {
          param_1[1] = (int)piVar3;
        }
      }
      *param_2 = piVar4[1];
      *piVar4 = param_1[2];
      param_1[2] = (int)piVar4;
      if (param_1[3] == 0) {
        param_1[3] = (int)piVar4;
      }
      param_1[4] = param_1[4] + -1;
      return 1;
    }
  }
  return 0;
}

