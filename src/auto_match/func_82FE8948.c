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
extern int fn_82FE6540();
extern int fn_82FE88A0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82FE8948(ulonglong param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  if ((param_1 & 0xffffffff) != 0) {
    uVar2 = fn_82F64CE0(param_1);
    uVar4 = -(uVar2 + 1) & 0xfffffff0;
    fn_82F6E8D4();
    lVar5 = (ZEXT48(&stack0x00000000) - 0x80) + uVar4;
    *(undefined4 *)lVar5 = *puVar1;
    lVar5 = lVar5 + 0x50;
    lVar3 = fn_82F64CE0(param_1);
    uVar4 = uVar2;
    if ((lVar3 + 1U & 0xffffffff) < (uVar2 & 0xffffffff)) {
      lVar3 = fn_82F64CE0(param_1);
      uVar4 = lVar3 + 1;
    }
    fn_82A2A378(0,0,param_1,uVar4,lVar5,uVar2,0,0);
    *(undefined1 *)((int)lVar5 + (int)uVar2) = 0;
    fn_82FE6540(lVar5);
    fn_82FE88A0();
  }
  return;
}

