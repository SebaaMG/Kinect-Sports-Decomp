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
extern int fn_8245B458();
extern int fn_82A1EFC0();


void fn_8245AAA8(int param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = *(code **)(param_1 + 0x80080);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined1 *)(param_1 + 0xf),*(undefined4 *)(param_1 + 0x80084),param_2);
    *(undefined4 *)(param_1 + 0x80080) = 0;
  }
  *(undefined4 *)(param_1 + 0x80070) = 0;
  iVar3 = param_1 + 0x8008c;
  *(undefined4 *)(param_1 + 0x8006c) = 0;
  *(undefined4 *)(param_1 + 0x80068) = 0;
  RtlEnterCriticalSection(iVar3);
  *(undefined4 *)(param_1 + 0x800bc) = 0;
  iVar2 = fn_8245B458();
  RtlEnterCriticalSection();
  *(undefined4 *)(iVar2 + 0x58c) = 0;
  RtlLeaveCriticalSection(iVar2);
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0xc,0,0x8005a);
}

