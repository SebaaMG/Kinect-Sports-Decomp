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
extern int fn_82648B30();
extern int fn_82648D40();
extern int fn_8265C940();


int * fn_82648C58(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)fn_8265C940(0x9c,0x64800000);
  if (piVar1 == (int *)0x0) {
LAB_82648c84:
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = param_2;
    *piVar1 = param_1;
    piVar1[3] = 1;
    piVar1[0x25] = 1;
    piVar1[0x26] = param_3;
    if (param_2 == 8) {
      iVar2 = *(int *)(param_1 + 0x2a9c);
      *(undefined1 *)(piVar1 + 4) = 2;
      piVar1[6] = iVar2;
      return piVar1;
    }
    if (param_2 == 9) {
      uVar3 = 0;
      if (param_3 != 0) {
        piVar4 = piVar1 + 0x16;
        do {
          iVar2 = fn_82648B30(param_1,piVar4,piVar4 + -0xf);
          if (iVar2 < 0) {
            piVar1[0x26] = uVar3;
            goto LAB_82648d18;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar3 < (uint)piVar1[0x26]);
      }
    }
    else {
      iVar2 = fn_82648B30(param_1,piVar1 + 0x16,piVar1 + 7);
      if (iVar2 < 0) {
LAB_82648d18:
        fn_82648D40(piVar1);
        goto LAB_82648c84;
      }
    }
    *(undefined1 *)(piVar1 + 4) = 1;
  }
  return piVar1;
}

