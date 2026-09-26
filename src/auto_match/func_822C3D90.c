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
extern unsigned int *auStack_30;
extern int fn_822B7900();
extern int fn_8235A3B8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();
extern int fn_82F63EC8();
extern unsigned int lbl_83298F5C;


undefined8 fn_822C3D90(int param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 auStack_30 [12];
  
  iVar5 = 0;
  uVar3 = fn_8251F720(param_2,0);
  if (uVar3 != 0) {
    uVar4 = fn_8251FBA8(uVar3);
    iVar5 = fn_8265CA60();
    fn_82A1DD38(iVar5,uVar3,uVar4);
  }
  *(undefined4 **)(iVar5 + 0x24) = auStack_30;
  uVar2 = lbl_83298F5C;
  auStack_30[0] = *(undefined4 *)(param_1 + 0x114);
  uVar1 = lbl_83298F5C & 1;
  *(undefined4 *)(*(int *)(iVar5 + 0x24) + 4) =
       *(undefined4 *)
        (*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 + **(int **)(param_1 + 0x1c)) + 0x48);
  if (uVar1 == 0) {
    lbl_83298F5C = uVar2 | 1;
    fn_8235A3B8();
    fn_82F63EC8(0xffffffff8313caf8);
  }
  uVar4 = fn_822B7900(0xffffffff83298ef8,iVar5);
  fn_8265CAA0(iVar5);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_8251FA58(uVar3);
  }
  return uVar4;
}

