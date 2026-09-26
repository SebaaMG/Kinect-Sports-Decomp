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
extern int fn_8267C0B8();
extern unsigned int lbl_831E7E60;


undefined4 * fn_8267C2D8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)lbl_831E7E60;
  RtlEnterCriticalSection(uVar3 + 0x2c4);
  puVar2 = (undefined4 *)fn_8267C0B8(lbl_831E7E60,param_2,param_1,param_3);
  if (puVar2 != (undefined4 *)0x0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  RtlLeaveCriticalSection(uVar3 + 0x2c4);
  if (puVar2 != (undefined4 *)0x0) {
    RtlEnterCriticalSection(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    puVar2[1] = param_1 + 0x40;
    *puVar2 = uVar1;
    *(undefined4 **)(*(int *)(param_1 + 0x40) + 4) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2;
    RtlLeaveCriticalSection(param_1 + 0x48);
  }
  return puVar2;
}

