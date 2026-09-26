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
extern unsigned int lbl_821CC160;


undefined8 fn_826244E0(double param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  
  uVar1 = *(uint *)(param_2 + 0x814);
  *(undefined4 *)(param_2 + 0x814) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    dVar3 = (double)lbl_821CC160;
    iVar2 = *(int *)(*(int *)(*(int *)(((int)uVar1 >> 8 & 0xffU) * 4 + param_2 + 0x7fc) + 4) +
                    (uVar1 & 0xff) * 4);
    *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) | 8;
    if (dVar3 < param_1) {
      *(float *)(iVar2 + 0x14) = (float)param_1;
    }
    return 1;
  }
  return 0;
}

