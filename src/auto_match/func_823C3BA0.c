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
extern int fn_822ABA88();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236BA88();
extern int fn_823C2148();
extern int fn_823C4850();
extern int fn_823CC298();
extern int fn_823D9D60();
extern int fn_823E6E98();
extern int fn_823E88F0();
extern int fn_825275B0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823C3BA0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  
  fn_8236BA88(*(undefined4 *)**(undefined4 **)(param_1 + 8));
  fn_8236BA88(*(undefined4 *)(**(int **)(param_1 + 8) + 4));
  iVar5 = *(int *)(param_1 + 0xd80);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0xe24);
  }
  uVar8 = 0;
  piVar1 = *(int **)(iVar5 * 4 + **(int **)(param_1 + 8));
  uVar2 = *(undefined4 *)(((uint)LZCOUNT(iVar5) >> 3 & 4) + **(int **)(param_1 + 8));
  uVar3 = *(uint *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (ulonglong)uVar3;
  uVar6 = (ulonglong)*(uint *)(uVar3 + 8);
  if (uVar6 != 0) {
    do {
      iVar5 = fn_822ABA88(uVar7,uVar8);
      if (*(int *)(iVar5 + 0x1ec) != 0) {
        fn_823693A0(param_1,iVar5);
        break;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  uStack_4c = 0;
  iVar5 = *(int *)(param_1 + 0x9a0);
  uStack_50 = 0xffffffff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  fn_823E6E98(param_1,*(undefined4 *)(iVar5 + 0x2c),&uStack_50);
  uVar4 = fn_823D9D60(param_1,0);
  fn_823D9D60(uVar4,1);
  fn_823E88F0(&uStack_50,*(undefined4 *)(param_1 + 8),param_1 + 0xc,param_1 + 0x1090);
  fn_823C4850(param_1,piVar1);
  fn_823C4850(param_1,uVar2);
  fn_82369A00(param_1,*(undefined4 *)(param_1 + 0xe10),iVar5,2);
  if (*(int *)(param_1 + 0x42c) != 2) {
    fn_825275B0(*(undefined4 *)(param_1 + 0xe10));
  }
  *(undefined4 *)(param_1 + 0x42c) = 2;
  fn_823C2148(param_1,1,1);
  *(undefined4 *)(param_1 + 0xef4) = lbl_821CC160;
  fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x20);
  return;
}

