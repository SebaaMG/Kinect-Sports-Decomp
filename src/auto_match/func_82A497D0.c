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
extern unsigned int *auStack_70;
extern int fn_82A447A0();
extern int fn_82A47EB8();
extern int fn_82A48BD8();
extern int fn_82A495D8();
extern int fn_82A49DF8();
extern unsigned int lbl_82089AA8;
extern unsigned int lbl_82089AAC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82A497D0(double param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  uVar1 = *(uint *)(param_5 + 4);
  if (*(short *)(param_5 + 2) == 1) {
    if ((float)((double)uVar1 * param_1) <= lbl_82089AAC) {
LAB_82a4986c:
      uVar2 = fn_82A48BD8(param_2 + 0x1ec,8);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      fn_82A49DF8(auStack_70,0x28,1,*(undefined2 *)(param_5 + 2),uVar1,0x10,0x10,
                        *(undefined4 *)(param_5 + 0x14));
      uVar2 = fn_82A447A0(param_1,param_2,param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82A47EB8(param_2,*(undefined4 *)(param_5 + 4));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = fn_82A495D8(param_2,uVar1,param_2 + 0x1c0,param_2 + 0x1c4,param_2 + 0x1d8);
      return uVar2;
    }
  }
  else if ((float)((double)uVar1 * param_1) <= lbl_82089AA8) goto LAB_82a4986c;
  return 0xffffffff88960001;
}

