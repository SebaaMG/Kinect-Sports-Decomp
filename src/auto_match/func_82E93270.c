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
extern unsigned int lbl_831A97C0;
extern unsigned int lbl_831A97C8;
extern unsigned int lbl_831A97D0;


void fn_82E93270(int param_1,int param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  if (*(int *)(param_1 + 4) == 7) {
    *(int *)(param_1 + 0x7870) = param_2;
    *(int *)(param_1 + 0x7880) = param_3;
    dVar1 = (double)(longlong)param_3;
    dVar2 = (double)(longlong)param_2;
    *(uint *)(param_1 + 0x7874) = (int)(dVar2 * lbl_831A97C0) + 0xfU & 0xfffffff0;
    *(uint *)(param_1 + 0x7884) = (int)(dVar1 * lbl_831A97C0) + 0xfU & 0xfffffff0;
    *(uint *)(param_1 + 0x7878) = (int)(dVar2 * lbl_831A97C8) + 0xfU & 0xfffffff0;
    *(uint *)(param_1 + 0x7888) = (int)(dVar1 * lbl_831A97C8) + 0xfU & 0xfffffff0;
    *(uint *)(param_1 + 0x787c) = (int)(dVar2 * lbl_831A97D0) + 0xfU & 0xfffffff0;
    *(uint *)(param_1 + 0x788c) = (int)(dVar1 * lbl_831A97D0) + 0xfU & 0xfffffff0;
    return;
  }
  *(undefined8 *)(param_1 + 0x7870) = 0;
  *(undefined8 *)(param_1 + 0x7878) = 0;
  *(undefined8 *)(param_1 + 0x7880) = 0;
  *(undefined8 *)(param_1 + 0x7888) = 0;
  return;
}

