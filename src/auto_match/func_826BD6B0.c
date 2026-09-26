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
extern int fn_826BD078();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


int fn_826BD6B0(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar4;
  longlong lVar3;
  undefined4 uStack0000001c;
  
  lVar3 = param_1;
  uStack0000001c = param_2;
  if ((int)param_3 == -1) {
    while( true ) {
      uVar1 = fn_826BD078(&stack0x0000001c);
      puVar4 = (undefined2 *)lVar3;
      iVar2 = (int)param_1;
      if (uVar1 == 0) break;
      if (0xfffe < uVar1) {
        uVar1 = 0xfffd;
      }
      *puVar4 = (short)uVar1;
      lVar3 = lVar3 + 2;
    }
  }
  else {
    while( true ) {
      puVar4 = (undefined2 *)lVar3;
      iVar2 = (int)param_1;
      if ((int)param_3 < 1) break;
      uVar1 = fn_826BD078(&stack0x0000001c);
      puVar4 = (undefined2 *)lVar3;
      iVar2 = (int)param_1;
      param_3 = param_3 + -1;
      if (uVar1 == 0) break;
      if (0xfffe < uVar1) {
        uVar1 = 0xfffd;
      }
      *puVar4 = (short)uVar1;
      lVar3 = lVar3 + 2;
    }
  }
  *puVar4 = 0;
  return (int)puVar4 - iVar2 >> 1;
}

