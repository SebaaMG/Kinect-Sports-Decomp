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
extern int fn_828647C0();
extern int fn_82877A00();


undefined8 fn_82877B20(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar4;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  for (uVar5 = (ulonglong)*(uint *)(param_2 + 4); (uVar5 & 0xffffffff) != (ulonglong)uVar1;
      uVar5 = uVar5 + 0x30) {
    cVar4 = fn_828647C0(uVar5 + 4,param_3);
    if (cVar4 != '\0') break;
  }
  if ((uVar5 & 0xffffffff) == (ulonglong)*(uint *)(param_2 + 8)) {
    uVar2 = 0xffffffffa0320000;
  }
  else {
    iVar3 = fn_82877A00(param_1,uVar5);
    uVar2 = 0xffffffffa0320000;
    if (-1 < iVar3) {
      uVar2 = 0x20320000;
    }
  }
  return uVar2;
}

