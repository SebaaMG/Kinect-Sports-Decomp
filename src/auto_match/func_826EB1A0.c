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
extern int fn_826EB0C0();


undefined8 fn_826EB1A0(undefined8 param_1,int *param_2)

{
  char cVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_20 [2];
  
  if ((param_2 != (int *)0x0) && (cVar3 = (**(code **)(*param_2 + 0xc))(param_2), cVar3 != '\0')) {
    auStack_20[0] = 2;
    uVar1 = fn_8267BED0(param_1,0x1f8,auStack_20);
    if ((uVar1 & 0xffffffff) != 0) {
      uVar2 = fn_826EB0C0(uVar1,param_2);
      return uVar2;
    }
  }
  return 0;
}

