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


int * fn_82CAAF00(int *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = (int)param_3;
  piVar2 = (int *)param_1[3];
  iVar3 = piVar2[4];
  if ((iVar3 != 0) && (iVar4 <= iVar3 + -1)) {
    if ((-1 < iVar4) || (*param_1 == iVar3)) {
      *param_1 = *param_1 + -1;
    }
    if ((param_2 != (int *)0x0) && (*param_2 = 0, piVar2 != (int *)0x0)) {
      uVar1 = piVar2[4];
      if (iVar4 < (int)uVar1) {
        if (iVar4 == 0) {
          piVar6 = (int *)*piVar2;
          iVar3 = *piVar6;
          *piVar2 = iVar3;
          if (iVar3 == 0) {
            piVar2[1] = 0;
          }
        }
        else if ((iVar4 == -1) && (uVar1 == 1)) {
          piVar6 = (int *)piVar2[1];
          *piVar2 = 0;
        }
        else {
          if (iVar4 == -1) {
            param_3 = (ulonglong)uVar1 - 1;
          }
          piVar5 = (int *)*piVar2;
          param_3 = param_3 + -1;
          if (0 < param_3) {
            do {
              piVar5 = (int *)*piVar5;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          piVar6 = (int *)*piVar5;
          *piVar5 = *piVar6;
          if (iVar4 == -1) {
            piVar2[1] = (int)piVar5;
          }
        }
        *param_2 = piVar6[1];
        *piVar6 = piVar2[2];
        piVar2[2] = (int)piVar6;
        if (piVar2[3] == 0) {
          piVar2[3] = (int)piVar6;
        }
        piVar2[4] = piVar2[4] + -1;
        return (int *)0x1;
      }
    }
    return (int *)0x0;
  }
  *param_2 = 0;
  return piVar2;
}

