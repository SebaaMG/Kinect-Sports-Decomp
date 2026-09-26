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
extern int fn_82A1E6A0();
extern int fn_82E3E788();
extern int fn_82E50BE8();
extern int fn_82EEA560();
extern unsigned int lbl_82152F10;
extern unsigned int lbl_8216000C;


undefined4 * fn_82EEA950(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar1;
  
  fn_82EEA560();
  param_1[0x1c] = 0;
  *param_1 = &lbl_8216000C;
  puVar2 = (undefined4 *)fn_82E50BE8(0x6c,0,0,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &lbl_82152F10;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x19] = 0;
  }
  param_1[0x14] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  else {
    RtlInitializeCriticalSection(param_1 + 0x15);
    iVar3 = fn_82E3E788(param_1[0x14],0x20,0);
    if (iVar3 < 0) {
      *param_2 = iVar3;
      return param_1;
    }
    iVar3 = fn_82A1E6A0(0,1,0,0);
    param_1[0x1c] = iVar3;
    if (iVar3 != 0) {
      return param_1;
    }
    uVar1 = thunk_FUN_82a2b798();
    if (0 < (longlong)uVar1) {
      uVar1 = uVar1 & 0xffff | 0x80070000;
    }
    iVar3 = (int)uVar1;
    if (-1 < iVar3) {
      iVar3 = -0x7fff0001;
    }
  }
  *param_2 = iVar3;
  return param_1;
}

