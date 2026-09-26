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
extern int fn_82ABDD90();


undefined8 fn_82AEFDB8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if ((uVar2 == 0x7d) || (bVar1 = false, uVar2 == 0x7c)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = *(uint *)(param_1 + 8) >> 7 & 0x7f;
    if ((uVar2 < 0x60) || (bVar1 = true, 0x66 < uVar2)) {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if (uVar2 == 0x75) {
      iVar3 = fn_82ABDD90(param_3,0x75,0,0);
      uVar2 = *(uint *)(iVar3 + param_1 + -0x10) & 7;
      if ((uVar2 < 4) || (bVar1 = true, 6 < uVar2)) {
        bVar1 = false;
      }
      if ((bVar1) && (((~(ulonglong)*(uint *)(param_3 + 0x34) & 0xffffffff) >> 7 & 1) != 0)) {
        return 0;
      }
    }
  }
  return 1;
}

