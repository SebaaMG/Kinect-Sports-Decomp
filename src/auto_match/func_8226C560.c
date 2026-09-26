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
extern int fn_8280A580();
extern unsigned int lbl_82193E50;


void fn_8226C560(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar3 = 0;
    dVar5 = (double)lbl_82193E50;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x40) + iVar3 + 0xe4) & param_2) != 0) {
        iVar1 = *(int *)(param_1 + 0x40) + iVar3;
        *(float *)(iVar1 + 0xc0) = (float)((double)*(float *)(iVar1 + 0xc0) + dVar5);
        dVar4 = (double)fn_8280A580((double)*(float *)(*(int *)(param_1 + 0x40) + iVar3 + 0xc0));
        *(float *)(*(int *)(param_1 + 0x40) + iVar3 + 0xc0) = (float)dVar4;
        iVar1 = *(int *)(param_1 + 0x40) + iVar3;
        *(undefined4 *)(iVar1 + 0xe8) = *(undefined4 *)(iVar1 + 0xc0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xf0;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

