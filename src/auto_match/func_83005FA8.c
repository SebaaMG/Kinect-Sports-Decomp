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
extern int fn_82FA5060();
extern int fn_83013880();
extern unsigned int lbl_831BC768;


undefined8
fn_83005FA8(int *param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar5;
  int *piVar6;
  int *apiStack_60 [24];
  
  if (3 < param_3) {
    return 0x1f;
  }
  iVar4 = param_1[10];
  if (iVar4 == 0) {
    puVar3 = (undefined4 *)fn_82FA5060(lbl_831BC768,0x40);
    param_1[10] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0xffffffff;
      puVar3[4] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[6] = 0xffffffff;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[9] = 0xffffffff;
      puVar3[10] = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      puVar3[0xc] = 0xffffffff;
      puVar3[0xd] = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      *(undefined1 *)(puVar3 + 0xf) = 0;
    }
    iVar4 = param_1[10];
    if (iVar4 == 0) {
      return 0x34;
    }
  }
  uVar5 = 1;
  piVar6 = (int *)((param_3 + 1) * 0xc + iVar4);
  piVar1 = (int *)piVar6[1];
  if (piVar1 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
    piVar6[1] = 0;
    if ((int)uVar5 != 1) {
      piVar6[1] = 0;
      *piVar6 = -1;
      goto LAB_83006160;
    }
  }
  apiStack_60[0] = (int *)0x0;
  if ((piVar6[1] == 0) && ((int)param_2 != -2)) {
    iVar4 = fn_83013880(0xffffffff831bc7f4,param_2,apiStack_60);
    if ((iVar4 != 1) || (apiStack_60[0] == (int *)0x0)) {
      return 1;
    }
    uVar2 = (**(code **)(*apiStack_60[0] + 0xc))(apiStack_60[0],0xffffffff831bc7f4,param_4,param_5);
    if ((int)uVar2 != 1) {
      (**(code **)(*apiStack_60[0] + 0x10))(apiStack_60[0],0xffffffff831bc7f4);
      return uVar2;
    }
  }
  *piVar6 = (int)param_2;
  piVar6[1] = (int)apiStack_60[0];
LAB_83006160:
  (**(code **)(*param_1 + 0x50))(param_1);
  return uVar5;
}

