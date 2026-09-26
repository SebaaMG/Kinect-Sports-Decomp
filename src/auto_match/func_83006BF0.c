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
extern int fn_830069B8();


undefined4 fn_83006BF0(int param_1,ulonglong param_2)

{
  bool bVar1;
  char cVar3;
  undefined4 uVar2;
  
  cVar3 = fn_830069B8();
  if ((cVar3 == '\0') || (3 < (param_2 & 0xffffffff))) {
    uVar2 = 0;
  }
  else {
    bVar1 = (int)param_2 != 0;
    if (param_2 == 1 && bVar1) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
    }
    else if (param_2 == 2 && bVar1) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x18);
    }
    else if (bVar1) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20);
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
    }
  }
  return uVar2;
}

