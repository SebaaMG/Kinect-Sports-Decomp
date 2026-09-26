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
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_825E4220(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x1c) = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = *(uint *)(param_2 + 0x24);
  *(float *)(param_2 + 0x20) =
       (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + *(float *)(param_1 + 0x88);
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)((((int)uVar1 >> 8 & 0xffU) + 0x1ff) * 4 +
                                    *(int *)(param_1 + 0x30)) + 4) + (uVar1 & 0xff) * 4);
  *(undefined4 *)(iVar2 + 0xc) = lbl_82192734;
  *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) | 8;
  *(undefined4 *)(param_2 + 0x24) = 0xffffffff;
  return;
}

