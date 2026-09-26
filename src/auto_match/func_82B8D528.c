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
extern int fn_82B8B280();
extern int fn_82B8BCB0();


ulonglong fn_82B8D528(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar3;
  ulonglong uVar2;
  bool bVar4;
  
  uVar1 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if (uVar1 != 0x70) {
    if ((uVar1 == 0x7d) || (bVar4 = false, uVar1 == 0x7c)) {
      bVar4 = true;
    }
    if ((!bVar4) && (uVar1 != 0x71)) {
      cVar3 = fn_82B8BCB0(param_3,param_1,param_2,1);
      return (ulonglong)(cVar3 == '\0');
    }
  }
  uVar2 = fn_82B8B280(param_1,param_2,0,1);
  return uVar2;
}

