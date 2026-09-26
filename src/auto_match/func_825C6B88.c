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
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637D70();
extern int fn_82637DE0();
extern int fn_82637E50();
extern int fn_82637EC0();
extern int fn_82637FF0();
extern unsigned int lbl_8320A898;
extern unsigned int uRam8327f958;


void fn_825C6B88(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = lbl_8320A898;
  if (((*(int *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x18) != '\0')) &&
     (*(int *)(param_1 + 0x10) != 0)) {
    *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
    fn_82637B30(lbl_8320A898,1);
    iVar1 = lbl_8320A898;
    uVar2 = 1;
    *(undefined4 *)(lbl_8320A898 + 0x2f14) = 1;
    *(uint *)(iVar1 + 0x2934) =
         (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    fn_82637BC0(lbl_8320A898,0);
    fn_82637C50(lbl_8320A898,6);
    fn_82637CE0(lbl_8320A898,7);
    fn_82637EC0(lbl_8320A898,1);
    fn_82637D70(lbl_8320A898,0);
    fn_82637DE0(lbl_8320A898,0xc);
    fn_82637E50(lbl_8320A898,7);
    fn_82637FF0(lbl_8320A898,0x50ffffff);
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x480) = *(uint *)(lbl_8320A898 + 0x480) & 0xffffe3ff;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x498) =
         ((uint)((uVar2 & 0xffffffff) << 0xb) | (uint)((uVar2 & 0xffffffff) >> 0x15)) & 0x1c00 |
         *(uint *)(lbl_8320A898 + 0x498) & 0xffffe3ff;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,uRam8327f958);
  }
  return;
}

