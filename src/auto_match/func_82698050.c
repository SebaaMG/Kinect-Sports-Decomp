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
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
extern int fn_82681838();
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696D38();
extern int fn_82697248();
extern int fn_826972E0();
extern int fn_82697820();
extern int fn_82697918();
extern int fn_826979D0();
extern unsigned int iStack_68;


void fn_82698050(undefined8 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  longlong lStack_70;
  int iStack_68;
  int aiStack_60 [4];
  byte abStack_50 [16];
  byte abStack_40 [64];
  
  abStack_50[0] = 0;
  uVar2 = fn_826979D0(abStack_40,param_1,param_2,0);
  fn_82695FA0(abStack_50,uVar2);
  if (4 < abStack_40[0]) {
    fn_826959C8(abStack_40);
  }
  if (abStack_50[0] == 5) {
    uVar1 = *(undefined1 *)(param_2 + 0x7c);
    fn_82697820(abStack_50,param_2,uVar1);
    lStack_70 = CONCAT17(4,(((U64)(lStack_70) >> 8) & 0xFFFFFFFFFFFFFF));
    iStack_68 = param_3;
    uVar2 = fn_82697248(aiStack_60,&lStack_70,param_2,uVar1);
    fn_82697918(abStack_50,param_2,uVar2);
    lVar3 = (ulonglong)*(uint *)(aiStack_60[0] + 8) - 1;
    *(int *)(aiStack_60[0] + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(aiStack_60[0]);
    }
    fn_82696D38(&lStack_70,abStack_50,param_2,0xffffffffffffffff,0);
    fn_82681838(param_1,&lStack_70);
    lVar3 = (ulonglong)*(uint *)((((U64)(lStack_70) >> 0) & 0xFFFFFFFF) + 8) - 1;
    *(int *)((((U64)(lStack_70) >> 0) & 0xFFFFFFFF) + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8();
    }
  }
  else {
    dVar4 = (double)fn_826972E0(abStack_50,param_2);
    lStack_70 = (longlong)param_3;
    fn_82681898(dVar4 + (double)lStack_70,param_1);
  }
  if (4 < abStack_50[0]) {
    fn_826959C8(abStack_50);
  }
  return;
}

