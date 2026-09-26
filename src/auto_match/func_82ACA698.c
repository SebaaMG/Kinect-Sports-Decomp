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


void fn_82ACA698(int param_1,int param_2,char param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  
  if ((*(uint *)(param_2 + 8) >> 6 & 1) == 0) {
    return;
  }
  puVar1 = *(uint **)(param_2 + 4);
  do {
    if (puVar1 == (uint *)0x0) {
      return;
    }
    if (puVar1[4] != 0) {
      uVar3 = *puVar1;
      if ((uVar3 & 0x40000000) == 0) {
LAB_82aca6d8:
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if ((uVar3 & 0xe000000) != 0) goto LAB_82aca6d8;
      }
      if (bVar2) {
        uVar3 = 1 << (uVar3 >> 0xd & 0x3f);
        if (param_3 == '\0') {
          uVar3 = *(uint *)(param_1 + 0x30) & ~uVar3;
        }
        else {
          uVar3 = uVar3 | *(uint *)(param_1 + 0x30);
        }
        *(uint *)(param_1 + 0x30) = uVar3;
      }
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

