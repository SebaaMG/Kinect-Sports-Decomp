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
extern int fn_82F5E8F0();
extern int fn_82F5FE40();
extern int fn_82F60010();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


bool fn_82F600B0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  
  puVar4 = param_1 + 4;
  lVar5 = 0x14;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  do {
    puVar1 = (undefined4 *)(in_r0 + param_6 & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    param_6 = param_6 + 0x10;
    puVar2 = (undefined4 *)(in_r0 + (int)puVar4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  fn_82F5FE40(param_1);
  cVar3 = fn_82F60010(param_1);
  if (cVar3 != '\0') {
    fn_82F5E8F0(param_1);
  }
  return cVar3 != '\0';
}

