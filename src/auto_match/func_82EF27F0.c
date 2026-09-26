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
extern int fn_82EF1D58();
extern int fn_82F68CC0();
extern unsigned int iStack_48;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


undefined8
fn_82EF27F0(int param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined2 *param_6,uint *param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_48;
  uint uStack_44;
  
  if ((param_7 == (uint *)0x0) ||
     (((*param_7 != 0 && (param_6 == (undefined2 *)0x0)) ||
      ((ulonglong)*(uint *)(param_1 + 0x3b8) <= (param_2 & 0xffffffff))))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82EF1D58(param_1 + 0x50,param_2,aiStack_70);
    puVar2 = &uStack_68;
    lVar4 = 5;
    puVar3 = (undefined8 *)(aiStack_70[0] + -8);
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = uStack_60;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = uStack_58;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = uStack_50;
    }
    if ((*param_7 < uStack_44) && (param_6 != (undefined2 *)0x0)) {
      *param_7 = uStack_44;
      uVar1 = 0xffffffffc00d36b1;
    }
    else {
      *param_7 = uStack_44;
      if (iStack_48 == 0) {
        if (param_6 != (undefined2 *)0x0) {
          *param_6 = 0;
        }
      }
      else if (param_6 != (undefined2 *)0x0) {
        fn_82F68CC0(param_6,iStack_48,uStack_44 << 1);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

