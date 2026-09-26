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
extern int fn_82386E68();
extern int fn_82F622A8();


undefined4 *
fn_824C8960(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  int in_r0;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar7 = param_1 + 2;
  if (*(int *)(param_4 + 0x10) == 0) {
    param_1[6] = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != param_4) {
      puVar7 = (undefined4 *)0x0;
    }
    uVar5 = (**(code **)**(undefined4 **)(param_4 + 0x10))(*(undefined4 **)(param_4 + 0x10),puVar7);
    param_1[6] = uVar5;
  }
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar2 = param_5[1] - *param_5 >> 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (uVar2 == 0) {
    bVar4 = false;
  }
  else {
    if (0xfffffff < uVar2) {
      fn_82F622A8(0xffffffff82196fd4);
    }
    iVar6 = fn_82386E68(uVar2);
    param_1[8] = iVar6;
    bVar4 = true;
    param_1[9] = iVar6;
    param_1[10] = uVar2 * 0x10 + iVar6;
  }
  if (bVar4) {
    iVar1 = param_5[1];
    iVar8 = param_1[8];
    for (iVar6 = *param_5; iVar6 != iVar1; iVar6 = iVar6 + 0x10) {
      if (iVar8 != 0) {
        puVar7 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
        uVar5 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        puVar3 = (undefined4 *)(in_r0 + iVar8 & 0xfffffff0);
        *puVar3 = *puVar7;
        puVar3[1] = uVar5;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
      }
      iVar8 = iVar8 + 0x10;
    }
    param_1[9] = iVar8;
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 1;
  return param_1;
}

