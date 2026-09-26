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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82529D38();
extern int fn_82A1EFC0();
extern unsigned int uStack_30;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8253C548(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_30;
  
  fn_82A1EFC0(auStack_78,0,0x58);
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uStack_80 = 0x2a;
  uStack_7c = 0x60;
  puVar2 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (param_3 == (undefined4 *)0x0) {
    fn_82529D38(param_1,&uStack_60);
  }
  else {
    uStack_60 = *param_3;
    uStack_5c = param_3[1];
    uStack_58 = param_3[2];
  }
  uStack_30 = 0;
  (**(code **)(*param_1 + 0xc))(param_1,&uStack_80);
  return;
}

