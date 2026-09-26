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
extern unsigned int lbl_8208B4D0;
extern unsigned int lbl_8208CCA8;
extern unsigned int lbl_8208D710;


int * fn_82A58270(undefined8 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  if (param_3 == 0) {
    uVar2 = 0x1e;
    piVar1 = (int *)&lbl_8208B4D0;
  }
  else if (param_2 == 0) {
    uVar2 = 0x16;
    piVar1 = (int *)&lbl_8208CCA8;
  }
  else {
    uVar2 = 0xb;
    piVar1 = (int *)&lbl_8208D710;
  }
  uVar3 = 0;
  piVar4 = piVar1;
  if (uVar2 != 0) {
    while ((*piVar4 != param_4 || (*(ushort *)(piVar4 + 1) != param_5))) {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
      if (uVar2 <= uVar3) {
        return (int *)0x0;
      }
    }
    piVar1 = piVar1 + uVar3 * 4;
    if ((piVar1[3] != 0) && (piVar1[2] != 0)) {
      return piVar1;
    }
  }
  return (int *)0x0;
}

