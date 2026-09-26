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


void fn_830EF9E8(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  uVar3 = param_3 & 0xffff;
  uVar1 = *param_2;
  iVar2 = (int)param_3 >> 0x10;
  uVar5 = uVar1 + iVar2;
  if ((int)(uVar4 + uVar3) < -0x3b) {
    uVar4 = ((uVar4 & 3) - uVar3) - 0x38;
  }
  else {
    if ((int)(uVar4 + uVar3) <= (int)(param_4 & 0xffff)) goto LAB_830efa44;
    uVar4 = (((uVar4 & 3) - uVar3) + (param_4 & 0xffff)) - 3;
  }
  *param_1 = uVar4;
LAB_830efa44:
  if (-0x3c < (int)uVar5) {
    if ((int)param_4 >> 0x10 < (int)uVar5) {
      iVar2 = ((uVar1 & 3) - iVar2) + ((int)param_4 >> 0x10);
      uVar4 = iVar2 + 1;
      if ((uVar5 & 4) == 0) {
        uVar4 = iVar2 - 3;
      }
      *param_2 = uVar4;
    }
    return;
  }
  iVar2 = (uVar1 & 3) - iVar2;
  if ((uVar5 & 4) != 0) {
    *param_2 = iVar2 - 0x3c;
    return;
  }
  *param_2 = iVar2 - 0x38;
  return;
}

