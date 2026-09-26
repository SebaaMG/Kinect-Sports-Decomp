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
extern unsigned int *auStack_58;
extern float fRam831c4eb0;
extern int fn_824A5010();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831c4ea8;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824AC030(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  uint uStack_60;
  uint uStack_5c;
  undefined4 auStack_58 [22];
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  dVar6 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x30) = lbl_821CC160;
  (**(code **)*param_2)(param_2,&uStack_5c,&uStack_60);
  uVar3 = (ulonglong)uStack_60;
  uVar4 = (uVar3 - uRam831c4ea8) + 1;
  uVar5 = (ulonglong)uStack_5c;
  if ((int)uStack_5c < (int)uVar4) {
    uVar5 = uVar4;
  }
  cVar1 = *(char *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x30) = lbl_821CA460;
  if ((uVar5 & 0xffffffff) < uVar3) {
    do {
      (**(code **)(*param_2 + 4))(param_2,uVar3,auStack_58);
      cVar2 = fn_824A5010((double)fRam831c4eb0,(-(cVar1 != '\0') & 4U) + 0x14,auStack_58[0]);
      if (cVar2 == '\0') {
        *(float *)(param_1 + 0x30) = (float)dVar6;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        return;
      }
      uVar3 = uVar3 - 1;
    } while ((uVar5 & 0xffffffff) < (uVar3 & 0xffffffff));
  }
  return;
}

