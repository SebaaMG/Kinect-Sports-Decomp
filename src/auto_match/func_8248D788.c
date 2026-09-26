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
extern unsigned int fStack_b0;
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82638560();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DE70();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uRam83297728;
extern unsigned int uRam8329772c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;


void fn_8248D788(int param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  if (*(int *)(param_1 + 4) != 0) {
    uStack_90 = *(undefined4 *)(param_2 + 0x3228);
    uStack_8c = *(undefined4 *)(param_2 + 0x322c);
    *(uint *)(param_2 + 0x480) = *(uint *)(param_2 + 0x480) & 0xffffe3ff | 0x800;
    uStack_cc = (undefined4)(longlong)*(float *)(param_2 + 0x3220);
    uStack_98 = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(param_2 + 0x3224);
    uStack_94 = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(param_2 + 0x3218);
    uStack_a0 = uStack_cc;
    uStack_cc = (undefined4)(longlong)*(float *)(param_2 + 0x321c);
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x80000000;
    *(uint *)(param_2 + 0x480) = *(uint *)(param_2 + 0x480) & 0xffff1fff | 0x4000;
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x80000000;
    uStack_9c = uStack_cc;
    uVar1 = fn_82639528(param_2,0,1,*(undefined4 *)(param_2 + 0x2948),
                              *(undefined4 *)(param_2 + 0x293c),*(undefined4 *)(param_2 + 0x2efc),
                              *(undefined4 *)(param_2 + 0x2ef8));
    fn_82639380(uVar1,0);
    if (*(int *)(param_2 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3158));
    }
    fn_8263A508(param_2,0);
    if (*(int *)(param_2 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3148));
    }
    fn_8263A1B8(param_2,0,*(undefined4 *)(param_1 + 0x9c));
    uStack_c0 = 0;
    dVar2 = (double)lbl_821CC160;
    uStack_bc = 0;
    fStack_b0 = lbl_821CC160;
    uStack_ac = lbl_821CA460;
    uStack_b8 = *(undefined4 *)(param_1 + 0x5c);
    uStack_b4 = *(undefined4 *)(param_1 + 0x60);
    fn_82639EA8(param_2,&uStack_c0);
    fn_8263DE70(dVar2,param_2,0,0,1,0);
    uVar1 = fn_82637B30(param_2,uRam83297728);
    *(uint *)(param_2 + 0x293c) = (uRam8329772c & 1) << 3 | *(uint *)(param_2 + 0x293c) & 0xfffffff7
    ;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40200;
    uVar1 = fn_82637C50(uVar1,6);
    uVar1 = fn_82637CE0(uVar1,7);
    *(uint *)(param_2 + 0x2948) = *(uint *)(param_2 + 0x2948) & 0xfffffff8;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40;
    *(undefined4 *)(param_2 + 0x2f04) = 7;
    *(uint *)(param_2 + 0x28dc) =
         *(uint *)(param_2 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(param_2 + 0x3148) != 0) & 7;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x2000000000;
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) | 4;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x800;
    *(undefined4 *)(param_2 + 0x2f14) = 0;
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
    uVar1 = fn_82638560(uVar1,0);
                    /* WARNING: Subroutine does not return */
    fn_82631578(uVar1,*(undefined4 *)(param_1 + 0x94));
  }
  return;
}

