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
extern int fn_82BA92B0();
extern int fn_82BABEF0();
extern int fn_82BC24F0();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_820540D0;
extern unsigned int lbl_820DF0C4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAE768(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (**(char **)(param_1 + 0x10) == '\0') {
    iVar3 = fn_82BA92B0(param_2);
    iVar4 = fn_82BC24F0(0x5a,*(undefined4 *)(param_1 + 0xc));
    uVar1 = *(undefined4 *)(iVar3 + 0x38);
    *(undefined4 *)(iVar4 + 0x50) = 0;
    uVar2 = lbl_820DF0C4;
    *(undefined4 *)(iVar4 + 0x38) = uVar1;
    dVar5 = (double)lbl_820540D0;
    *(undefined4 *)(iVar4 + 0x80) = uVar2;
    *(undefined4 *)(iVar4 + 0x34) = 3;
    fn_82BC34D8(dVar5,dVar5,dVar5,iVar4,*(undefined4 *)(param_1 + 0x10),1);
    fn_82BC5538(param_1,iVar4);
  }
  fn_82BABEF0(param_2,param_1 + 0x14,*(undefined1 *)(param_1 + 0x7c));
  return;
}

