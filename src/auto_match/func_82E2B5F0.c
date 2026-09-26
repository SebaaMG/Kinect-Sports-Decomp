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
extern int fn_82E2AC98();


undefined8 fn_82E2B5F0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  psVar2 = (short *)fn_82E2AC98(param_1,param_2);
  if (psVar2 == (short *)0x0) {
    uVar3 = 0xffffffffc00d36e6;
  }
  else if (*psVar2 == 0x48) {
    puVar1 = *(undefined4 **)(psVar2 + 4);
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    param_3[3] = puVar1[3];
  }
  else {
    uVar3 = 0xffffffffc00d36bd;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar3;
}

