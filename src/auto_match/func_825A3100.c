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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82D8E4C0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_825A3100(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r0;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int aiStack_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = *param_3;
  if (*param_3 == 0) {
    fn_82520158(0xffffffff821c7f8c,aiStack_40,0);
    iVar3 = aiStack_40[0];
  }
  aiStack_40[0] = iVar3;
  puVar4 = (undefined4 *)fn_8251F720(aiStack_40,0);
  fn_82D8E4C0(param_1,*puVar4);
  uStack_30 = lbl_821CC160;
  uStack_28 = lbl_821CC160;
  uStack_24 = lbl_821CC160;
  uStack_2c = puVar4[1];
  *(undefined1 *)(param_1 + 0xcd) = 2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puVar2 = (undefined4 *)((int)&uStack_30 + in_r0 & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar2 = (undefined4 *)(param_1 + 0x10U & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined4 *)(param_1 + 0x54) = puVar4[2];
  *(undefined4 *)(param_1 + 0x60) = puVar4[3];
  *(undefined4 *)(param_1 + 0x68) = puVar4[4];
  *(undefined4 *)(param_1 + 0xa8) = puVar4[5];
  *(undefined4 *)(param_1 + 0x98) = puVar4[6];
  uVar1 = puVar4[7];
  puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(char *)(param_1 + 0xce) = '\x01' - (puVar4[8] == 0);
  *(char *)(param_1 + 0xcc) = '\x01' - (puVar4[9] == 0);
  *(char *)(param_1 + 0xd4) = '\x01' - (puVar4[10] == 0);
  *(char *)(param_1 + 0xa3) = '\x01' - (puVar4[0xb] == 0);
  *(undefined4 *)(param_1 + 0xd0) = puVar4[0xd];
  fn_8251FA58(puVar4);
  return;
}

