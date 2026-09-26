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
extern unsigned int iStack00000020;
extern unsigned int uStack00000024;


void fn_82FF2248(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iStack00000020;
  uint uStack00000024;
  
  piVar1 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  *param_1 = (int)piVar1;
  if (piVar1 == piVar2) {
    return;
  }
  uStack00000024 = (uint)param_3;
  iStack00000020 = (int)((ulonglong)param_3 >> 0x20);
  while( true ) {
    piVar1 = (int *)*param_1;
    if ((*piVar1 != iStack00000020) ||
       (bVar3 = true, ((piVar1[1] ^ uStack00000024) & 0x80000000) != 0)) {
      bVar3 = false;
    }
    if (bVar3) break;
    *param_1 = (int)(piVar1 + 3);
    if (piVar1 + 3 == piVar2) {
      return;
    }
  }
  return;
}

