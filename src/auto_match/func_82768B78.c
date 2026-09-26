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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined2 fn_82768B78(int param_1)

{
  undefined8 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _uStack_20 = CONCAT44(lbl_821AAD20,lbl_821AAD20);
  uStack_18 = lbl_821AAD20;
  uStack_14 = lbl_821AAD20;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
  if ((int)uVar1 == -1) {
    uStack_1c = ((((U64)(uStack_1c)) & (~(((U64)0xFFFF) << 16))) | ((((U64)(0)) & ((U64)0xFFFF)) << 16));
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x30))(*(int **)(param_1 + 0xc),uVar1,&uStack_20);
    uStack_1c = ((((U64)(uStack_1c)) & (~(((U64)0xFFFF) << 16))) | ((((U64)((undefined2)(longlong)-uStack_1c)) & ((U64)0xFFFF)) << 16));
  }
  return (((U64)(uStack_1c) >> 16) & 0xFFFF);
}

