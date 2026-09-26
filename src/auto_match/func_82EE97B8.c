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


undefined8 fn_82EE97B8(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  RtlEnterCriticalSection(param_1 + 0x50);
  puVar1 = (uint *)(-(uint)(param_1 + 0x109cU != *(uint *)(param_1 + 0x109c)) &
                   *(uint *)(param_1 + 0x109c));
  if (puVar1 != (uint *)0x0) {
    do {
      puVar2 = (uint *)(-(uint)(param_1 + 0x109cU != *puVar1) & *puVar1);
      if (puVar1[4] == param_2) {
        puVar1[5] = 1;
        break;
      }
      puVar1 = puVar2;
    } while (puVar2 != (uint *)0x0);
  }
  RtlLeaveCriticalSection(param_1 + 0x50);
  return 0;
}

