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
extern unsigned int *auStack_a0;
extern int fn_8262FE50();
extern int fn_826310E0();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82638D10();
extern int fn_82639DB0();
extern int fn_82639F28();
extern int fn_8263A508();
extern int fn_82F4D9D8();
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int uRam831c1d9c;


void fn_8248B200(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [160];
  
  lVar1 = fn_82F4D9D8(2);
  if (lVar1 != 0) {
    fn_82631920(param_2,lbl_8327F8B8);
    *(undefined4 *)(param_2 + 0x2ed8) = uRam831c1d9c;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x80000;
    *(undefined4 *)(param_2 + 0x2f04) = 0xf;
    *(uint *)(param_2 + 0x28dc) =
         *(uint *)(param_2 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(param_2 + 0x3148) != 0) & 0xf;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x2000000000;
    *(uint *)(param_2 + 0x2948) = *(uint *)(param_2 + 0x2948) & 0xfffffff8;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40;
    *(undefined4 *)(param_2 + 0x2f14) = 0;
    *(uint *)(param_2 + 0x2934) = *(uint *)(param_2 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x20800;
    *(uint *)(param_2 + 0x29c0) = *(uint *)(param_2 + 0x29c0) & 0xfffffffe;
    *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 0x800000000;
    uVar2 = fn_82637B30(param_2,0);
    fn_82638D10(uVar2,1);
    *(uint *)(param_2 + 0x293c) = *(uint *)(param_2 + 0x293c) & 0xfffffff7;
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) | 0x40200;
    if (*(int *)(param_2 + 0x3148) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3148));
    }
    if (*(int *)(param_2 + 0x3158) != 0) {
      fn_8262FE50(*(int *)(param_2 + 0x3158));
    }
    uVar2 = fn_82639F28(param_2,auStack_a0);
    fn_8263A508(uVar2,0);
    uVar2 = fn_826310E0(param_2,0,0xffffffff8329ead0,4,0x8000000000000000);
    *(undefined4 *)(param_2 + 0x2f00) = 0;
    fn_82639DB0(uVar2,param_2 + 0x3234);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_2,lbl_8327F94C);
  }
  return;
}

