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


undefined8 fn_82E2BCD8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  short *psVar3;
  undefined8 uVar2;
  
  *param_4 = 0;
  RtlEnterCriticalSection(param_1 + 4);
  psVar3 = (short *)fn_82E2AC98(param_1 + -4,param_2);
  if (psVar3 == (short *)0x0) {
    uVar2 = 0xffffffffc00d36e6;
  }
  else if ((*psVar3 == 0xd) && (puVar1 = *(undefined4 **)(psVar3 + 4), puVar1 != (undefined4 *)0x0))
  {
    uVar2 = (**(code **)*puVar1)(puVar1,param_3,param_4);
  }
  else {
    uVar2 = 0xffffffffc00d36bd;
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return uVar2;
}

