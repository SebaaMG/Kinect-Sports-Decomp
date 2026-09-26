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
extern int fn_8262F658();


void fn_82ABE5F8(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  
  if (0x84 < param_3) {
    puVar2 = (uint *)((uint)(param_2 + -3) & 0xfffffffe);
    *(uint *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(uint *)(*puVar2 & 0xfffffffe) = puVar2[1];
    pcVar3 = (code *)fn_8262F658();
    (*pcVar3)(param_2 + -3,0x618d0000);
    return;
  }
  iVar1 = ((param_3 >> 2) - 1) * 4;
  *param_2 = *(undefined4 *)(iVar1 + param_1 + 0x32c);
  *(undefined4 **)(iVar1 + param_1 + 0x32c) = param_2;
  return;
}

