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
extern int fn_82CEFBD0();
extern int fn_82CF9428();
extern int fn_82D01430();
extern int fn_82D03DD8();
extern unsigned int lbl_8213398C;


undefined4 * fn_82CF9730(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  
  puVar6 = param_1 + 1;
  *param_1 = &lbl_8213398C;
  fn_82CEFBD0(puVar6,4000);
  param_1[10] = (int)param_2;
  fn_82D03DD8(param_1 + 0xb,param_2);
  param_1[0x82] = 0;
  lVar5 = 0x21;
  puVar3 = param_1 + 0x85;
  do {
    fn_82D01430(puVar3);
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 0xd;
  } while (-1 < lVar5);
  param_1[0x240] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  RtlEnterCriticalSection(puVar6);
  param_1[0x23f] = 0x7fffffff;
  RtlLeaveCriticalSection(puVar6);
  param_1[0x83] = param_1 + 0x85;
  puVar3 = param_1 + 0x3b;
  param_1[0x84] = param_1 + 0x23f;
  lVar5 = 0x23;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar1 = fn_82CF9428(param_1,0x200,0x80,0x10000);
  param_1[0x5c] = uVar1;
  uVar1 = fn_82CF9428(param_1,0x100,0x20,0x8000);
  param_1[0x4c] = uVar1;
  uVar1 = fn_82CF9428(param_1,0,4,0x100);
  param_1[0x3c] = uVar1;
  uVar1 = fn_82CF9428(param_1,0x220,0x80,0x4400);
  uVar7 = 0x220;
  param_1[0x5e] = uVar1;
  param_1[0x5d] = uVar1;
  do {
    iVar8 = (int)uVar7;
    iVar4 = (iVar8 >> 4) + 0x3c;
    if (param_1[iVar4] == 0) {
      uVar2 = 0x10;
      if ((iVar8 < 1) || (lVar5 = (uVar7 & 0xfffffff) << 4, (uVar7 & 0xffffffff) < 0x100)) {
        lVar5 = 0x1000;
      }
      if (0x3f < iVar8) {
        uVar2 = 0x20;
      }
      uVar1 = fn_82CF9428(param_1,uVar7,uVar2,lVar5);
      param_1[iVar4] = uVar1;
    }
    uVar7 = uVar7 - 0x10;
  } while (0xf < (int)uVar7);
  return param_1;
}

