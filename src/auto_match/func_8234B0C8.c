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
extern unsigned int *auStack_40;
extern int fn_8234B190();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827F2D60();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8234B0C8(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_40 [64];
  
  uVar1 = fn_8234B190();
  dVar3 = (double)lbl_821CA460;
  if ((uVar1 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 0x2c)) {
    fn_8255F880(auStack_40,uVar1 + 0x40);
    dVar4 = (double)lbl_821CC160;
    uVar2 = fn_8255F8D0(dVar4,dVar3,auStack_40);
    fn_827F2D60(dVar4,*(undefined4 *)(param_2 + 0x20),uVar2,param_4,0x12,0);
    *(float *)(param_2 + 0x30) = (float)param_1;
    *(int *)(param_2 + 0x28) = (int)uVar2;
    *(int *)(param_2 + 0x2c) = (int)uVar1;
  }
  if ((*(int *)(param_2 + 0x34) != 0) && (*(int *)(param_2 + 0x24) != 0)) {
    fn_827F5708(dVar3);
  }
  return;
}

