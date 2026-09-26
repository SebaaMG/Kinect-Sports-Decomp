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
extern int fn_82B80CD0();
extern int fn_82B86C90();


void fn_82AF88B0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 extraout_f1;
  uint auStack_40 [16];
  
  uVar4 = fn_82B86C90(param_1[3],param_2,auStack_40);
  uVar1 = *param_1;
  uVar7 = 0;
  uVar2 = uVar1 & 0x1f;
  if ((uVar1 & 0xe000000) != 0) {
    uVar8 = 0;
    puVar6 = (undefined8 *)(param_2 + -8);
    do {
      uVar3 = (ulonglong)((uVar1 >> 5 & 0xff) >> (uVar8 & 0x3f));
      iVar5 = (int)((uVar3 & 3) << 1);
      uVar4 = fn_82B80CD0(*(undefined8 *)((int)((uVar3 & 3) << 3) + param_2),uVar4,
                                ((2 << (int)((uVar3 & 3) << 1) + 1) - 1U & auStack_40[0] &
                                -1 << iVar5) >> iVar5,uVar2);
      puVar6 = puVar6 + 1;
      *puVar6 = extraout_f1;
      uVar1 = *param_1;
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + 2;
    } while (uVar7 < (uVar1 >> 0x19 & 7));
  }
  return;
}

