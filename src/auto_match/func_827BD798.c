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
extern int fn_827BCA70();
extern int fn_827BCC18();
extern int fn_827BCEC0();


void fn_827BD798(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  iVar1 = param_1[0x65];
  uVar2 = *(int *)(param_1[1] + 0x30) - 0x14;
  if ((int)uVar2 < (int)param_3) {
    param_3 = uVar2;
  }
  if (param_3 == 0) {
    pcVar3 = fn_827BCEC0;
    if ((param_2 == 0xe0) || (param_2 == 0xee)) {
      pcVar3 = fn_827BCA70;
    }
  }
  else {
    pcVar3 = fn_827BCC18;
    if (param_2 == 0xe0) {
      if (param_3 < 0xe) {
        param_3 = 0xe;
      }
      goto code_r0x827bd838;
    }
    if (param_2 == 0xee) {
      if (0xb < param_3) goto code_r0x827bd838;
      param_3 = 0xc;
    }
  }
  if (param_2 == 0xfe) {
    *(code **)(iVar1 + 0x18) = pcVar3;
    *(uint *)(iVar1 + 0x5c) = param_3;
    return;
  }
  if ((param_2 < 0xe0) || (0xef < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x44;
    *(int *)(*param_1 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x827bd874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
code_r0x827bd838:
  *(code **)((param_2 + -0xd9) * 4 + iVar1) = pcVar3;
  *(uint *)((param_2 + -200) * 4 + iVar1) = param_3;
  return;
}

