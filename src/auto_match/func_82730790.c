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
extern unsigned int *auStack_20;
extern int fn_8267BED0();
extern int fn_826824B0();
extern int fn_82728680();


int fn_82730790(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 auStack_20 [2];
  
  if (param_1[0x3a] == 0) {
    auStack_20[0] = 0x143;
    lVar1 = fn_8267BED0(param_1,0x38,auStack_20);
    if (lVar1 == 0) {
      iVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
      iVar3 = fn_82728680(lVar1,uVar2,param_1);
    }
    if (param_1[0x3a] != 0) {
      fn_826824B0();
    }
    param_1[0x3a] = iVar3;
  }
  return param_1[0x3a];
}

