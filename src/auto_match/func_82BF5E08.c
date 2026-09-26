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
extern int fn_82BE5C30();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BE6950();


undefined8 fn_82BF5E08(int param_1)

{
  int iVar1;
  uint uVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  uVar4 = fn_82BE5CC0();
  iVar1 = *(int *)(param_1 + 0x20);
  uVar5 = 0;
  do {
    if (uVar4 <= uVar5) {
      return uVar6;
    }
    uVar2 = fn_82BE5C30(param_1);
    if ((uVar2 & 0xff) == 0x17) {
      uVar6 = fn_82BE6950(param_1,uVar2);
    }
    else {
      uVar3 = fn_82BE5F40();
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar5 = *(int *)(param_1 + 0x20) - iVar1;
  } while( true );
}

