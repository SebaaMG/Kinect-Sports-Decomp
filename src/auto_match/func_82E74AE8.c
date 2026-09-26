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
extern int fn_82E73A90();
extern int fn_82E74818();
extern unsigned int uStack_28;


longlong fn_82E74AE8(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  while (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = fn_82E74818(param_1,0,1);
    if (lVar1 < 0) {
      return lVar1;
    }
  }
  uStack_28 = 0;
  lVar1 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x28))(*(int **)(param_1 + 0x1d8),auStack_30);
  if (lVar1 < 0) {
    return lVar1;
  }
  if ((((U64)(uStack_28) >> 16) & 0xFFFF) == 0) {
    return lVar1;
  }
  uVar2 = 0;
  uVar3 = (ulonglong)*(uint *)(*(int *)(param_1 + 0xc) + 0x68);
  if (uVar3 != 0) {
    trapWord(6,uVar3,0);
    uVar2 = ((longlong)*(int *)(param_1 + 4) * 80000000 & 0xffffffffU) / uVar3;
  }
  fn_82E73A90(param_1,uVar2);
  return lVar1;
}

