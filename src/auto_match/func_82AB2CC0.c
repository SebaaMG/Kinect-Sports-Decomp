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
extern int fn_82AB18E8();
extern int fn_82AB2168();
extern int fn_82AB2248();
extern int fn_82AB25E0();
extern int fn_82AB28A0();
extern unsigned int lbl_831607A8;
extern unsigned int lbl_83160870;


void fn_82AB2CC0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  
  uVar1 = param_2[1];
  bVar5 = false;
  if ((uVar1 & 0x80000000) == 0) {
    if (((uVar1 & 0x40000000) == 0) && ((uVar1 & 0x20000000) != 0)) {
      bVar5 = true;
    }
  }
  fn_82AB2168(param_1,*(undefined4 *)((int)&lbl_831607A8 + (*param_2 >> 0x18 & 0xfc)));
  uVar1 = *param_2;
  uVar4 = uVar1 >> 0xf & 1;
  uVar2 = uVar1 >> 6;
  if (uVar4 == 0) {
    uVar2 = uVar1 >> 0xe;
  }
  uVar3 = uVar1;
  if (uVar4 == 0) {
    uVar3 = uVar1 >> 8;
  }
  fn_82AB2248(param_1,uVar3 & 0x3f,uVar1 >> 0x14 & 0xf,uVar4,uVar1 >> 0x19 & 1,uVar2 & 1,
                uVar1 >> 0xe & 1,uVar1 >> 0x10 & 0xf);
  fn_82AB18E8(param_1,0xffffffff82196824);
  if (0 < *(int *)(&lbl_83160870 + (*param_2 >> 0x18 & 0xfc))) {
    uVar1 = param_2[2];
    if ((int)uVar1 < 0) {
      bVar6 = 1;
    }
    else if ((param_2[2] & 0x40000000) == 0) {
      bVar6 = -((param_2[2] & 0x20000000) != 0) & 3;
    }
    else {
      bVar6 = 2;
    }
    if (((param_2[2] & 0x20000000) == 0) && (bVar5)) {
      fn_82AB28A0(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      if ((bVar6 == 3) || ((uVar1 >> 0x1e & 1) + (uVar1 >> 0x1d & 1) + ((int)uVar1 >> 0x1f) != -1))
      {
        uVar1 = param_2[1] >> 0x1f;
      }
      else {
        uVar1 = param_2[1] >> 0x1e;
      }
      uVar2 = param_2[1];
      fn_82AB25E0(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar1 & 1,uVar2 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar2 >> 0x18 & 1,uVar2 & 0xff);
    }
  }
  return;
}

