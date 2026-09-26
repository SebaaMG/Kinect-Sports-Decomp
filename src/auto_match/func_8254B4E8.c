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
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();


void fn_8254B4E8(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  
  puVar3 = param_1 + 0x68;
  iVar1 = fn_825529B0(puVar3);
  if (iVar1 != 0) {
    puVar2 = param_1 + 0x6c;
    if (puVar2 == (uint *)0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = *puVar2 != 0;
    }
    if (bVar4) {
      fn_82552720((ulonglong)*param_1 + 0x84c,puVar3,puVar2,0,4,0,0);
    }
    else {
      iVar1 = fn_825529B0(puVar3);
      if (iVar1 != 0) {
        fn_82552B50(puVar3,1);
      }
    }
  }
  return;
}

