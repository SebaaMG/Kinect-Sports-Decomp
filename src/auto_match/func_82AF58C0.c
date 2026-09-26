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
extern int fn_82ABE2E0();


undefined8 fn_82AF58C0(undefined8 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (((uVar1 >> 0x19 & 1) == 0) && ((uVar1 >> 5 & 1) == 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((uVar1 == 0) || (bVar2 = true, 0x66 < uVar1)) {
      bVar2 = false;
    }
    if (((bVar2) && (cVar3 = fn_82ABE2E0(param_2), cVar3 == '\0')) && (uVar1 != 0x60)) {
      if (((uVar1 == 0x61) || (uVar1 == 99)) || (bVar2 = false, uVar1 == 100)) {
        bVar2 = true;
      }
      if (!bVar2) {
        return 0;
      }
    }
  }
  return 1;
}

