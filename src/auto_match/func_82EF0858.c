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
extern int fn_82EEFC00();
extern int fn_82F64CE0();
extern int fn_82F68CC0();
extern unsigned int iStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_82EF0858(int param_1,uint param_2,undefined4 *param_3,undefined2 *param_4,undefined2 *param_5,
             ushort *param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *apuStack_50 [5];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((((((param_2 & 0xffff) < *(uint *)(param_1 + 0x1ac)) && (param_3 != (undefined4 *)0x0)) &&
       (param_4 != (undefined2 *)0x0)) && (param_6 != (ushort *)0x0)) &&
     ((*param_6 == 0 || (param_5 != (undefined2 *)0x0)))) {
    fn_82EEFC00(param_1 + 0x48,param_2 & 0xffff,apuStack_50);
    uVar1 = apuStack_50[0][1];
    uStack_38 = apuStack_50[0][2];
    iVar2 = apuStack_50[0][3];
    uStack_3c = ((((U64)(uStack_3c)) & (~(((U64)0xFFFF) << 0))) | ((((U64)((undefined2)((uint)uVar1 >> 0x10))) & ((U64)0xFFFF)) << 0));
    *param_3 = *apuStack_50[0];
    *param_4 = (((U64)(uStack_3c) >> 0) & 0xFFFF);
    uStack_3c = uVar1;
    iStack_34 = iVar2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    else {
      lVar3 = fn_82F64CE0(iVar2);
      uVar5 = lVar3 + 1U & 0xffff;
    }
    if ((*param_6 < uVar5) && (param_5 != (undefined2 *)0x0)) {
      *param_6 = (ushort)uVar5;
      uVar4 = 0xffffffffc00d36b1;
    }
    else {
      *param_6 = (ushort)uVar5;
      if (iVar2 == 0) {
        if (param_5 != (undefined2 *)0x0) {
          *param_5 = 0;
        }
      }
      else if (param_5 != (undefined2 *)0x0) {
        fn_82F68CC0(param_5,iVar2,uVar5 << 1);
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xffffffff80070057;
  }
  return uVar4;
}

