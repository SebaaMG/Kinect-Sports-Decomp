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
extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_82836098();
extern int fn_82F64020();
extern int fn_82F68CC0();
extern int fn_82F69A80();


void fn_82836840(int param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_140 [320];
  
  uVar1 = fn_828358A8(*(undefined4 *)(param_1 + 8));
  lVar2 = fn_82F64020(param_3,0x100,0xffffffff8201f434,uVar1,
                            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10));
  uVar4 = 0;
  uVar3 = (ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != 0) {
    lVar2 = lVar2 + param_3;
    do {
      fn_82836098(*(undefined4 *)(param_1 + 8),param_2,auStack_140);
      fn_82F68CC0(lVar2,auStack_140,uVar3);
      uVar4 = uVar4 + 1;
      param_2 = param_2 + uVar3;
      lVar2 = lVar2 + uVar3;
    } while (uVar4 < *(uint *)(*(int *)(param_1 + 0x10) + 0x10));
  }
  fn_82F69A80(param_3,0x100,0xffffffff8201f440);
  return;
}

