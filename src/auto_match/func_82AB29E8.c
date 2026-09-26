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
extern unsigned int lbl_83160640;
extern unsigned int lbl_831606B8;


void fn_82AB29E8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  bVar3 = false;
  uVar5 = 0;
  if (((*param_2 & 0xf0000) != 0) || (bVar2 = true, (param_2[2] & 0x1f000000) != 0x2000000)) {
    bVar2 = false;
  }
  if (!bVar2) {
    fn_82AB2168(param_1,(&lbl_83160640)[*(byte *)(param_2 + 2) & 0x1f]);
    uVar1 = *param_2;
    fn_82AB2248(param_1,uVar1 & 0x3f,uVar1 >> 0x10 & 0xf,uVar1 >> 0xf & 1,uVar1 >> 0x18 & 1,
                  uVar1 >> 6 & 1,uVar1 >> 0xe & 1,uVar1 >> 0x14 & 0xf);
    fn_82AB18E8(param_1,0xffffffff82196824);
    uVar1 = param_2[1];
    if ((uVar1 & 0x80000000) == 0) {
      if (((uVar1 & 0x40000000) == 0) && ((uVar1 & 0x20000000) != 0)) {
        bVar3 = true;
      }
    }
    if (0 < *(int *)(&lbl_831606B8 + (param_2[2] >> 0x16 & 0x7c))) {
      uVar1 = -((int)param_2[2] >> 0x1f);
      uVar5 = ~uVar1 & 1;
      if ((uVar1 == 0) && (bVar3)) {
        fn_82AB28A0(param_1,*(undefined1 *)((int)param_2 + 9),param_2[1] >> 0x1a & 1,
                      *(undefined1 *)((int)param_2 + 5));
      }
      else {
        uVar1 = param_2[1];
        fn_82AB25E0(param_1,param_2[2] >> 0x1f,*(undefined1 *)((int)param_2 + 9),uVar1 >> 0x1f,
                      uVar1 >> 0x1d & 1,*param_2 >> 7 & 1,uVar1 >> 0x1a & 1,
                      *(undefined1 *)((int)param_2 + 5));
      }
    }
    uVar1 = param_2[2];
    uVar4 = uVar5;
    if (1 < *(int *)(&lbl_831606B8 + (uVar1 >> 0x16 & 0x7c))) {
      if (((uVar1 >> 0x1e & 1) == 0) && (uVar5 == 0)) {
        uVar4 = 2;
      }
      uVar5 = (~(uVar1 >> 0x1e) & 1) + uVar5;
      fn_82AB18E8(param_1,0xffffffff82196824);
      if (((param_2[2] & 0x40000000) == 0) && (bVar3)) {
        fn_82AB28A0(param_1,*(undefined1 *)((int)param_2 + 10),param_2[1] >> 0x19 & 1,
                      *(undefined1 *)((int)param_2 + 6));
      }
      else {
        uVar1 = param_2[1] >> 0x1f;
        if (uVar4 != 2) {
          uVar1 = param_2[1] >> 0x1e;
        }
        fn_82AB25E0(param_1,param_2[2] >> 0x1e & 1,*(undefined1 *)((int)param_2 + 10),uVar1 & 1,
                      param_2[1] >> 0x1d & 1,*param_2 >> 7 & 1,param_2[1] >> 0x19 & 1,
                      *(undefined1 *)((int)param_2 + 6));
      }
    }
    uVar1 = param_2[2];
    if (2 < *(int *)(&lbl_831606B8 + (uVar1 >> 0x16 & 0x7c))) {
      if (((uVar1 >> 0x1d & 1) == 0) && (uVar4 == 0)) {
        uVar4 = 3;
      }
      fn_82AB18E8(param_1,0xffffffff82196824);
      if (((param_2[2] & 0x20000000) == 0) && (bVar3)) {
        fn_82AB28A0(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
      }
      else {
        if ((uVar4 == 3) || ((~(uVar1 >> 0x1d) & 1) + uVar5 != 2)) {
          uVar5 = param_2[1] >> 0x1f;
        }
        else {
          uVar5 = param_2[1] >> 0x1e;
        }
        uVar1 = param_2[1];
        fn_82AB25E0(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar5 & 1,uVar1 >> 0x1d & 1,
                      *param_2 >> 7 & 1,uVar1 >> 0x18 & 1,uVar1 & 0xff);
      }
    }
  }
  return;
}

