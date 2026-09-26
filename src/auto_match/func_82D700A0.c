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
extern unsigned int iStack00000018;


int * fn_82D700A0(undefined4 *param_1,ulonglong param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iStack00000018;
  
  param_1 = (undefined4 *)*param_1;
  iStack00000018 = (int)(param_2 >> 0x20);
  piVar1 = (int *)*param_1;
  do {
    piVar3 = piVar1 + 4;
    do {
      switch(*(undefined1 *)piVar3) {
      case 0:
        goto switchD_82d700e4_caseD_0;
      case 1:
        return (int *)0x0;
      case 2:
      case 3:
      case 6:
      case 10:
      case 0xb:
      case 0xe:
        piVar4 = piVar3 + 4;
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        piVar4 = piVar3 + 8;
        break;
      default:
        goto switchD_82d700e4_caseD_7;
      }
      if (((ulonglong)(uint)piVar3[2] != (param_2 & 0xffffffff)) ||
         (bVar2 = true, piVar3[1] != iStack00000018)) {
        bVar2 = false;
      }
      if (bVar2) {
        *param_3 = piVar4;
        return piVar3;
      }
switchD_82d700e4_caseD_0:
      piVar3 = (int *)((uint)(byte)*piVar3 + (int)piVar3);
switchD_82d700e4_caseD_7:;} while (piVar3 < (int *)((int)piVar1 + *piVar1 + 0x10));
    param_1 = param_1 + 1;
    piVar1 = (int *)*param_1;
  } while( true );
}

