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
extern unsigned int *auStack_40;
extern int fn_822ABA88();
extern int fn_8230C220();
extern int fn_8236C6A0();
extern int fn_823CC298();
extern int fn_823CDBB0();
extern int fn_82508078();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4f;
extern unsigned int uStack_50;


void fn_8230C750(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_48 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28);
  uStack_44 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c);
  fn_8230C220((ulonglong)*(uint *)(param_1 + 0x10) + 0xa18,&uStack_48);
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  iVar6 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),6);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uStack_2c = *(undefined4 *)(iVar6 + 0x28);
  uStack_28 = *(undefined4 *)(iVar6 + 0x2c);
  puVar4 = (undefined4 *)(iVar6 + 0x80U & 0xfffffff0);
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  uStack_24 = 2;
  uStack_30 = 0;
  uStack_50 = 0;
  puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  uStack_4f = 0;
  fn_823CDBB0(uVar3,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),auStack_40,
                    &uStack_50,1);
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar2 + 0x484) == 0) {
    if (*(int *)(iVar2 + 0x4c0) == 0) {
      fn_82508078(*(undefined4 *)(iVar2 + 0xa4),0xffffffff821af390,0);
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  fn_823CC298(*(undefined4 *)(iVar2 + 0x4b8),7);
  fn_8236C6A0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc));
  return;
}

