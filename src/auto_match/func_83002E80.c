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
extern int fn_83002AE0();
extern int fn_830177C8();
extern unsigned int lbl_82021544;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


undefined8 fn_83002E80(int param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float afStack_50 [20];
  
  uVar2 = 0;
  *param_3 = *(float *)(param_1 + 0x58);
  param_3[1] = *(float *)(param_1 + 0x5c);
  param_3[2] = *(float *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 0x40) != 0) {
    dVar5 = (double)lbl_821AAD20;
    dVar4 = (double)lbl_82021544;
    afStack_50[0] = lbl_821AAD20;
    if ((*(uint *)(param_1 + 0x40) >> 0x14 & 1) != 0) {
      uVar2 = 1;
      dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,0x14,param_2);
      *param_3 = (float)dVar3;
      if ((*(int *)(param_1 + 100) != 0) &&
         (cVar1 = fn_83002AE0(param_1,afStack_50), cVar1 != '\0')) {
        *param_3 = (float)((double)(*param_3 * afStack_50[0]) * dVar4);
      }
    }
    if ((*(uint *)(param_1 + 0x40) >> 0x15 & 1) != 0) {
      dVar3 = (double)fn_830177C8(lbl_832642FC,param_1,0x15,param_2);
      param_3[1] = (float)dVar3;
      if ((*(int *)(param_1 + 100) == 0) ||
         (((double)afStack_50[0] == dVar5 &&
          (cVar1 = fn_83002AE0(param_1,afStack_50), cVar1 == '\0')))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
        *param_3 = (float)((double)(*param_3 * afStack_50[0]) * dVar4);
      }
    }
  }
  return uVar2;
}

