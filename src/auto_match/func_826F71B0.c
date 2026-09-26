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
extern unsigned int *auStack_44;
extern unsigned int *auStack_4c;
extern int fn_8267BE38();
extern int fn_8268ACE8();
extern int fn_8268B330();
extern int fn_8268C510();
extern int fn_8268C750();
extern int fn_82696958();
extern int fn_826D7220();
extern int fn_826F35B0();
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


/* WARNING: Type propagation algorithm not settling */

void fn_826F71B0(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  char in_RESERVE;
  byte bVar9;
  uint uStack_50;
  uint auStack_4c [2];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [64];
  
  iVar5 = fn_8268ACE8(param_2 + 0xc);
  bVar9 = (iVar5 == 0) << 1;
  if (iVar5 != 0) {
    auStack_4c[1] = 5;
    fn_8268C750(auStack_44,param_2 + 0xc);
    fn_8268C750(auStack_40,param_4);
    fn_8268B330(&uStack_50);
    fn_826F35B0(param_3,&uStack_50,auStack_4c + 1);
    fn_8268C510(auStack_4c,((ulonglong)uStack_50 & 0xfffffffc) + 8);
    (**(code **)(**(int **)(param_2 + 0x58) + 4))
              (*(int **)(param_2 + 0x58),auStack_4c,*(undefined4 *)(*(int *)(param_3 + 8) + 8));
    lVar6 = ((ulonglong)auStack_4c[0] & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar8 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    bVar9 = (uVar8 == 1) << 1;
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
    piVar1 = *(int **)(param_2 + 0x58);
    iVar5 = *piVar1;
    uVar4 = fn_82696958(param_2 + 0x48,uVar3);
    (**(code **)(iVar5 + 8))(piVar1,uVar3,uVar4);
    lVar6 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
    do {
      puVar7 = (uint *)lVar6;
      uVar8 = (ulonglong)*puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar8 - 1,0,lVar6);
        *puVar7 = uVar2;
        bVar9 = 2;
      }
    } while (!(bool)(bVar9 >> 1 & 1));
    if (uVar8 == 1) {
      fn_8267BE38();
    }
    fn_826D7220(auStack_4c + 1);
  }
  return;
}

