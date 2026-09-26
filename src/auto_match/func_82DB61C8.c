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
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_8323B464;


void fn_82DB61C8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [512];
  
  if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
    fn_82CEE578(auStack_220,auStack_210,0x200);
    fn_82CEDB38(auStack_220,0xffffffff82142448);
    (**(code **)(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xfffffffff0323454,auStack_210,0xffffffff82142408,0x43b);
    fn_82CED958(auStack_220);
    return;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = (int)(uVar6 + 1);
  uVar8 = lbl_821AAD20;
  lVar7 = (uVar6 + 1) - uVar6;
  if (0 < lVar7) {
    lVar5 = uVar6 * 0x70 + (ulonglong)*(uint *)(param_1 + 0x30) + 0x18;
    do {
      if (lVar5 != 0x18) {
        *(undefined4 *)lVar5 = uVar8;
        ((undefined4 *)lVar5)[1] = uVar8;
      }
      lVar5 = lVar5 + 0x70;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  lVar7 = uVar6 * 0x70 + (ulonglong)*(uint *)(param_1 + 0x30);
  puVar3 = (undefined4 *)lVar7;
  lVar5 = 5;
  *puVar3 = *(undefined4 *)(param_2 + 0x3030);
  puVar4 = (undefined4 *)(param_2 + 0x304c);
  lVar7 = lVar7 + 0x14;
  *(undefined1 *)(puVar3 + 2) =
       *(undefined1 *)
        (*(char *)(param_3 + 0xc) * 0x40 + *(int *)(*(int *)(param_1 + 0xc) + 0x80) + 0x1c34);
  puVar3[1] = *(undefined4 *)(param_2 + 0x3034);
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x3010 & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)((int)puVar3 + in_r0 + 0x50 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar1 = (undefined4 *)(param_2 + 0x3020U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(puVar3 + 0x18) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  puVar3[3] = (int)*(char *)(*(int *)(param_3 + 0x10) + 0x10) + *(int *)(param_3 + 0x10);
  puVar3[4] = (int)*(char *)(*(int *)(param_3 + 0x14) + 0x10) + *(int *)(param_3 + 0x14);
  do {
    puVar4 = puVar4 + 1;
    lVar7 = lVar7 + 4;
    *(undefined4 *)lVar7 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3[5] = *(undefined4 *)(param_3 + 8);
  puVar3[0xb] = *(undefined4 *)(param_2 + 0x3064);
  puVar3[0xc] = *(undefined4 *)(param_2 + 0x3068);
  puVar3[0xd] = *(undefined4 *)(param_2 + 0x306c);
  puVar3[0xe] = *(undefined4 *)(param_2 + 0x3070);
  puVar3[0xf] = *(undefined4 *)(param_2 + 0x3074);
  puVar3[0x10] = *(undefined4 *)(param_2 + 0x3078);
  puVar3[0x11] = *(undefined4 *)(param_2 + 0x307c);
  return;
}

