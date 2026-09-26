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
extern int fn_825F33B0();
extern unsigned int lbl_8320A898;


void fn_825C4DE0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = lbl_8320A898;
  uVar1 = *(uint *)(lbl_8320A898 + 0x2934);
  *(uint *)(lbl_8320A898 + 0x2934) = uVar1 & 0xffffff8f | 0x60;
  uVar4 = *(ulonglong *)(iVar3 + 0x10);
  *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x800;
  *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x20800;
  for (puVar2 = *(undefined4 **)(param_2 + 0xc); iVar3 = lbl_8320A898, puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[2]) {
    fn_825F33B0(param_1,*puVar2,param_3,param_4);
  }
  *(uint *)(lbl_8320A898 + 0x2934) =
       (uVar1 >> 4 & 7) << 4 | *(uint *)(lbl_8320A898 + 0x2934) & 0xffffff8f;
  uVar4 = *(ulonglong *)(iVar3 + 0x10);
  *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x800;
  *(ulonglong *)(iVar3 + 0x10) = uVar4 | 0x20800;
  return;
}

