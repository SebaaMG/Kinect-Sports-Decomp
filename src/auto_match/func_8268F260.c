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
extern int fn_8268E938();
extern int fn_8268F148();


uint fn_8268F260(uint *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    param_2 = uVar3;
  }
  if (param_3 < uVar3) {
    param_3 = uVar3;
  }
  uVar4 = param_3 - 1;
  uVar3 = (param_2 + param_3) - 1 & ~uVar4;
  iVar1 = fn_8268F148(param_1,uVar3 >> (*param_1 & 0x3f),uVar4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar4 + iVar1 & ~uVar4;
    for (uVar2 = uVar4 - iVar1; (uVar2 != 0 && (uVar2 < 0x40)); uVar2 = param_3 + uVar2) {
      uVar4 = param_3 + uVar4;
    }
    *param_4 = *(undefined4 *)(iVar1 + 0x20);
    fn_8268E938(param_1,iVar1,uVar4,uVar3);
  }
  return uVar4;
}

