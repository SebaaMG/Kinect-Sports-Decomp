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
extern int fn_82AB6EC0();
extern int fn_82AB9738();
extern int fn_82B7B6A0();
extern int fn_82B7FA30();
extern int fn_82B7FA90();


undefined8 fn_82B7B7B8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dae48,0xffffffff820da3b8,0x3f70);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d771c,0xffffffff820da3b8,0x3f71);
  }
  uVar1 = fn_82AB6EC0(param_2,0);
  uVar2 = fn_82AB9738(param_1[5],uVar1);
  if (uVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dae30,0xffffffff820da3b8,0x3f7b);
  }
  uVar1 = fn_82AB6EC0(param_2,1);
  uVar3 = fn_82AB9738(param_1[5],uVar1);
  if (uVar3 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dae18,0xffffffff820da3b8,0x3f85);
  }
  puVar4 = (undefined4 *)(*(code *)param_1[1])(*param_1,0x6e0);
  puVar6 = (undefined1 *)((int)puVar4 + -1);
  lVar7 = 0x6e0;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar6 = (undefined1 *)((int)puVar4 + 0x1f);
  lVar7 = 0x640;
  do {
    puVar6 = puVar6 + 1;
    *puVar6 = 0xff;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *puVar4 = *param_1;
  puVar4[1] = param_1[1];
  puVar4[2] = param_1[2];
  puVar4[3] = param_1[3];
  puVar4[5] = (int)param_2;
  puVar4[4] = (int)param_3;
  puVar4[0x19e] = 1;
  puVar4[0x19d] = 0;
  puVar4[0x1a1] = 2;
  puVar4[0x1a7] = 0;
  puVar4[0x1a2] = 0xffff;
  puVar4[0x1a3] = 0;
  uVar5 = (*(code *)param_1[1])(*param_1,0x5b54);
  puVar4[7] = uVar5;
  if ((uVar2 & 0xffffffff) != 0) {
    uVar1 = (*(code *)param_1[1])(*param_1,12000);
    uVar2 = fn_82B7B6A0(puVar4,uVar2,uVar1);
    fn_82B7FA90(param_3,(uVar2 & 0xffffffff) >> 2,uVar1);
    (*(code *)param_1[2])(*param_1,uVar1);
  }
  if ((uVar3 & 0xffffffff) != 0) {
    uVar1 = (*(code *)param_1[1])(*param_1,12000);
    uVar2 = fn_82B7B6A0(puVar4,uVar3,uVar1);
    fn_82B7FA30(param_3,(uVar2 & 0xffffffff) >> 2,uVar1);
    (*(code *)param_1[2])(*param_1,uVar1);
  }
  (*(code *)param_1[2])(*param_1,puVar4[7]);
  (*(code *)param_1[2])(*param_1,puVar4);
  return 0;
}

