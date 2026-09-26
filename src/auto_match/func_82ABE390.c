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


void fn_82ABE390(undefined8 param_1,int param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  if (param_2 == 0) goto LAB_82abe424;
  uVar3 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if ((uVar3 < 0x60) || (bVar2 = true, 0x66 < uVar3)) {
    bVar2 = false;
  }
  if (!bVar2) goto LAB_82abe424;
  iVar6 = 1;
  if (uVar3 == 0x60) {
    uVar1 = *(uint *)(param_2 + 8);
    iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
    if ((*(ushort *)(iVar4 + param_2 + -8) & 1) == 0) goto LAB_82abe410;
  }
  else {
LAB_82abe410:
    if ((uVar3 != 0x61) && (uVar3 != 99)) goto LAB_82abe424;
  }
  iVar5 = 1;
LAB_82abe424:
  *param_3 = iVar6 << 0x10 | *param_3 & 0xfffeffff;
  *param_4 = iVar5 << 0x12 | *param_4 & 0xfffbffff;
  return;
}

