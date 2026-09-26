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


void fn_82F07F08(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = *(undefined4 *)(param_1 + 0x5b4);
  uVar6 = 1;
  uVar3 = *(undefined4 *)(param_1 + 0x5b8);
  do {
    iVar7 = uVar6 * 2;
    sVar1 = *(short *)(iVar7 + param_2);
    if (sVar1 == 0) {
      *(undefined2 *)(iVar7 + param_3) = 0;
    }
    else {
      sVar4 = sVar1 * (short)uVar2;
      sVar5 = (short)uVar3;
      if (sVar1 < 0) {
        *(short *)(iVar7 + param_3) = sVar4 - sVar5;
      }
      else {
        *(short *)(iVar7 + param_3) = sVar4 + sVar5;
      }
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0x40);
  return;
}

