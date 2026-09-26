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
extern unsigned int *auStack_81e;
extern unsigned int *auStack_840;
extern unsigned int *auStack_850;
extern int fn_822806F0();
extern int fn_822C5B18();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_820;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82281868(int param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 auStack_850 [4];
  undefined1 auStack_840 [32];
  undefined2 uStack_820;
  undefined1 auStack_81e [2054];
  
  auStack_850[0] = *param_2;
  uVar1 = fn_822C5B18(auStack_840,param_1 + 0x48);
  fn_822806F0(*(undefined4 *)(param_1 + 0x10),auStack_850,param_1 + 0x2c,uVar1,param_3);
  *(undefined4 *)(param_1 + 100) = auStack_850[0];
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar3 + 0x6c) == 0) {
    if ((*(int *)(iVar3 + 0x44) == 1) ||
       (piVar2 = (int *)(iVar3 + 0x54), *(int *)(iVar3 + 0x44) == 0)) {
      piVar2 = (int *)(iVar3 + 0x4c);
    }
    iVar3 = *piVar2;
  }
  else {
    iVar3 = *(int *)(iVar3 + 100);
  }
  if (iVar3 != 0) {
    uStack_820 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_81e,0,0x7fe);
  }
  return;
}

