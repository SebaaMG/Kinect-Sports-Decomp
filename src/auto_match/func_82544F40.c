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
extern int fn_82544918();
extern int fn_82544E80();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern unsigned int lbl_82195B90;
extern unsigned int lbl_8320A898;


void fn_82544F40(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x40;
  uVar3 = fn_82637BC0(iVar2,0);
  uVar3 = fn_82637C50(uVar3,6);
  uVar3 = fn_82637CE0(uVar3,7);
  fn_82637B30(uVar3,1);
  uVar1 = lbl_82195B90;
  *(uint *)(iVar2 + 0x293c) = *(uint *)(iVar2 + 0x293c) | 8;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x40200;
  *(undefined4 *)(iVar2 + 0x2904) = uVar1;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x8000000;
  *(uint *)(iVar2 + 0x293c) = *(uint *)(iVar2 + 0x293c) & 0xfffffff8 | 4;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x200;
  fn_82544918(1,iVar2);
  fn_82544E80(iVar2);
  fn_82631920(iVar2,0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar2,0);
}

