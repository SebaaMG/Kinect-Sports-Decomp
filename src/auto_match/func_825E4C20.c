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
extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BBC;
extern unsigned int uRam832700ec;


/* WARNING: Removing unreachable block (ram,0x825306c0) */
/* WARNING: Removing unreachable block (ram,0x825306c4) */

void fn_825E4C20(void)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = lbl_8320A898;
  uVar2 = (ulonglong)uRam832700ec;
  *(undefined4 *)(lbl_8320A898 + 0x2f14) = 1;
  uRam832700ec = (uint)(uVar2 - 1);
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  uVar3 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar3 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar3 | 0x20800;
  iVar1 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8 | 2;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  iVar1 = lbl_8320A898;
  if (uVar2 - 1 == 0) {
    if (lbl_83296BAC != 0) {
      lbl_83296BAC = 0;
      lbl_83296BBC = 1;
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      fn_82530948(lbl_8320A898);
      fn_825315E0(iVar1);
      fn_82531118();
    }
    return;
  }
  return;
}

