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
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern int fn_82520E68();
extern int fn_82523048();
extern int fn_825269D0();
extern int fn_8253D108();
extern int fn_82547650();
extern int fn_82558B08();
extern int fn_8255B0D8();
extern int fn_82566E58();
extern int fn_8257CB40();
extern int fn_8257CC40();
extern int fn_8257E0B8();
extern int fn_825E8220();
extern int fn_82A1EFC0();
extern unsigned int lbl_832659CD;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


/* WARNING: Removing unreachable block (ram,0x82597464) */
/* WARNING: Removing unreachable block (ram,0x82597474) */
/* WARNING: Removing unreachable block (ram,0x82597480) */

void fn_82597398(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [8];
  code *pcStack_78;
  undefined1 auStack_68 [104];
  
  *(undefined4 *)(param_1 + 4) = 1;
  piVar7 = *(int **)(*(int *)(param_2 + 0x8ac) + 0xbab8);
  fn_825E8220(auStack_80,piVar7 + 6);
  do {
  } while (*piVar7 != 0);
  (*pcStack_78)(auStack_80);
  fn_82547650();
  if (*(int *)(param_2 + 0x234) != 0) {
    fn_8253D108(param_2 + 0x1f0,param_2);
  }
  fn_825269D0(8,param_2);
  fn_82558B08();
  piVar7 = *(int **)(param_2 + 0x848);
  iVar1 = piVar7[3];
  for (iVar6 = piVar7[2]; iVar6 != iVar1; iVar6 = iVar6 + 0x30) {
    fn_82566E58(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(*piVar7 + 0x844));
  }
  iVar1 = piVar7[2];
  if (iVar1 != piVar7[3]) {
    for (iVar6 = iVar1; iVar6 != piVar7[3]; iVar6 = iVar6 + 0x30) {
    }
    piVar7[3] = iVar1;
  }
  fn_8255B0D8(*(undefined4 *)(param_2 + 0x844));
  fn_82558B08();
  if (((*(uint *)(param_2 + 0x1a0) & 2) != 0) && (lbl_832659CD != '\0')) {
    fn_82523048(param_2 + 0xd40);
  }
  uStack_88 = 0x4b;
  uStack_84 = 8;
  fn_8257CB40(param_2 + 0x78,&uStack_88,0);
  puVar2 = *(undefined4 **)(param_2 + 0xa0);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    fn_82520E68(puVar3[2]);
  }
  fn_82558B08();
  uStack_90 = 0x4b;
  uStack_8c = 8;
  piVar4 = *(int **)(param_2 + 0x314);
  for (piVar7 = *(int **)(param_2 + 0x310); piVar7 < piVar4; piVar7 = piVar7 + 2) {
    piVar5 = (int *)*piVar7;
    if (*(char *)((int)piVar5 + 0xb25) == '\x03') {
      (**(code **)(*piVar5 + 0xc))(piVar5,&uStack_90);
    }
  }
  fn_8257E0B8(*(undefined4 *)(param_2 + 0xb8),&uStack_90);
  fn_82558B08();
  fn_8257CC40(param_2 + 0x78,param_2);
  fn_82558B08();
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_68,0,8);
}

