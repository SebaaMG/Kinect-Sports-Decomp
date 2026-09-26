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
extern int fn_827F3C20();
extern int fn_827F4058();
extern int fn_827F4068();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;


void fn_827F0670(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  piVar1 = (int *)param_2;
  if (*(char *)(piVar1 + 0x62) == '\0') {
    (**(code **)(*piVar1 + 4))((double)lbl_821AAD20);
  }
  lVar3 = (ulonglong)*(ushort *)((int)piVar1 + 0xe2) - 1;
  if (-1 < lVar3) {
    lVar2 = ((ulonglong)*(ushort *)((int)piVar1 + 0xe2) + 8) * 4 + param_2;
    do {
      lVar2 = lVar2 + -4;
      (**(code **)(*(int *)piVar1[*(ushort *)lVar2 + 0x28] + 8))(param_1);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  if (piVar1[0x3c] == 0xffff) {
    fn_827F4058();
  }
  else {
    lVar3 = fn_827F3C20(param_2);
    lVar2 = fn_827F3C20(piVar1[piVar1[0x3c] + 0x28]);
    fn_82F68CC0(lVar3 + 0x34,lVar2 + 0x34,0x20);
    fn_827F4068(param_2);
  }
  return;
}

