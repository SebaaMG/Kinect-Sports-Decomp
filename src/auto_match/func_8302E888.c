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
extern int fn_8302E258();
extern int fn_8302E350();
extern int fn_83032B40();
extern int fn_83032D88();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;
extern unsigned int uStack_23;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_8302E888(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  int iStack_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_1 + 0x122) = 1;
  if ((*(byte *)(param_1 + 0x11f) & 2) == 0) {
    uVar3 = fn_8302E258(param_1,param_2);
  }
  else if (*param_2 == 0) {
    puStack_28 = &uStack_40;
    param_2[1] = param_1;
    *param_2 = 1;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    uStack_23 = 0;
    iStack_20 = 0;
    uStack_1c = 0;
    iVar4 = fn_83032B40();
    iVar2 = iStack_20;
    bVar1 = iStack_20 != 0;
    iStack_20 = iVar4;
    if (bVar1) {
      fn_83032D88(iVar2);
    }
    if (iStack_20 == 0) {
      uVar3 = 2;
    }
    else {
      param_2[0x1e] = (int)&uStack_30;
      uVar3 = fn_8302E350(param_1,param_2);
      if (iStack_20 != 0) {
        fn_83032D88(iStack_20);
      }
    }
  }
  else {
    uVar3 = fn_8302E350(param_1,param_2);
  }
  return uVar3;
}

