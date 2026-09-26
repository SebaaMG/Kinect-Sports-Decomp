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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823D0140();
extern int fn_823E7368();
extern int fn_823F1EC0();
extern int fn_8288B760();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;


void fn_823CFFE8(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [160];
  
  fn_82250D10(auStack_a0);
  fn_823E7368(param_1,auStack_a0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    fn_823D0140(param_1,param_2,param_3,param_4,param_5,auStack_a0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
    iVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1));
    if (iVar2 != 0) {
      if (*(int *)(iVar3 + 0x168) == 0) {
        uVar4 = *(uint *)(iVar3 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 != 0) {
        puVar5 = (undefined4 *)fn_822EFBF0(auStack_b0,iVar2);
        fn_823F1EC0((ulonglong)*(uint *)*puVar5 + 0xa58,param_2,param_3,param_4,param_5,
                          auStack_a0);
        if (iStack_ac != 0) {
          fn_822315A0();
        }
      }
    }
  }
  return;
}

