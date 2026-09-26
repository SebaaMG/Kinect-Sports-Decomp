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
extern int fn_82E92218();


void fn_82E4BCD8(int param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  param_2[5] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = *(uint *)(param_1 + 0x238);
  if (3 < (int)uVar1) {
    if (((int)param_3 < 0) && (param_3 = (ulonglong)uVar1 - 2, *(int *)(param_1 + 0x38) == 0)) {
      param_3 = (ulonglong)uVar1 - 1;
    }
    bVar2 = false;
    iVar3 = fn_82E92218(*(undefined4 *)(param_1 + 0x234),param_3,0);
    lVar6 = param_3 + -1;
    param_2[2] = iVar3;
    iVar3 = (int)lVar6;
    if (-1 < iVar3) {
      do {
        iVar4 = fn_82E92218(*(undefined4 *)(param_1 + 0x234),lVar6,0);
        if ((iVar4 == 2) || (iVar4 == 4)) {
          iVar5 = (int)param_3 - (int)lVar6;
          param_2[1] = iVar4;
          param_2[5] = iVar5;
          if (!bVar2) {
            param_2[4] = iVar5;
            bVar2 = true;
            *param_2 = iVar4;
          }
        }
        if (((int)lVar6 == iVar3) && (iVar4 == 3)) {
          param_2[3] = 1;
        }
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    if (-1 < (int)param_3) {
      do {
        iVar3 = fn_82E92218(*(undefined4 *)(param_1 + 0x234),param_3,0);
        if (iVar3 != 3) {
          return;
        }
        param_3 = param_3 + -1;
        param_2[6] = param_2[6] + 1;
      } while (-1 < param_3);
    }
  }
  return;
}

