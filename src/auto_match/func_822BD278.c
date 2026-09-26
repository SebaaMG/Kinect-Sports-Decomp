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
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_82236140();
extern int fn_8265CA20();
extern int fn_828E5538();
extern int fn_828E9D28();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


int fn_822BD278(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = fn_82236140(param_2);
  uStack_30 = (undefined4)uVar3;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 8;
  fn_828E9D28(auStack_40,uVar3,8);
  puVar1 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  dVar4 = (double)fn_828E5538(auStack_40,0xb,7);
  fStack_50 = (float)dVar4;
  dVar4 = (double)fn_828E5538(auStack_40,0xb,7);
  fStack_4c = (float)dVar4;
  dVar4 = (double)fn_828E5538(auStack_40,0xb,7);
  fStack_48 = (float)dVar4;
  puVar1 = (undefined4 *)((int)&fStack_50 + in_r0 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return param_1;
}

