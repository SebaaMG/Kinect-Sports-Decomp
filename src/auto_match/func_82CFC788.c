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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE6460();
extern int fn_82F6EDE8();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


void fn_82CFC788(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulonglong uVar1;
  int iVar3;
  longlong lVar2;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if ((param_1[2] & 0x3fffffff) < 0x3f) {
    iVar3 = fn_82CE5410();
    if ((param_1[2] & 0x3fffffff) < 0x100) {
      uVar5 = (param_1[2] & 0x3fffffff) << 1;
      if (uVar5 < 0x101) {
        uVar5 = 0x100;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,uVar5,1);
    }
  }
  do {
    while( true ) {
      uVar5 = param_1[2];
      uVar1 = (ulonglong)uVar5 & 0x3fffffff;
      lVar2 = fn_82F6EDE8(*param_1,uVar1,param_2,&stack0x00000020);
      iVar3 = (int)lVar2;
      if (iVar3 < 0) break;
      if (iVar3 < (int)uVar1) {
        param_1[1] = iVar3 + 1;
        iVar3 = fn_82CE5410();
        if ((int)param_1[1] < (int)(param_1[2] & 0x3fffffff)) {
          fn_82CE6460(*(undefined4 *)(iVar3 + 0x10),param_1,1,0);
        }
        return;
      }
      lVar2 = lVar2 + 1;
      iVar3 = fn_82CE5410();
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      if ((int)(param_1[2] & 0x3fffffff) < (int)lVar2) {
        lVar6 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
        if ((int)lVar6 <= (int)lVar2) {
          lVar6 = lVar2;
        }
LAB_82cfc860:
        fn_82CE6310(uVar4,param_1,lVar6,1);
      }
LAB_82cfc870:
      param_1[1] = (int)lVar2;
    }
    lVar2 = ((ulonglong)uVar5 & 0x3fffffff) << 1;
    if ((uint)lVar2 < 0x100) {
      lVar2 = 0xff;
    }
    lVar2 = lVar2 + 1;
    iVar3 = fn_82CE5410();
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    iVar3 = (int)lVar2;
    if (iVar3 <= (int)(param_1[2] & 0x3fffffff)) goto LAB_82cfc870;
    lVar6 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
    if (iVar3 < (int)lVar6) goto LAB_82cfc860;
    fn_82CE6310(uVar4,param_1,lVar2,1);
    param_1[1] = iVar3;
  } while( true );
}

