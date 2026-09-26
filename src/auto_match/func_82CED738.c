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
extern unsigned int *auStack_144;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED628();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CED738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined1 auStack_144 [324];
  
  puStack_150 = auStack_144;
  uStack_14c = 0;
  uStack_148 = 0x800000ff;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  while( true ) {
    while( true ) {
      uVar1 = uStack_148 & 0x3fffffff;
      lVar2 = thunk_FUN_82f6ede8(puStack_150,uVar1,param_2,&stack0x00000020);
      iVar4 = (int)lVar2;
      if (-1 < iVar4) break;
      uVar1 = (uStack_148 & 0x3fffffff) << 1;
      iVar4 = fn_82CE5410();
      if ((uStack_148 & 0x3fffffff) < uVar1) {
        uVar6 = (uStack_148 & 0x3fffffff) << 1;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&puStack_150,uVar6,1);
      }
    }
    if (iVar4 < (int)uVar1) break;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_148 & 0x3fffffff) < iVar4) {
      lVar5 = ((ulonglong)uStack_148 & 0x3fffffff) << 1;
      if ((int)lVar5 <= iVar4) {
        lVar5 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&puStack_150,lVar5,1);
    }
  }
  fn_82CED628(param_1,puStack_150);
  fn_82CED628(param_1,puStack_150);
  iVar4 = fn_82CE5410();
  uStack_14c = 0;
  if ((uStack_148 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),puStack_150,uStack_148 & 0x3fffffff,1);
  }
  return;
}

