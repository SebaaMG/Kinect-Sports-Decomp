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
extern int fn_822B17A8();
extern int fn_8255B740();


void fn_822B1860(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = 1;
  if (param_2 != 0) {
    do {
      uVar4 = 0;
      uVar6 = 0;
      if (uVar5 == 1) {
        uVar4 = 5;
        uVar6 = 0x37;
      }
      else if (uVar5 == 2) {
        uVar4 = 6;
        uVar6 = 0x38;
      }
      else if (uVar5 == 3) {
        uVar4 = 7;
        uVar6 = 0x39;
      }
      else if (uVar5 == 4) {
        uVar4 = 8;
        uVar6 = 0x3a;
      }
      else if (uVar5 == 5) {
        uVar4 = 9;
        uVar6 = 0x3b;
      }
      fn_822B17A8(param_1,uVar4,1);
      uVar2 = 1 << ((uint)uVar6 & 7);
      iVar3 = (int)(uVar6 >> 3);
      if ((uVar2 & 0xff & (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + iVar3)) == 0) {
        fn_8255B740(param_1,uVar6 - 0x36);
        iVar1 = *(int *)(*(int *)(param_1 + 0xf4) + 8);
        *(byte *)(iVar1 + iVar3) = *(byte *)(iVar1 + iVar3) | (byte)uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= param_2);
  }
  return;
}

