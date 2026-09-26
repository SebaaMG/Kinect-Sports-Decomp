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
extern int fn_82417F58();
extern int fn_82419C70();
extern int fn_82508078();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_8235FBC8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x2b20);
  iVar2 = fn_82417F58(uVar5);
  dVar7 = (double)lbl_821CC160;
  if ((dVar7 < (double)*(float *)(param_2 + 0x2c04)) && (*(int *)(iVar2 + 0x24) != 0)) {
    iVar3 = fn_82419C70(uVar5);
    if (((iVar3 != 0) || ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0x2c04) - param_1),
       *(float *)(param_2 + 0x2c04) = fVar1, (double)fVar1 <= dVar7)) {
      (**(code **)(**(int **)(*(int *)(param_2 + 0x2b20) + 4) + 0x48))();
    }
  }
  if ((*(int *)(iVar2 + 0x24) == 0) && (*(uint *)(iVar2 + 0x29c) != *(uint *)(param_2 + 0x2c08))) {
    if (*(uint *)(iVar2 + 0x29c) < 2) {
      lVar6 = (longlong)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)lVar6;
      if (lVar6 < 1) {
        uVar4 = 0xffffffff821b26e8;
      }
      else {
        uVar4 = 0xffffffff821b26d8;
      }
      fn_82508078(*(undefined4 *)(param_2 + 0xa4),uVar4,0);
    }
    *(undefined4 *)(param_2 + 0x2c08) = *(undefined4 *)(iVar2 + 0x29c);
  }
  return;
}

