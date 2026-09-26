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
extern unsigned int *auStack_78;
extern unsigned int *auStack_98;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d8;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823CF430();
extern int fn_823E6A28();
extern int fn_823F17E0();
extern int fn_8288B760();
extern int fn_82F68CC0();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8
fn_823CF270(int param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [28];
  undefined4 *puStack_bc;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [8];
  undefined4 auStack_78 [30];
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1));
  uStack_a0 = 0xffffffff;
  puVar5 = auStack_98;
  auStack_98[0] = 0;
  uStack_9c = 0xffffffff;
  lVar6 = 7;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xffffffff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar5 = auStack_78;
  auStack_78[0] = 0;
  lVar6 = 7;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xffffffff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823E6A28(param_1,iVar2,&uStack_a0);
  }
  if (*(int *)(*(int *)(param_1 + 0x4b0) + 0xd4) != 0) {
    return 0;
  }
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) != '\0') {
    iVar3 = *(int *)(param_1 + 0x84);
    if (iVar3 == 0) {
      return 1;
    }
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar4 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if (uVar4 == 0) {
      return 1;
    }
    puVar5 = (undefined4 *)fn_822EFBF0(auStack_b0,iVar3);
    puStack_bc = &uStack_a0;
    fn_82F68CC0(auStack_d8,param_5 + 5,0x18);
    fn_823F17E0((ulonglong)*(uint *)*puVar5 + 0x930,param_2,param_3,*param_5,param_5[1],
                      param_5[2],param_5[3],param_5[4]);
    if (iStack_ac != 0) {
      fn_822315A0();
    }
  }
  fn_823CF430(param_1,param_2,param_3,param_4,&uStack_a0);
  return 1;
}

