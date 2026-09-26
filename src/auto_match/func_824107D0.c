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
extern int fn_8252AF80();
extern unsigned int lbl_82191100;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82195708;
extern unsigned int lbl_831D17A0;
extern unsigned int lbl_831D9FE4;


void fn_824107D0(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(**(int **)(param_1 + 0x24) + 0xcb8) != 0) {
    puVar1 = &lbl_82191100;
    dVar3 = (double)*(float *)(*(int *)(param_1 + 0x28) + 0x1fc);
    dVar4 = (double)lbl_82191FC8;
    if (dVar3 != dVar4) {
      dVar3 = (double)(float)((double)(float)(dVar4 - dVar3) * (double)lbl_831D17A0 + dVar3);
      if (((double)lbl_82195708 <= dVar3) && (dVar3 <= (double)lbl_831D9FE4)) {
        dVar3 = dVar4;
      }
      dVar3 = (double)fn_8252AF80(dVar3,*(int *)(param_1 + 0x28),0);
      uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + 0x1e0);
      if ((double)*(float *)(puVar1 + 0x18) <= dVar3) {
        uVar2 = uVar2 & 0xffffffdf;
      }
      else {
        uVar2 = uVar2 | 0x20;
      }
      *(uint *)(*(int *)(param_1 + 0x28) + 0x1e0) = uVar2;
    }
  }
  return;
}

