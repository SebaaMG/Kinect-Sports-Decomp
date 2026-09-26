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
extern int fn_82FEFD50();
extern int fn_82FF0250();
extern int fn_82FF1138();
extern int fn_83003A80();
extern int fn_83027368();
extern int fn_83028CB0();


undefined8 fn_82FF11B8(int param_1,float *param_2)

{
  int iVar2;
  undefined8 uVar1;
  double dVar3;
  
  iVar2 = fn_82FF1138();
  uVar1 = fn_83003A80(*(undefined4 *)(iVar2 + 0x68),*(undefined4 *)(iVar2 + 0x70),iVar2 + 0x150)
  ;
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_83027368(*(int *)(param_1 + 0x38),uVar1,iVar2 + 0x150);
  }
  if ((*(byte *)(param_1 + 0xda) & 2) != 0) {
    dVar3 = (double)fn_83028CB0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c))
    ;
    *param_2 = (float)dVar3;
    fn_82FEFD50(param_1);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x9c))
                    (*(int **)(param_1 + 0x68),param_2,0xffffffffffffffff,param_1 + 0x1c,
                     *(undefined4 *)(param_1 + 0x70),
                     (~(ulonglong)*(byte *)(param_1 + 0xd9) & 0xffffffff) >> 6 & 1,param_1 + 0x28,1)
  ;
  *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd9) | 0x40;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x30) + param_2[2];
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x34) + param_2[3];
  *(float *)(param_1 + 0x7c) = param_2[1];
  *(float *)(param_1 + 0x74) = *param_2;
  fn_82FF0250(param_1);
  if (((*(byte *)(param_1 + 0xda) & 2) != 0) && (*(int *)(param_1 + 0x178) != 0)) {
    *(float *)(param_1 + 0x84) =
         *(float *)(*(int *)(param_1 + 0x178) + 0x10) + *(float *)(param_1 + 0x84);
  }
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 1;
  return uVar1;
}

