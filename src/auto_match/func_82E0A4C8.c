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
extern int fn_82CEA220();
extern int fn_82CEA280();
extern int fn_82CEA358();
extern int fn_82D00450();


void fn_82E0A4C8(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  
  iVar4 = param_1 + 0x10;
  uVar1 = fn_82CEA280(iVar4,param_2,0);
  if ((uVar1 & 0xffffffff) != 0) {
    iVar3 = fn_82D00450(param_1 + 0x1c,uVar1,0);
    if (*(code **)(iVar3 + 8) != (code *)0x0) {
      (**(code **)(iVar3 + 8))(param_2);
    }
    if ((ulonglong)*(uint *)(param_1 + 8) == (param_2 & 0xffffffff)) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar2 = fn_82CEA220(iVar4,param_2);
    fn_82CEA358(iVar4,uVar2);
  }
  return;
}

