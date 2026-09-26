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
extern int fn_8289EEE0();
extern int fn_828A31C0();
extern int fn_828AECC0();
extern int fn_828B0488();
extern int fn_828B0528();
extern int fn_828B1468();
extern int fn_82A4AAA8();


void fn_828D8EF8(int param_1)

{
  char cVar5;
  ulonglong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  cVar5 = fn_828B0528(*(undefined4 *)(param_1 + 0x14));
  if (cVar5 == '\0') {
    fn_828B1468(param_1,7);
  }
  else {
    uVar1 = fn_828B0488(param_1);
    if ((uVar1 & 0xffffffff) == 0) {
      fn_828B1468(param_1,7);
    }
    else {
      piVar2 = (int *)fn_8289EEE0(*(undefined4 *)(param_1 + 0x14));
      fn_828A31C0(*(undefined4 *)(param_1 + 0x14),piVar2,uVar1);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
      iVar4 = fn_82A4AAA8();
      if (iVar4 != 2) {
        fn_828AECC0(puVar3,2);
      }
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      fn_828B1468(param_1,2);
    }
  }
  return;
}

