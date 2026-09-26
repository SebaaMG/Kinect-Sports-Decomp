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
extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A40238();
extern int fn_82A40750();
extern int fn_82A41140();
extern int fn_82A411B8();
extern int fn_82A4F4E0();
extern int fn_82BFE128();


undefined4 fn_82A41E00(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar4;
  longlong lVar3;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 auStack_60 [24];
  
  auStack_60[0] = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x1d8);
  puVar6 = (undefined4 *)0x0;
  puVar7 = (uint *)0x0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) break;
    puVar4 = (uint *)*puVar2;
    if (*puVar4 == param_2) goto LAB_82a41fb4;
    if ((param_2 < *puVar4) || (puVar6 = puVar2, puVar7 = puVar4, puVar2 == (undefined4 *)0x0))
    break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  puVar4 = (uint *)fn_82A3FF60(0xffffffff83219d50,0x34,0x20970001,0);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[10] = 1;
    puVar4[2] = (uint)(puVar4 + 3);
    puVar4[9] = 0;
    puVar4[3] = 0;
    uVar1 = puVar4[2];
    *(uint *)(uVar1 + 8) = puVar4[1];
    puVar4[1] = uVar1 + 4;
  }
  if (puVar4 == (uint *)0x0) {
    auStack_60[0] = 0x8007000e;
    goto LAB_82a41fb8;
  }
  *puVar4 = param_2;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  if (puVar7 == (uint *)0x0) {
    uVar1 = *(uint *)(param_1 + 0xb4);
  }
  else {
    uVar1 = puVar7[0xc];
  }
  lVar3 = fn_82A40750(param_1,uVar1,puVar4 + 0xc);
  auStack_60[0] = (undefined4)lVar3;
  if (lVar3 < 0) {
LAB_82a41f70:
    if (puVar4[0xb] != 0) {
      fn_82BFE128(*(undefined4 *)(param_1 + 0x3ea0));
    }
    if (puVar4[0xc] != 0) {
      fn_82BFE128(*(undefined4 *)(param_1 + 0x3ea0));
    }
    fn_82A411B8(puVar4 + 1);
    fn_82A4F4E0(puVar4);
    puVar4 = (uint *)0x0;
    if ((int)lVar3 < 0) goto LAB_82a41fb8;
  }
  else {
    lVar3 = fn_82A40750(param_1,uVar1,puVar4 + 0xb);
    auStack_60[0] = (undefined4)lVar3;
    if (lVar3 < 0) goto LAB_82a41f70;
    iVar5 = fn_82A41140(param_1 + 0x1c0,puVar6,puVar4);
    if (iVar5 == 0) {
      lVar3 = -0x7ff8fff2;
      auStack_60[0] = 0x8007000e;
      goto LAB_82a41f70;
    }
    auStack_60[0] = 0;
  }
LAB_82a41fb4:
  *param_3 = puVar4;
LAB_82a41fb8:
  fn_82A40238(auStack_60);
  return auStack_60[0];
}

