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
extern int fn_8262FE50();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263CBB0();
extern int fn_82F6A544();
extern unsigned int lbl_8326B2D8;


void fn_8259F6D8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  fn_82F6A544();
  iVar1 = (int)param_2;
  if (*(int *)(iVar1 + 0x3148) != 0) {
    fn_8262FE50(*(int *)(iVar1 + 0x3148));
  }
  if (*(int *)(iVar1 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(iVar1 + 0x3158));
  }
  fn_8263A1B8(param_2,0,lbl_8326B2D8);
  fn_8263A508(param_2,0);
  *(undefined4 *)(iVar1 + 0x2f14) = 0;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  fn_82637B30(param_2,0);
  *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) & 0xfffffff7;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
  *(uint *)(iVar1 + 0x2948) = *(uint *)(iVar1 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  *(uint *)(iVar1 + 0x29c0) = *(uint *)(iVar1 + 0x29c0) & 0xfffffffe;
  *(ulonglong *)(iVar1 + 0x20) = *(ulonglong *)(iVar1 + 0x20) | 0x800000000;
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0();
}

