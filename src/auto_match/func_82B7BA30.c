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
extern int fn_82AB15D0();
extern int fn_82B7B6A0();
extern int fn_82B7FA90();


undefined8 fn_82B7BA30(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 *puVar5;
  longlong lVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dae48,0xffffffff820da3b8,0x3fbb);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d771c,0xffffffff820da3b8,0x3fbc);
  }
  puVar3 = (undefined4 *)(*(code *)param_1[1])(*param_1,0x6e0);
  puVar5 = (undefined1 *)((int)puVar3 + -1);
  lVar6 = 0x6e0;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar5 = (undefined1 *)((int)puVar3 + 0x1f);
  lVar6 = 0x640;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  puVar3[5] = param_2;
  puVar3[4] = (int)param_3;
  puVar3[0x19e] = 1;
  puVar3[0x19d] = 0;
  puVar3[0x1a1] = 2;
  puVar3[0x1a7] = 0;
  puVar3[0x1a2] = 0xffff;
  puVar3[0x1a3] = 0;
  uVar4 = (*(code *)param_1[1])(*param_1,0x5b54);
  puVar3[7] = uVar4;
  uVar1 = (*(code *)param_1[1])(*param_1,12000);
  uVar2 = fn_82B7B6A0(puVar3,param_4,uVar1);
  fn_82B7FA90(param_3,(uVar2 & 0xffffffff) >> 2,uVar1);
  (*(code *)param_1[2])(*param_1,uVar1);
  (*(code *)param_1[2])(*param_1,puVar3[7]);
  (*(code *)param_1[2])(*param_1,puVar3);
  return 0;
}

