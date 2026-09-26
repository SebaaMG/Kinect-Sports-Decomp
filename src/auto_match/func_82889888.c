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
extern unsigned int *auStack_ac;
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_823AA970();
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82888A50();
extern int fn_82888AD8();
extern int fn_82888E40();
extern int fn_82889760();
extern int fn_828E9D28();
extern int fn_828E9D78();
extern int fn_82F68CC0();
extern int iRam83159ab8;
extern unsigned int iStack_94;
extern unsigned int lbl_83213E58;
extern unsigned int uRam83159a50;
extern unsigned int uStack_70;
extern unsigned int uStack_77;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_b0;


void fn_82889888(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                  char param_6,undefined1 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort auStack_c0 [2];
  undefined1 auStack_bc [12];
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined1 uStack_77;
  undefined8 uStack_70;
  
  if (iRam83159ab8 == 0) {
    iStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    fn_828E9D28(auStack_ac,0,0);
    if (param_6 == '\0') {
      uVar2 = fn_823AA970(param_2);
    }
    else {
      uVar2 = fn_828E9D78();
    }
    uVar3 = fn_8265CA60();
    iVar5 = *(int *)(param_2 + 0x10);
    uStack_b0 = (undefined4)uVar3;
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_2 + 0x18);
    }
    fn_82F68CC0(uVar3,iVar5,uVar2);
    uStack_98 = (undefined4)uVar2;
    uStack_9c = uStack_b0;
    fn_828E9D28(auStack_ac,uStack_b0,uVar2);
    uVar1 = lbl_83213E58;
    auStack_c0[0] = lbl_83213E58;
    if (lbl_83213E58 == 0xffff) {
      lbl_83213E58 = 0;
    }
    else {
      lbl_83213E58 = lbl_83213E58 + 1;
    }
    uStack_84 = param_3;
    uStack_80 = param_4;
    uStack_7c = param_5;
    cStack_78 = param_6;
    uStack_77 = param_7;
    uStack_70 = param_8;
    uVar2 = fn_82889760(param_1,auStack_c0);
    fn_82888AD8(uVar2,&uStack_b0);
    if (*(uint *)(param_1 + 8) == 1) {
      *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 4);
    }
    if (0x960 < *(uint *)(param_1 + 8)) {
      iVar5 = *(int *)(param_1 + 0x10);
      if (*(short *)(iVar5 + 0x10) == -1) {
        auStack_c0[0] = 0;
      }
      else {
        auStack_c0[0] = *(short *)(iVar5 + 0x10) + 1;
      }
      puVar4 = (undefined4 *)fn_82888A50(auStack_bc,param_1,auStack_c0);
      *(undefined4 *)(param_1 + 0x10) = *puVar4;
      fn_8265CAA0(*(undefined4 *)(iVar5 + 0x18));
      fn_82888E40(auStack_bc,param_1,iVar5);
    }
    uRam83159a50 = (uint)uVar1;
    if (iStack_94 != 0) {
      fn_8265CA20();
    }
  }
  return;
}

