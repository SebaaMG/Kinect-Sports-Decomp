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
extern int fn_8302B6E0();
extern int fn_8302C9C8();
extern int fn_83034DB0();


int * fn_8302CF58(int param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)0x0;
  if ((*(byte *)(param_1 + 0x11f) & 1) == 0) {
    iVar5 = param_1 + 0x8c;
    piVar3 = (int *)fn_8302B6E0(iVar5,param_3);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)fn_8302C9C8(param_1,param_2);
      if (piVar3 != (int *)0x0) {
        iVar4 = fn_83034DB0(param_3,param_1);
        if (iVar4 == 1) {
          piVar3[1] = (int)param_3;
          uVar1 = (param_3 & 0xffffffff) * 0x8421085 >> 0x20;
          uVar1 = ((param_3 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
          iVar4 = (int)((param_3 - ((uVar1 & 0x7ffffff) * 0x20 - uVar1) & 0xffffffff) << 2);
          piVar3[2] = *(int *)(iVar4 + iVar5);
          *(int **)(iVar4 + iVar5) = piVar3;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
          return piVar3;
        }
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      return (int *)0x0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10c) == 0) {
      uVar2 = fn_8302C9C8();
      *(undefined4 *)(param_1 + 0x10c) = uVar2;
    }
    if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
      return *(int **)(param_1 + 0x10c);
    }
  }
  return piVar3;
}

