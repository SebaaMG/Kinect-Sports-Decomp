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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_828802F8();
extern int fn_82880C60();
extern int fn_82881A08();
extern int fn_828846A0();
extern int fn_82CE06A8();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0978();
extern int fn_82CE0BB0();
extern unsigned int lbl_831599F0;
extern unsigned int lbl_832129F4;
extern unsigned int lbl_83212A08;
extern unsigned int uStack_c8;


undefined8 fn_82884898(undefined4 *param_1)

{
  int iVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined4 auStack_c0 [2];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [128];
  
  uVar3 = 0xffffffffffffffff;
  iVar2 = fn_82CE06A8(*param_1,auStack_b0,auStack_b8);
  if (((iVar2 == 0) && (uVar3 = fn_82880C60(param_1,auStack_b0,auStack_b8), (int)uVar3 < 0))
     && (uVar3 = 0xffffffffffffffff, lbl_83212A08 < lbl_832129F4)) {
    if (lbl_831599F0 == 0xffffffff) {
      uVar1 = fn_82CE08B8(2,2,0xfe);
      lbl_831599F0 = (uint)uVar1;
      if (lbl_831599F0 == 0xffffffff) {
        fn_82CE0BB0();
        uVar1 = (ulonglong)lbl_831599F0;
      }
      auStack_c0[0] = 1;
      iVar2 = fn_82CE08F0(uVar1,0xffffffff8004667e,auStack_c0);
      if (iVar2 == -1) {
        fn_82CE0BB0();
      }
      uVar3 = fn_82CE0978(lbl_831599F0,auStack_d0,0x10);
      if ((int)uVar3 == -1) {
        uVar3 = fn_82CE0BB0();
      }
    }
    uVar3 = fn_82881A08(uVar3);
    if (-1 < (int)uVar3) {
      uStack_c8 = 0;
      fn_828802F8(auStack_80,auStack_d0,auStack_b0,auStack_b8,1);
      fn_828846A0(auStack_80,uVar3);
    }
  }
  return uVar3;
}

