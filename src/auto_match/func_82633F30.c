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
extern int fn_82633E88();


void fn_82633F30(char param_1)

{
  bool bVar1;
  char cVar2;
  int in_r7;
  undefined8 in_r8;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == '\0') {
    return;
  }
  uVar4 = *(uint *)(in_r7 + 4);
  uVar3 = uVar4 >> 0xc & 0xf;
  if ((1 << uVar3 & 0x607eU) == 0) {
    return;
  }
  cVar2 = fn_82633E88(in_r7,in_r8);
  bVar1 = cVar2 != '\0';
  if (uVar3 < 7) {
    if (uVar3 < 5) {
      if (uVar3 == 0) {
        return;
      }
      if (2 < uVar3) {
        if (uVar3 == 3) goto LAB_82633fdc;
        if (uVar3 != 4) {
          return;
        }
        goto LAB_82633fc8;
      }
    }
    uVar4 = (uint)bVar1 << 9 | uVar4 & 0xfffffdff;
  }
  else {
    if (uVar3 == 0xd) {
LAB_82633fdc:
      uVar3 = (-(uint)bVar1 & 10) + 3;
    }
    else {
      if (uVar3 != 0xe) {
        return;
      }
LAB_82633fc8:
      uVar3 = (-(uint)bVar1 & 10) + 4;
    }
    uVar4 = (uVar3 & 0xf) << 0xc | uVar4 & 0xffff0fff;
  }
  *(uint *)(in_r7 + 4) = uVar4;
  return;
}

