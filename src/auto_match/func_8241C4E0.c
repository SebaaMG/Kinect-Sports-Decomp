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


void fn_8241C4E0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0xa3];
  param_2[1] = 0;
  if (iVar1 == 9) {
    uVar3 = 2;
  }
  else {
    if (iVar1 != 10) goto LAB_8241c50c;
    uVar3 = 1;
  }
  param_2[1] = uVar3;
LAB_8241c50c:
  iVar2 = param_1[0x96];
  *param_2 = 0;
  param_2[2] = iVar2;
  if (iVar1 == 9) {
    if ((uint)((param_1[3] - param_1[2]) / 0x1ac) < 2) {
      uVar3 = *(undefined4 *)(*param_1 + 0x6d4);
    }
    else {
      uVar3 = *(undefined4 *)(*param_1 + 0x6e0);
    }
  }
  else if (iVar1 == 10) {
    if ((uint)((param_1[3] - param_1[2]) / 0x1ac) < 2) {
      uVar3 = *(undefined4 *)(*param_1 + 0x6d8);
    }
    else {
      uVar3 = *(undefined4 *)(*param_1 + 0x6e4);
    }
  }
  else {
    if ((iVar1 != 3) && (iVar2 == 0)) {
      return;
    }
    if ((uint)((param_1[3] - param_1[2]) / 0x1ac) < 2) {
      uVar3 = *(undefined4 *)(*param_1 + 0x6dc);
    }
    else {
      uVar3 = *(undefined4 *)(*param_1 + 0x6e8);
    }
  }
  *param_2 = uVar3;
  return;
}

