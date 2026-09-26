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
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B0;
extern unsigned int uRam831c1cfc;
extern unsigned int uRam8327f958;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82545098(void)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2948) = *(uint *)(lbl_8320A898 + 0x2948) & 0xfffffff8;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x40;
  iVar2 = lbl_8320A898;
  puVar1 = (uint *)(lbl_8320A898 + 0x2934);
  *(undefined4 *)(lbl_8320A898 + 0x2f14) = 0;
  *(uint *)(iVar2 + 0x2934) = *puVar1 & 0xfffffffd;
  uVar3 = *(ulonglong *)(iVar2 + 0x10);
  *(ulonglong *)(iVar2 + 0x10) = uVar3 | 0x800;
  *(ulonglong *)(iVar2 + 0x10) = uVar3 | 0x20800;
  iVar2 = lbl_8320A898;
  *(undefined4 *)(lbl_8320A898 + 0x2ed8) = uRam831c1cfc;
  *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x80000;
  fn_82631920(lbl_8320A898,lbl_8327F8B0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(lbl_8320A898,uRam8327f958);
}

