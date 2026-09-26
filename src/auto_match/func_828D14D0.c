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
extern unsigned int *auStack_30;
extern int fn_828D0EF0();
extern int fn_828D13D0();
extern int fn_82A1E740();
extern int fn_82F68CC0();


void fn_828D14D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  uint auStack_30 [12];
  
  if ((*(char *)(param_1 + 0x3c) != '\x01') && (*(int *)(param_1 + 0x1c) != 0x3e5)) {
    auStack_30[0] = 0;
    iVar2 = fn_82A1E740(param_1 + 0x1c,auStack_30,1);
    if (iVar2 == 0) {
      uVar3 = (ulonglong)auStack_30[0];
      if (uVar3 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        fn_828D13D0(param_1 + 0x4c);
        fn_82F68CC0(*(undefined4 *)(param_1 + 0x4c),uVar1,uVar3 * 0xc4);
      }
    }
    else if (iVar2 == 0x3e5) {
      return;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
    fn_828D0EF0(param_1);
  }
  return;
}

