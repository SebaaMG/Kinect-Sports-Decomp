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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545810();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262F8D8();
extern int fn_8262FEC8();


void fn_825CFBE0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_82545950(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82545A90(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82545950(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_82545A90(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82545810(param_1 + 0x30);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  while( true ) {
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    iVar1 = *(int *)(iVar4 + 0x18);
    if (*(int *)(iVar4 + 0xc) != 0) {
      fn_8251FA58();
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    if (*(int *)(iVar4 + 0x10) != 0) {
      fn_8251FA58();
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    iVar2 = *(int *)(iVar4 + 4);
    if (iVar2 != 0) break;
    if (*(int *)(iVar4 + 8) != 0) {
      fn_8262FEC8();
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    *(undefined4 *)(iVar4 + 0x18) = 0;
    fn_82522ED8(iVar4);
    iVar4 = iVar1;
  }
  uVar3 = *(uint *)(iVar2 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
  fn_8262F8D8(iVar2,10,0,uVar3,0,uVar3,*(uint *)(iVar2 + 0x1c) & 0x3fffffc,0);
}

