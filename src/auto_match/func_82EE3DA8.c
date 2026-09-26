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
extern unsigned int *auStack_30;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82EE32F8();
extern int fn_82EE3730();
extern int fn_82EE39D8();
extern unsigned int uStack_2e;


undefined8 fn_82EE3DA8(int param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  undefined1 auStack_30 [2];
  undefined2 uStack_2e;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (undefined2 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0xffff;
    iVar3 = fn_82E50BE8(0x104,0,0,0,0);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82EE39D8();
    }
    if ((uVar2 & 0xffffffff) != 0) {
      iVar3 = fn_82EE32F8(param_1 + 0x48,uVar2,auStack_30);
      if (iVar3 != 0) {
        *param_2 = uStack_2e;
        return 0;
      }
      fn_82EE3730(uVar2);
      fn_82E4FE40(uVar2);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

