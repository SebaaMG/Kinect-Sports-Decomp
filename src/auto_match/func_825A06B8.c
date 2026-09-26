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
extern unsigned int *auStack_a8;
extern int fn_82544718();
extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_825A06B8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int in_r7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [160];
  
  fn_82544718(auStack_a0,0xa0,0x5a,0x18280186,0,auStack_a8);
  if (*(int *)(in_r7 + 0x3148) != 0) {
    fn_8262FE50(*(int *)(in_r7 + 0x3148));
  }
  if (*(int *)(in_r7 + 0x3158) != 0) {
    fn_8262FE50(*(int *)(in_r7 + 0x3158));
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  fn_8263A1B8(in_r7,0,*(undefined4 *)(iVar1 + 0x40));
  fn_8263A508(in_r7,0);
  uVar2 = fn_82637B30(in_r7,0);
  *(undefined4 *)(in_r7 + 0x2ed8) = 0;
  *(ulonglong *)(in_r7 + 0x10) = *(ulonglong *)(in_r7 + 0x10) | 0x80000;
  fn_82631920(uVar2,*(undefined4 *)(iVar1 + 0x44));
                    /* WARNING: Subroutine does not return */
  fn_82631578(in_r7,*(undefined4 *)(iVar1 + 0x48));
}

