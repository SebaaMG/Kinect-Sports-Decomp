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
extern unsigned int lbl_83261840;
extern unsigned int uRam83261848;
extern unsigned int uRam8326184c;
extern unsigned int uRam83261850;
extern unsigned int uRam83261854;
extern unsigned int uRam83261858;
extern unsigned int uRam8326185c;
extern unsigned int uRam83261860;
extern unsigned int uRam83261864;
extern unsigned int uRam83261868;
extern unsigned int uRam8326186c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4D480(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  *param_2 = lbl_83261840;
  *(undefined4 *)(param_2 + 1) = uRam83261848;
  *(undefined4 *)((int)param_2 + 0xc) = uRam8326184c;
  uVar4 = uRam8326185c;
  uVar3 = uRam83261858;
  uVar2 = uRam83261854;
  puVar1 = (undefined4 *)((uint)(param_2 + 2) & 0xfffffff0);
  *puVar1 = uRam83261850;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar4 = uRam8326186c;
  uVar3 = uRam83261868;
  uVar2 = uRam83261864;
  puVar1 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  *puVar1 = uRam83261860;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

