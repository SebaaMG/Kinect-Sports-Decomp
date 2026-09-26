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
extern int fn_82270B70();
extern int fn_82472120();
extern int fn_82472D48();
extern unsigned int lbl_831C6C34;
extern unsigned int lbl_832960B8;


void fn_82460420(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  double dVar6;
  
  if (*(int *)(param_2 + 0x54) == 5) {
    if (lbl_832960B8 == 0) {
      iVar2 = **(int **)(param_2 + 0x4c);
      if ((iVar2 != 3) && (iVar2 != 4)) {
        fn_82472D48(*(int **)(param_2 + 0x4c),3);
      }
    }
    if (**(int **)(param_2 + 0x4c) != 4) {
      fn_82472120(param_1);
    }
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if ((*(int *)(iVar2 + 0xc) == 6) && (*(int *)(iVar2 + 0x10) == 0)) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0x84) + param_1);
    dVar6 = (double)fVar1;
    *(float *)(iVar2 + 0x84) = fVar1;
    if (((double)lbl_831C6C34 <= dVar6) &&
       (((double)(float)(dVar6 - param_1) < (double)lbl_831C6C34 &&
        (iVar2 = *(int *)(iVar2 + 0x308), iVar2 != 0)))) {
      iVar4 = fn_82270B70();
      puVar5 = *(undefined4 **)(iVar4 + 0xa8);
      for (puVar3 = (undefined4 *)*puVar5; puVar3 != puVar5; puVar3 = (undefined4 *)*puVar3) {
        if ((puVar3[2] == iVar2) && (puVar3[0x42d] == 0)) {
          puVar3[5] = 1;
        }
        puVar5 = *(undefined4 **)(iVar4 + 0xa8);
      }
    }
  }
  return;
}

