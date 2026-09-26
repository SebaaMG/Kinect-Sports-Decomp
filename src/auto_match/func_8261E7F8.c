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


bool fn_8261E7F8(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 2;
  }
  else {
    uVar4 = 2;
    uVar3 = 1;
  }
  bVar2 = param_2 == 0;
  iVar1 = *(int *)(param_1 + 0x220);
  if (iVar1 != 4) {
    if (iVar1 == 8) {
      return (bool)uVar4;
    }
    if (iVar1 != 0x10) {
      if (iVar1 == 0x20) {
        return bVar2;
      }
      iVar1 = *(int *)(param_1 + 0x224);
      if (iVar1 != 4) {
        if (iVar1 != 8) {
          if (iVar1 == 0x10) {
            return (bool)uVar3;
          }
          if (iVar1 == 0x20) {
            return bVar2;
          }
        }
        return (bool)uVar4;
      }
    }
  }
  return (bool)uVar3;
}

