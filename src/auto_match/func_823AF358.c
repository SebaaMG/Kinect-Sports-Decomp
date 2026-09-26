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
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_300;
extern unsigned int *auStack_320;
extern int fn_822315A0();
extern int fn_823116D8();
extern int fn_82365BD8();
extern int fn_823A9A98();
extern int fn_823ADF20();
extern int fn_823AE180();
extern int fn_823AF468();
extern int fn_823B0C20();
extern unsigned int iStack_1dc;
extern unsigned int lbl_82193A34;
extern unsigned int uStack_1c0;
extern unsigned int uStack_310;


undefined4 ** fn_823AF358(undefined4 **param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_330;
  undefined4 *puStack_32c;
  undefined1 auStack_320 [16];
  undefined4 uStack_310;
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [276];
  int iStack_1dc;
  undefined4 uStack_1c0;
  
  if ((*(int *)(param_2 + 0x2b4) == 0) || (*(int *)(param_2 + 700) == 0)) {
    fn_823AF468(auStack_300);
    fn_823B0C20(auStack_300,1);
    fn_823A9A98(&puStack_330);
    puVar1 = (undefined4 *)((uint)(auStack_2f0 + (int)in_r0) & 0xfffffff0);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_320 + (int)in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    uStack_310 = uStack_1c0;
    fn_823116D8(*puStack_330,auStack_320);
    do {
      fn_823AE180((double)lbl_82193A34,auStack_300);
      uVar3 = *puStack_330;
      puVar1 = (undefined4 *)((uint)(auStack_2f0 + (int)in_r0) & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(auStack_320 + (int)in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uStack_310 = uStack_1c0;
      fn_823116D8(uVar3,auStack_320);
    } while (iStack_1dc == 0);
    *param_1 = (undefined4 *)0x0;
    param_1[1] = (undefined4 *)0x0;
    if (param_1 != &puStack_330) {
      puVar1 = param_1[1];
      param_1[1] = puStack_32c;
      *param_1 = puStack_330;
      puStack_32c = puVar1;
    }
    if (puStack_32c != (undefined4 *)0x0) {
      fn_822315A0();
    }
    fn_823ADF20(auStack_300);
  }
  else {
    fn_82365BD8(param_1,param_2 + 0x2b4);
  }
  return param_1;
}

