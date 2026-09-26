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
extern int fn_8265C940();
extern int fn_82A1C510();
extern int fn_82A1D310();
extern int fn_82A1EFC0();
extern int fn_82A1F2F8();
extern int fn_82A20A78();
extern int fn_82A21FC0();
extern int fn_82A35A20();
extern int iRam83219b88;
extern int iRam83219c44;
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_8315D3D0;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219C28;
extern unsigned int lbl_83219C30;
extern unsigned int lbl_83219C70;
extern unsigned int lbl_83219C8C;
extern unsigned int lbl_83219C90;
extern unsigned int lbl_83219C94;
extern unsigned int uRam83219c3c;
extern unsigned int uRam83219ca4;
extern unsigned int uRam83219ca8;
extern unsigned int uRam83219cc4;
extern unsigned int uRam83219cc8;
extern unsigned int uRam83219ccc;
extern unsigned int uRam83219cd0;


undefined8
fn_82A25E38(ulonglong param_1,longlong param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  
  if (iRam83219c44 != 0) {
    return 0x4df;
  }
  iVar2 = XexCheckExecutablePrivilege(0xb);
  if (iVar2 == 0) {
    iVar2 = XexCheckExecutablePrivilege(0x17);
    if (iVar2 != 0) {
      return 5;
    }
    uVar3 = fn_82A20A78();
    if ((((param_1 & 0x3ffffffe) != 0 || (param_1 & 0x3fffff06) != 0) || ((param_1 & 0x30) == 0x30))
       || ((param_1 & 0xc0) == 0xc0)) {
      return 0x57;
    }
    fn_82A35A20();
    if (param_4 < 0x40000) {
      param_4 = 0x40000;
    }
    lbl_83219B8C = lbl_8315D3D0;
    if (iRam83219b88 == 0) {
      uVar1 = fn_82A1C510();
      iVar2 = fn_82A1D310(uVar1,(param_1 & 0xc0000000) == 0xc0000000,0x8000,0x4b000,
                                0xffffffff8315d2d8);
      if (iVar2 != 0) {
        return 0;
      }
      iRam83219b88 = 1;
    }
    if ((uint)LZCOUNT(uVar3) >> 5 == 0) {
      iRam83219c44 = 1;
      lbl_83219C70 = 0;
      if ((param_1 & 0x40) != 0) {
        lbl_83219C70 = 8;
      }
      if (param_2 != -1) {
        lbl_83219C30 = param_2;
      }
      uRam83219ccc = 4;
      uRam83219ca4 = 0xfa;
      uRam83219ca8 = 100;
      lbl_83219C28 = param_5;
      uRam83219c3c = param_4;
      uRam83219cd0 = fn_82A1F2F8();
      uRam83219cd0 = uRam83219cd0 | 1;
      uRam83219cc4 = 0x3c;
      lbl_83219C90 = &lbl_83219C90;
      uRam83219cc8 = 0x1aaaaa;
      lbl_83219C94 = &lbl_83219C90;
      RtlInitializeCriticalSection(0xffffffff83219ba0);
      lbl_83219C8C = fn_8265C940(0x10000,lbl_8315D2EC);
      if (lbl_83219C8C != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(0xffffffff83219788,0,0x7c);
      }
      fn_82A21FC0();
      return 8;
    }
  }
  return 0;
}

