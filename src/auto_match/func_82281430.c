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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_8227FFA8();
extern int fn_822820E0();
extern int fn_82356F98();
extern int fn_82359C18();
extern int fn_823F2E20();
extern int fn_8265CA20();
extern unsigned int iStack_34;
extern unsigned int lbl_821A8A08;


void fn_82281430(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  iVar5 = param_1[4];
  *param_1 = &lbl_821A8A08;
  if (iVar5 != 0) {
    fn_8227FFA8(iVar5);
    fn_8265CA20(iVar5);
  }
  piVar3 = param_1 + 5;
  for (puVar2 = (undefined4 *)param_1[5]; puVar2 < (undefined4 *)param_1[6];
      puVar2 = (undefined4 *)*puVar2) {
    fn_8226D6A0(*puVar2);
    fn_82356F98(auStack_38);
    fn_823F2E20(puVar2 + 1,auStack_38);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    puVar2 = (undefined4 *)fn_822820E0(auStack_40,piVar3,puVar2);
  }
  param_1[0x10] = 0;
  fn_82359C18(param_1 + 0x12);
  iVar5 = *piVar3;
  if (iVar5 != 0) {
    iVar1 = param_1[6];
    if (iVar5 != iVar1) {
      piVar4 = (int *)(iVar5 + 8);
      do {
        if (*piVar4 != 0) {
          fn_822315A0();
        }
        iVar5 = iVar5 + 0xc;
        piVar4 = piVar4 + 3;
      } while (iVar5 != iVar1);
    }
    fn_8265CA20(*piVar3);
  }
  *piVar3 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

