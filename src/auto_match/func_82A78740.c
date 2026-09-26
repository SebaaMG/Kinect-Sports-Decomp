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
extern int fn_82A49B60();
extern int fn_82A77548();
extern int fn_82A77D58();
extern int fn_82A77E00();
extern int fn_82A77FA8();


ulonglong fn_82A78740(int param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  uVar3 = 0;
  auStack_30[0] = 0;
  uVar2 = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x214);
  }
  else {
    do {
      if ((*(int *)(param_1 + 0xb8) == 0) && (fn_82A77D58(param_1), *(int *)(param_1 + 0xb8) == 0)
         ) {
        if ((uVar3 & 0xffffffff) == 0) {
          uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0x214);
          uVar3 = uVar2;
        }
        fn_82A49B60(uVar3,param_2,*(undefined4 *)(param_1 + 0x78));
        break;
      }
      if (*(int *)(param_1 + 0xc0) == 0) {
        lVar1 = fn_82A77E00(param_1,param_2,auStack_30);
      }
      else {
        lVar1 = fn_82A77FA8();
      }
      if (uVar2 == 0) {
        uVar2 = (ulonglong)auStack_30[0];
      }
      uVar3 = lVar1 + (ulonglong)auStack_30[0];
      param_2 = param_2 - lVar1;
      auStack_30[0] = (uint)uVar3;
    } while (param_2 != 0);
  }
  fn_82A77548(param_1);
  return uVar2;
}

