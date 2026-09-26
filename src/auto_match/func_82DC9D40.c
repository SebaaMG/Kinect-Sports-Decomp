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
extern int fn_82CEAA40();


undefined1 * fn_82DC9D40(undefined1 *param_1,longlong param_2,int param_3,int param_4)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined1 auStack_20 [16];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar4 = (ulonglong)param_3;
    uVar3 = (ulonglong)param_4;
    if (uVar4 < uVar3) {
      lVar2 = (uVar4 << 0x20) + uVar3;
    }
    else {
      lVar2 = (uVar3 << 0x20) + uVar4;
    }
    pcVar1 = (char *)fn_82CEAA40(auStack_20,param_2 + 0x30,lVar2);
    if (*pcVar1 != '\0') {
      uVar5 = 0;
      goto code_r0x82dc9db4;
    }
  }
  uVar5 = 1;
code_r0x82dc9db4:
  *param_1 = uVar5;
  return param_1;
}

