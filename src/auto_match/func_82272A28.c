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
extern int fn_8252DCF8();
extern int fn_82637B30();
extern int fn_8263FB38();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;


void fn_82272A28(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = lbl_8320A898;
  if (*(int *)(param_1 + 0x160) != 0) {
    *(undefined4 *)(lbl_8320A898 + 0x2f14) = 0;
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x29c0) = *(uint *)(lbl_8320A898 + 0x29c0) | 1;
    *(ulonglong *)(iVar1 + 0x20) = *(ulonglong *)(iVar1 + 0x20) | 0x800000000;
    fn_82637B30(lbl_8320A898,0);
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) & 0xfffffff7;
    dVar2 = (double)lbl_821CC160;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40200;
    iVar1 = lbl_8320A898;
    *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
    fn_8263FB38(dVar2,lbl_8320A898);
    fn_8252DCF8((double)*(float *)(param_1 + 300),(double)*(float *)(param_1 + 0x130),
                      (double)*(float *)(param_1 + 0x134),(double)*(float *)(param_1 + 0x138),
                      (double)*(float *)(param_1 + 0x13c),(double)*(float *)(param_1 + 0x140),
                      lbl_8320A898,0xffffffff8326b0c4,*(undefined4 *)(param_1 + 0x128));
  }
  return;
}

