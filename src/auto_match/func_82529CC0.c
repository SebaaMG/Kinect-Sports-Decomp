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
extern int fn_82587B68();


void fn_82529CC0(undefined8 param_1,ulonglong param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    iVar2 = fn_82587B68(param_2);
    iVar2 = (**(code **)(iVar2 + 8))();
    pcVar1 = *(code **)(iVar2 + 8);
    if ((pcVar1 != (code *)0x0) && (param_3 != pcVar1)) {
      (*pcVar1)(param_1);
    }
    iVar3 = fn_82587B68(param_2);
    param_2 = (ulonglong)*(uint *)(iVar3 + 4);
    if (*(uint *)(iVar3 + 4) == 0) break;
    param_3 = *(code **)(iVar2 + 8);
  }
  return;
}

