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


undefined4 * fn_82A1FEB8(int *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1];
  trapWord(6,(ulonglong)uVar1,0);
  uVar3 = (((((param_2 & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >>
          8 ^ param_2;
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  puVar2 = *(undefined4 **)
            ((int)((uVar3 - (longlong)(int)((uVar3 & 0xffffffff) / (ulonglong)uVar1) *
                            (longlong)(int)uVar1 & 0xffffffff) << 2) + *param_1);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      if (param_1[0xd] != 0) {
        RtlLeaveCriticalSection(param_1 + 6);
      }
      return (undefined4 *)0x0;
    }
    if ((ulonglong)(uint)puVar2[1] == (param_2 & 0xffffffff)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (param_1[0xe] != 0) {
    puVar2[2] = puVar2[2] + 1;
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  if (param_1[0xe] != 0) {
    return puVar2 + 3;
  }
  return puVar2 + 2;
}

