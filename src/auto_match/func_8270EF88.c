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
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826A7398();
extern int fn_826F77A0();


void fn_8270EF88(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar3 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    dVar5 = (double)fn_826972E0(uVar4,uVar1);
    if ((((ulonglong)dVar5 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (bVar2 = true, ((ulonglong)dVar5 & 0xfffffffffffff) == 0)) {
      bVar2 = false;
    }
    if (!bVar2) {
      fn_826F77A0(uVar3,(int)dVar5);
    }
  }
  return;
}

