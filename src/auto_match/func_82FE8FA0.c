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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82A2A378();
extern int fn_82F64CE0();
extern int fn_82F6E8D4();
extern int fn_82F6F8B8();
extern int fn_82FE8948();
extern int fn_82FFA510();
extern unsigned int lbl_832642F0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82FE8FA0(undefined8 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x90);
  *puVar2 = register0x0000000c;
  uVar3 = fn_82F64CE0();
  uVar6 = (uVar3 + 1 & 0x7fffffff) * -2 & 0xfffffff0;
  fn_82F6E8D4();
  lVar7 = (ZEXT48(&stack0x00000000) - 0x90) + uVar6;
  *(undefined4 *)lVar7 = *puVar2;
  lVar8 = lVar7 + 0x50;
  fn_82F6F8B8(lVar8,param_1);
  sVar1 = *(short *)lVar8;
  lVar5 = lVar8;
  do {
    if (sVar1 == 0) {
LAB_82fe901c:
      uVar4 = fn_82FE8948(lVar8);
      uVar6 = -(uVar3 + 1) & 0xfffffff0;
      fn_82F6E8D4();
      *(undefined4 *)(lVar7 + uVar6) = *(undefined4 *)lVar7;
      lVar7 = lVar7 + uVar6 + 0x50;
      lVar5 = fn_82F64CE0(lVar8);
      uVar6 = uVar3;
      if ((lVar5 + 1U & 0xffffffff) < (uVar3 & 0xffffffff)) {
        lVar5 = fn_82F64CE0(lVar8);
        uVar6 = lVar5 + 1;
      }
      fn_82A2A378(0,0,lVar8,uVar6,lVar7,uVar3,0,0);
      *(undefined1 *)((int)lVar7 + (int)uVar3) = 0;
      fn_82FFA510(lbl_832642F0,uVar4,lVar7);
      return uVar4;
    }
    if (*(short *)lVar5 == 0x2e) {
      *(short *)lVar5 = 0;
      goto LAB_82fe901c;
    }
    lVar5 = lVar5 + 2;
    sVar1 = *(short *)lVar5;
  } while( true );
}

