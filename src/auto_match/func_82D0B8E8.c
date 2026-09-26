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
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82D0B8E8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  iVar5 = *(int *)(param_1 + 8);
  if (*(char *)(iVar5 + 0x1b4) == '\0') {
    fn_82CEE578(auStack_240,auStack_230,0x200);
    uVar6 = *(undefined4 *)(iVar5 + 0x1b0);
    uVar4 = fn_82CEDB38(auStack_240,0xffffffff82134558);
    uVar4 = fn_82CEDCF0(uVar4,uVar6);
    fn_82CEDB38(uVar4,0xffffffff821c24f0);
    iVar5 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d887,auStack_230,0xffffffff8213450c,0x14c);
    if (iVar5 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(auStack_240);
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar2 = (int)in_r0;
  puVar1 = (undefined4 *)(iVar2 + iVar5 + 0x120 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)(iVar2 + param_2 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)(iVar5 + 0x130U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)(param_2 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)(iVar5 + 0x140U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)(iVar5 + 0x150U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)(param_2 + 0x30U & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + 0x160U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar3 = (undefined4 *)(iVar2 + param_3 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  return;
}

