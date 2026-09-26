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
extern int fn_82C10E58();


void fn_82C11CB8(int param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *apuStack_40 [16];
  
  apuStack_40[0] = (undefined1 *)0x0;
  iVar1 = fn_82C10E58(*(undefined4 *)(param_1 + 0x48),param_2,apuStack_40);
  if (-1 < iVar1) {
    *apuStack_40[0] = (char)param_2;
    *(undefined4 *)(apuStack_40[0] + 4) = 0;
    *(undefined4 *)(apuStack_40[0] + 8) = 0;
    *(undefined4 *)(apuStack_40[0] + 0xc) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x10) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x14) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x18) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x1c) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x20) = 0;
    *(undefined4 *)(apuStack_40[0] + 0x24) = 1;
    *(undefined4 *)(apuStack_40[0] + 0x28) = param_4;
    *(undefined4 *)(apuStack_40[0] + 4) = *param_3;
    *(undefined4 *)(apuStack_40[0] + 8) = param_3[1];
    *(undefined4 *)(apuStack_40[0] + 0xc) = param_3[2];
    *(undefined4 *)(apuStack_40[0] + 0x10) = param_3[3];
    *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) + 1;
  }
  return;
}

