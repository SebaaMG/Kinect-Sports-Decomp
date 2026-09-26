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
extern unsigned int uStack_14;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_1e;


ulonglong fn_82A2C868(ulonglong param_1)

{
  ushort uVar1;
  char cVar2;
  ulonglong auStack_30 [2];
  short sStack_20;
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  undefined2 uStack_14;
  
  uVar1 = (ushort)(param_1 >> 0x10);
  uStack_1e = uVar1 >> 5 & 0xf;
  uStack_1c = uVar1 & 0x1f;
  uStack_16 = (ushort)((param_1 & 0xffffffff) << 1) & 0x3e;
  uStack_1a = (ushort)((param_1 & 0xffffffff) >> 0xb) & 0x1f;
  uStack_18 = (ushort)((param_1 & 0xffffffff) >> 5) & 0x3f;
  sStack_20 = (uVar1 >> 9) + 0x7bc;
  uStack_14 = 0;
  cVar2 = RtlTimeFieldsToTime(&sStack_20,auStack_30);
  return -(ulonglong)(cVar2 != '\0') & auStack_30[0];
}

