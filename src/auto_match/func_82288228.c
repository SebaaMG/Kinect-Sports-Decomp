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
extern unsigned int *auStack_420;
extern unsigned int *auStack_42c;
extern unsigned int *auStack_430;
extern int fn_8225F160();
extern int fn_8228A728();
extern int fn_8228ABB8();
extern int fn_8228ACD0();
extern int fn_8234F298();
extern int fn_8234F338();
extern unsigned int lbl_83265988;


void fn_82288228(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_430 [4];
  undefined1 auStack_42c [12];
  undefined1 auStack_420 [1056];
  
  iVar5 = param_2 * 0x420 + *(int *)(param_1 + 0x11f0);
  iVar6 = param_3 * 0x40 + param_1;
  uVar1 = *(undefined4 *)(iVar5 + 0x838);
  *(undefined4 *)(iVar6 + 0x6c0) = 0;
  *(undefined4 *)(iVar6 + 0x6bc) = 0;
  *(undefined4 *)(iVar6 + 0x6a8) = uVar1;
  uVar2 = *(uint *)(iVar6 + 0x6a8);
  *(undefined4 *)(iVar6 + 0x6ac) = *(undefined4 *)(iVar5 + 0x83c);
  if (uVar2 < 2) {
    fn_8225F160();
    if ((lbl_83265988 == 0) ||
       ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
      uVar2 = param_3;
      if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
        uVar2 = -((param_3 < 2) - 1);
      }
      fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar2,auStack_42c,auStack_430);
      puVar4 = auStack_430;
      puVar3 = auStack_42c;
    }
    else {
      puVar4 = (undefined1 *)0x0;
      puVar3 = (undefined1 *)0x0;
    }
    fn_8228ABB8(param_1,param_3,iVar5 + 0x844,puVar3,puVar4);
  }
  else {
    if (uVar2 == 2) {
      fn_8234F338((ulonglong)*(uint *)(param_1 + 0x11f0) + 0x234,
                        *(undefined4 *)(iVar5 + 0x840),auStack_42c,auStack_430);
      fn_8228A728(auStack_420,param_1,param_3,*(undefined4 *)(iVar5 + 0x840),auStack_42c,
                        auStack_430);
      return;
    }
    if (3 < uVar2) goto LAB_822883c4;
    if (*(char *)(iVar5 + 0xc54) == '\0') {
      uVar2 = param_3;
      if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
        uVar2 = -((param_3 < 2) - 1);
      }
      fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar2,auStack_430,auStack_42c);
      fn_8228ABB8(param_1,param_3,iVar5 + 0x844,auStack_430,auStack_42c);
      *(undefined8 *)(iVar6 + 0x6b0) = *(undefined8 *)(*(int *)(param_1 + 0x11f0) + 0x18d0);
    }
    else {
      fn_8228ACD0(param_1,param_3,param_1 + 0x520);
      *(undefined8 *)(iVar6 + 0x6b0) = 0;
    }
  }
  *(undefined4 *)(iVar6 + 0x6bc) = 1;
LAB_822883c4:
  *(undefined4 *)(iVar6 + 0x6b8) = 0;
  return;
}

