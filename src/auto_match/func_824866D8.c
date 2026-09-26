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


undefined8 fn_824866D8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  piVar3 = (int *)(param_1 + 0x838);
  iVar1 = 0;
  lVar5 = 4;
  piVar2 = piVar3;
  do {
    if ((*piVar2 == 0) || (*piVar2 == 1)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0x108;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar4 = 0;
  piVar2 = piVar3;
  do {
    if (*piVar2 == 3) {
      if ((1 < iVar1) && (param_3 != 1)) {
        return 0xffffffff821be650;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 0x108;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    if (*piVar3 == 3) {
      if ((1 < iVar1) && (param_2 == 3)) {
        return 0xffffffff821be650;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x108;
  } while (iVar4 < 4);
  if (param_3 < 2) {
    if (iVar1 == 3) {
      return 0xffffffff821be668;
    }
    if (iVar1 == 4) {
      return 0xffffffff821be680;
    }
  }
  return 0;
}

