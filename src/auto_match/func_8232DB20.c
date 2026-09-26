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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8232DB20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[2];
  piVar1[2] = (uint)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28));
  (**(code **)(*piVar1 + 0x14))(piVar1,iVar2);
  *(undefined4 *)(param_1 + 0x6c) = 4;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = lbl_821CA460;
  return;
}

