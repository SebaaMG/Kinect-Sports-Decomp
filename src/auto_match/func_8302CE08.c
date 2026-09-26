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
extern int fn_82FA5060();
extern int fn_8300CE88();
extern int fn_8302B6E0();
extern int fn_83034DB0();
extern unsigned int lbl_831BC768;


int * fn_8302CE08(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(byte *)(param_1 + 0x11f) & 1) == 0) {
    iVar2 = param_1 + 0x8c;
    piVar4 = (int *)fn_8302B6E0(iVar2,param_2);
    if (piVar4 == (int *)0x0) {
      iVar5 = fn_82FA5060(lbl_831BC768,0x10);
      if ((iVar5 != 0) && (piVar4 = (int *)fn_8300CE88(), piVar4 != (int *)0x0)) {
        iVar5 = fn_83034DB0(param_2,param_1);
        if (iVar5 == 1) {
          piVar4[1] = (int)param_2;
          uVar1 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
          uVar1 = ((param_2 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
          iVar5 = (int)((param_2 - ((uVar1 & 0x7ffffff) * 0x20 - uVar1) & 0xffffffff) << 2);
          piVar4[2] = *(int *)(iVar5 + iVar2);
          *(int **)(iVar5 + iVar2) = piVar4;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
          return piVar4;
        }
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      return (int *)0x0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10c) == 0) {
      iVar2 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8300CE88();
      }
      *(undefined4 *)(param_1 + 0x10c) = uVar3;
    }
    if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
      return *(int **)(param_1 + 0x10c);
    }
  }
  return piVar4;
}

