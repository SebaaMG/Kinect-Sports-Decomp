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
extern int fn_82270B70();
extern int fn_82F64988();


void fn_8226FEA8(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_82270B70();
  puVar4 = *(undefined4 **)(iVar1 + 0xa8);
  puVar3 = (undefined4 *)*puVar4;
  while( true ) {
    if (puVar4 == puVar3) {
      return;
    }
    puVar4 = (undefined4 *)puVar4[1];
    if (param_1 == 0) {
      iVar2 = puVar4[0x42d];
    }
    else {
      iVar2 = param_1 - puVar4[2];
    }
    if (iVar2 == 0) break;
    puVar3 = (undefined4 *)**(undefined4 **)(iVar1 + 0xa8);
  }
  puVar3 = puVar4 + 0xd;
  if (param_3 == 0) {
    puVar3 = puVar4 + 0x20d;
  }
  fn_82F64988(puVar3,0x400,param_2);
  *(undefined4 *)(iVar1 + 0x94) = 1;
  return;
}

