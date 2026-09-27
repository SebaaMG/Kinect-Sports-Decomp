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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82250A18();
extern int fn_822B17A8();
extern int fn_822C18B8();
extern int fn_82417F58();
extern int fn_82417FC0();
extern int fn_8241CE30();
extern int fn_82508078();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82536590();
extern int fn_82560100();
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82412588(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  longlong alStack_50 [2];
  struct { undefined4 first; undefined4 second; } stack_pair_40;

  undefined4 uStack_38;
  
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  puVar4 = (undefined4 *)((uint)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  iVar5 = fn_82417F58(uVar6);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) &&
     (iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0x34), iVar5 != 0)) {
    fn_822B17A8(iVar5,0xd,0);
  }
  iVar5 = **(int **)(param_1 + 0x24);
  if (((*(int **)(param_1 + 0x24) == *(int **)(iVar5 + 0x2b20)) && (*(int *)(iVar5 + 0xc0c) != 0))
     && ((*(int *)(iVar5 + 0x2b90) == 0 || (*(int *)(iVar5 + 0xcb8) == 0)))) {
    fn_82536590(iVar5 + 0xd80,0);
    *(undefined4 *)(iVar5 + 0x2b90) = 1;
  }
  piVar3 = *(int **)(param_1 + 0x24);
  if (piVar3[0x91] != 0) goto LAB_82412704;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = (uint)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
  alStack_50[0] = (longlong)(int)uVar2;
  if (uVar2 == 0) {
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b84c8;
  }
  else if (uVar2 == 1) {
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b84dc;
  }
  else {
    if (2 < uVar2) goto LAB_82412704;
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b82ec;
  }
  fn_82508078(*(undefined4 *)(iVar5 + 0xa4),uVar7,0);
LAB_82412704:
  piVar3 = *(int **)(param_1 + 0x24);
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0;
  iVar5 = *piVar3;
  fn_82417FC0(piVar3,&stack_pair_40.first);
  alStack_50[0] = CONCAT44(*(undefined4 *)(iVar5 + 0x1594),((uint)(alStack_50[0])));
  uVar6 = fn_825354B8(alStack_50,&stack0x00000020,0,**(undefined4 **)(*piVar3 + 0x2b58),
                            0xffffffff83296bc0,0xffffffff83296bd0);
  alStack_50[0] = CONCAT44(uVar6,((uint)(alStack_50[0])));
  fn_82536288(alStack_50);
  fn_822C18B8(&stack_pair_40.first);
  fn_82560100((double)*(float *)(**(int **)(param_1 + 0x24) + 0x159c),
                    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c),
                    **(int **)(param_1 + 0x24) + 0x1598,&stack0x00000020,*(int *)(param_1 + 0x28),0,
                    0,0,0);
  puVar4 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  iVar5 = lbl_832975B0;
  bVar1 = lbl_832975B0 == 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(**(int **)(param_1 + 0x24) + 0x15c8);
  if (bVar1) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    fn_8241CE30((double)lbl_821CC160,*(undefined4 *)(param_1 + 0x24),param_1,3);
  }
  return;
}

