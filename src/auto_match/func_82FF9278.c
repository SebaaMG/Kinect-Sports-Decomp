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
extern int fn_82F68B68();


void fn_82FF9278(longlong param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar2 = 0xffffffffffffffff;
  uVar3 = 0;
  if (uVar1 < 8) {
    if (uVar1 == 1) {
code_r0x82ff92b4:
      uVar2 = (ulonglong)param_2[5];
code_r0x82ff92b8:
      uVar3 = param_2[4];
      goto code_r0x82ff92d8;
    }
    if ((uVar1 != 2) && (uVar1 != 3)) {
      if (uVar1 == 4) goto code_r0x82ff92d8;
      if (uVar1 != 5) {
        if ((uVar1 != 6) && (uVar1 == 0)) goto code_r0x82ff92b4;
        goto code_r0x82ff92b8;
      }
    }
  }
  if (param_2[4] == 1) {
    uVar3 = param_2[5];
  }
  else {
    uVar3 = 0;
  }
code_r0x82ff92d8:
  fn_82F68B68(param_1 + 0x4a4,param_2[1],uVar3,param_3,uVar2,param_2[2]);
  return;
}

