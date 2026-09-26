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
extern int fn_822ABA88();
extern int fn_822C47A8();
extern int fn_822C6F10();
extern unsigned int lbl_82195530;


void fn_823E8BD8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  iVar3 = *(int *)(param_1[4] * 4 + *param_1);
  uVar4 = 0;
  *param_3 = 0;
  iVar1 = lbl_82195530;
  param_3[2] = 0;
  iVar2 = *(int *)(iVar3 + 8);
  param_3[1] = iVar1;
  param_3[3] = iVar1;
  if (iVar2 != 0) {
    do {
      iVar2 = fn_822ABA88(iVar3,uVar4);
      iVar3 = fn_822C47A8();
      if ((iVar3 != 0) || (*(int *)(iVar2 + 0x1ec) != 0)) {
        dVar5 = (double)fn_822C6F10(iVar2 + 0x80,iVar2 + 0xc0);
        if ((double)(float)param_3[1] <= dVar5) {
          if (dVar5 < (double)(float)param_3[3]) {
            param_3[3] = (int)(float)dVar5;
            param_3[2] = iVar2;
          }
        }
        else {
          iVar3 = *param_3;
          param_3[3] = param_3[1];
          param_3[1] = (int)(float)dVar5;
          *param_3 = iVar2;
          param_3[2] = iVar3;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_1[4] * 4 + *param_1);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
  }
  return;
}

