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
extern int fn_82EEFD30();
extern int fn_82F64CE0();
extern int fn_82F68CC0();


undefined8 fn_82EF0770(int param_1,uint param_2,undefined2 *param_3,ushort *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int aiStack_30 [12];
  
  if ((((param_2 & 0xffff) < *(uint *)(param_1 + 0x26c)) && (param_4 != (ushort *)0x0)) &&
     ((*param_4 == 0 || (param_3 != (undefined2 *)0x0)))) {
    fn_82EEFD30(param_1 + 0x1b0,param_2 & 0xffff,aiStack_30);
    uVar4 = 0;
    iVar1 = *(int *)(aiStack_30[0] + 4);
    if (iVar1 != 0) {
      lVar3 = fn_82F64CE0(iVar1);
      uVar4 = lVar3 + 1U & 0xffff;
    }
    if ((*param_4 < uVar4) && (param_3 != (undefined2 *)0x0)) {
      *param_4 = (ushort)uVar4;
      uVar2 = 0xffffffffc00d36b1;
    }
    else {
      *param_4 = (ushort)uVar4;
      if (iVar1 == 0) {
        if (param_3 != (undefined2 *)0x0) {
          *param_3 = 0;
        }
      }
      else if (param_3 != (undefined2 *)0x0) {
        fn_82F68CC0(param_3,iVar1,uVar4 << 1);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

