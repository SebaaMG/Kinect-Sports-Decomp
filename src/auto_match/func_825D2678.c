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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639528();
extern unsigned int lbl_821954D0;
extern unsigned int lbl_831C1CEC;
extern unsigned int uRam8327f90c;
extern unsigned int uRam8327f98c;


void fn_825D2678(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)*param_2;
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  uVar3 = fn_82637B30(iVar1,1);
  uVar2 = lbl_821954D0;
  *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) | 8;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
  *(undefined4 *)(iVar1 + 0x2904) = uVar2;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x8000000;
  uVar3 = fn_82637BC0(uVar3,0);
  uVar3 = fn_82637C50(uVar3,6);
  uVar3 = fn_82637CE0(uVar3,7);
  *(uint *)(iVar1 + 0x2948) = *(uint *)(iVar1 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  *(uint *)(iVar1 + 0x480) = *(uint *)(iVar1 + 0x480) & 0xffffe3ff | 0x800;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  *(uint *)(iVar1 + 0x480) = *(uint *)(iVar1 + 0x480) & 0xffff1fff | 0x4000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  *(uint *)(iVar1 + 0x498) = *(uint *)(iVar1 + 0x498) & 0xffffe3ff | 0x800;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  *(uint *)(iVar1 + 0x498) = *(uint *)(iVar1 + 0x498) & 0xffff1fff | 0x4000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  *(uint *)(iVar1 + 0x498) = *(uint *)(iVar1 + 0x498) & 0xfff8ffff | 0x20000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  uVar3 = fn_82639380(uVar3,0,1);
  uVar3 = fn_82639528(uVar3,0);
  *(uint *)(iVar1 + 0x48c) = *(uint *)(iVar1 + 0x48c) & 0xfe7fffff | 0x800000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  fn_82631920(uVar3,uRam8327f90c);
  *(undefined4 *)(iVar1 + 0x2ed8) = lbl_831C1CEC;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
                    /* WARNING: Subroutine does not return */
  fn_82631578(iVar1,uRam8327f98c);
}

