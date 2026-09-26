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
extern int fn_8301B2D0();


void fn_8300EE60(undefined4 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != (code *)0x0) {
    RtlEnterCriticalSection(param_1 + 3);
    for (puVar2 = (uint *)*param_1;
        (puVar2 != (uint *)param_1[1] && ((ulonglong)*puVar2 != (param_6 & 0xffffffff)));
        puVar2 = puVar2 + 3) {
    }
    puVar2 = (uint *)(-(uint)((uint *)param_1[1] != puVar2) & (uint)(puVar2 + 1));
    if (puVar2 != (uint *)0x0) {
      uVar1 = puVar2[1];
      if (*puVar2 < 2) {
        fn_8301B2D0(param_1,param_6);
      }
      else {
        *puVar2 = *puVar2 - 1;
        if (uVar1 != 0) {
          puVar2[1] = uVar1 - 1;
        }
      }
      if (uVar1 == 0) {
        (*param_2)(param_3,param_4,param_5,param_6);
      }
    }
    RtlLeaveCriticalSection(param_1 + 3);
  }
  return;
}

