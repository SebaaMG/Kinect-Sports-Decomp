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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_2c;
extern int fn_82D1F838();
extern unsigned int lbl_82134508;
extern unsigned int lbl_8323B1A0;
extern unsigned int uStack_30;


double fn_82D1FA30(undefined8 param_1,undefined8 param_2,int param_3,char *param_4)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  float fStack_2c;
  char cStack_28;
  
  puVar1 = (undefined4 *)((uint)(&lbl_8323B1A0 + in_r0) & 0xfffffff0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  fStack_2c = lbl_82134508;
  uStack_30 = 0;
  puVar1 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  cStack_28 = '\0';
  fn_82D1F838(param_1,param_2,auStack_60);
  if (param_4 == (char *)0x0) {
    puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
  }
  else {
    puVar1 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *param_4 = '\x01' - (cStack_28 == '\0');
  }
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return (double)fStack_2c;
}

