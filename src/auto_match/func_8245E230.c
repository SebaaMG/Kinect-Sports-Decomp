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
extern int fn_82A1E108();
extern int fn_82A1E740();
extern int fn_82E23118();
extern unsigned int lbl_83276598;


undefined8 fn_8245E230(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_30 [48];
  
  iVar3 = param_1 + 0xe4;
  RtlEnterCriticalSection(iVar3);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = 0x15;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
    lbl_83276598 = 0;
    fn_82E23118(param_1 + 4);
    while (iVar1 = fn_82A1E740(param_1 + 0x5c,auStack_30,0), iVar1 != 0) {
      fn_82A1E108(1);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x60);
  }
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3);
  }
  return uVar2;
}

