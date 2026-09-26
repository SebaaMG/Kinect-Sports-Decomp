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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82930FC0();
extern int fn_82981050();


int fn_82981360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_829304E0(uVar1,0,0,0xffffffff8204e074);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x34);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82930FC0(uVar1,6,param_2,param_3,param_4,0);
    }
    if ((uVar1 & 0xffffffff) != 0) {
      *(int *)(iVar2 + 8) = (int)uVar1;
      iVar3 = fn_82981050(param_1,uVar1,1);
      if (-1 < iVar3) {
        return iVar2;
      }
    }
  }
  return 0;
}

