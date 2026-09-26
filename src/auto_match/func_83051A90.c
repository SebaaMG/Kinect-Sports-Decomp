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
extern int fn_830514A8();
extern int fn_83055E98();


char fn_83051A90(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x31) & 0x80) == 0) {
    RtlEnterCriticalSection(param_1 + -0x40);
    uVar1 = *(uint *)(param_1 + -4);
    *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 0x80;
    if (((uVar1 & 0x10000000) != 0) || (iVar2 = 1, (uVar1 & 0x8000000) != 0)) {
      iVar2 = 0;
    }
    *(uint *)(param_1 + -4) = iVar2 << 0x18 | uVar1 & 0xfeffffff;
    fn_830514A8();
    RtlLeaveCriticalSection(param_1 + -0x40);
    lVar3 = (ulonglong)*(uint *)(param_1 + -0x18) + 0x10;
    RtlEnterCriticalSection(lVar3);
    fn_83055E98(*(undefined4 *)(param_1 + -0x18));
    RtlLeaveCriticalSection(lVar3);
    *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(*(int *)(param_1 + -0x18) + 0x50);
  }
  return ((*(byte *)(param_1 + 0x31) & 0x40) != 0) + '\x01';
}

