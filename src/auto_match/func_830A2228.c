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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_830A6E50();
extern int fn_830A6FF8();
extern int fn_830A7130();
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_830A2228(int param_1,int param_2,longlong param_3,longlong param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  float *pfVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs45 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  pcVar5 = (char *)((int)*(short *)(param_1 + 4) + *(int *)(param_2 + 0x4c));
  pfVar6 = (float *)((int)*(short *)(param_1 + 6) + *(int *)(param_2 + 0x4c));
  if ((*(char *)(param_1 + 2) == '\0') || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) {
    iVar1 = *param_5;
    *(undefined1 *)(iVar1 + 3) = 3;
    *(undefined1 *)(iVar1 + 4) = 1;
    *param_5 = iVar1 + 0x10;
  }
  else {
    if (*pcVar5 == '\0') {
      *pfVar6 = *(float *)(param_1 + 8);
    }
    iVar2 = *param_5;
    fn_830A6FF8((ulonglong)*(byte *)(param_1 + 3) * 0x10 + param_4,param_3 + 0x30,param_2,iVar2,
                  uVar4 - 0x90);
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    uVar3 = storeVectorElementWordIndexed(in_vs42,0,uVar4 - 0xa0);
    *(undefined4 *)(uVar4 - 0xa0) = uVar3;
    fn_830A6E50(iVar1,uVar4 - 0x90,uVar4 - 0x70);
    fn_830A7130(uVar4 - 0x70,param_2,iVar2,param_5);
    if ((*pfVar6 != *(float *)(param_1 + 8)) || (*pcVar5 == '\0')) {
      *pfVar6 = *(float *)(param_1 + 8);
      *pcVar5 = '\x01';
    }
  }
  return;
}

