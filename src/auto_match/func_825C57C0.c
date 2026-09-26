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
extern int fn_82522D98();
extern int fn_8265C9E0();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CACFC;
extern unsigned int lbl_821CC160;


void fn_825C57C0(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)fn_8265C9E0(0x40);
  if (puVar7 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    puVar7[1] = param_3;
    puVar7[9] = uVar1;
    puVar7[8] = uVar2;
    uVar6 = lbl_821CC160;
    uVar5 = lbl_821CA460;
    uVar2 = lbl_82193B00;
    uVar1 = lbl_821916FC;
    *puVar7 = &lbl_821CACFC;
    puVar7[2] = uVar2;
    puVar7[3] = uVar1;
    puVar7[6] = uVar6;
    puVar7[5] = uVar6;
    puVar7[4] = uVar6;
    puVar7[0xc] = uVar6;
    puVar7[10] = uVar6;
    puVar7[0xb] = uVar5;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(8);
  }
  iVar4 = *(int *)(iVar3 + 4);
  while (iVar4 != 0) {
    iVar3 = *(int *)(iVar3 + 4);
    iVar4 = *(int *)(iVar3 + 4);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

