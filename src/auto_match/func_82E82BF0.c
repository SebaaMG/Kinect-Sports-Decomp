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
extern int fn_82E829D0();
extern int fn_82F02390();
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();
extern unsigned int lbl_82005730;
extern unsigned int lbl_821551E0;
extern unsigned int lbl_8215F5F0;
extern float lbl_8215F660;
extern unsigned int lbl_8215F668;


void fn_82E82BF0(int param_1, undefined8 param_2, int *param_3, int param_4, ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 unused_arg_9, int in_stack_0000005c, undefined4 in_stack_00000064, undefined4 in_stack_0000006c, undefined4 in_stack_00000074, int in_stack_0000007c, undefined8 unused_arg_15, undefined1 in_stack_0000008f, undefined1 in_stack_00000097, undefined1 in_stack_0000009f)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;








  
  iVar9 = 0;
  if (*(int *)(param_1 + 0x76c8) != 0) {
    *(undefined4 *)(param_1 + 0x6f4c) = 0;
    param_5 = 0;
    *(undefined4 *)(param_1 + 0x5a4) = 0;
    *(undefined4 *)(param_1 + 0x6f58) = 0;
    *(undefined4 *)(param_1 + 0x6f7c) = 0;
    *(undefined4 *)(param_1 + 0x4f0) = 0;
  }
  if (param_4 != 0) {
    fn_82F02390(*(undefined4 *)(param_1 + 0x1ebc),param_2,0,*(int *)(param_1 + 4) == 8);
  }
  fn_82E829D0(param_1);
  bVar10 = *(double *)(param_1 + 0x1e08) < lbl_8215F5F0;
  *(undefined4 *)(param_1 + 0xa40) = *(undefined4 *)(&lbl_8215F668 + *(int *)(param_1 + 0x88c) * 4);
  if (bVar10) {
    iVar6 = (int)*(double *)(param_1 + 0x1e08);
  }
  else {
    iVar6 = 0x1f;
  }
  if (*(double *)(param_1 + 0x1ed0) < lbl_821551E0) {
    iVar7 = (int)*(double *)(param_1 + 0x1ed0);
  }
  else {
    iVar7 = 0x7ff;
  }
  *(undefined4 *)(param_1 + 0x888) = 3;
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),3,2);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x88c),3);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f5c),2);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar6 >> 2,3);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),iVar7 >> 6,5);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x880),1);
  uVar1 = *(uint *)(param_1 + 0x31c);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  uVar1 = *(uint *)(param_1 + 800);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) +
                    -1,0xc);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f48),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f4c),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f58),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x5a4),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f7c),1);
  param_5 = -(ulonglong)(*(int *)(param_1 + 0xb08) == 0) & param_5;
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),param_5,1);
  if ((int)param_5 != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x328) - 1,
                      0xe);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x32c) - 1,
                      0xe);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),param_7,1);
    if ((int)param_7 != 0) {
      *(int *)(param_1 + 0x6f64) = (int)param_8;
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),param_8,4);
      if (*(int *)(param_1 + 0x6f64) == 0xf) {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f68),8);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f6c),8);
      }
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_0000005c,1);
    if (in_stack_0000005c != 0) {
      *(undefined4 *)(param_1 + 0x6f70) = in_stack_00000064;
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_00000064,1);
      if (*(int *)(param_1 + 0x6f70) == 0) {
        *(undefined4 *)(param_1 + 0x6f74) = in_stack_0000006c;
        *(undefined4 *)(param_1 + 0x6f78) = in_stack_00000074;
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_0000006c,8);
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x6f78);
        uVar5 = 4;
      }
      else {
        uVar1 = (uint)(*(double *)(param_1 + 0x1e08) * lbl_8215F660 + lbl_82005730);
        uVar4 = (ulonglong)uVar1;
        if (0x10000 < (int)uVar1) {
          uVar4 = 0x10000;
        }
        uVar5 = 0x10;
        uVar4 = uVar4 - 1;
      }
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar4,uVar5);
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_0000007c,1);
    if (in_stack_0000007c != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_0000008f,8);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_00000097,8);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),in_stack_0000009f,8);
    }
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4f0),1);
  if (*(int *)(param_1 + 0x4f0) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4ec),5);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x364) - 6,4)
    ;
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x368) - 4,4)
    ;
    uVar1 = *(uint *)(param_1 + 0x364);
    uVar2 = *(uint *)(param_1 + 0x368);
    if (0 < *(int *)(param_1 + 0x4ec)) {
      piVar8 = (int *)(param_1 + 1000);
      do {
        iVar6 = piVar8[0x21];
        piVar8 = piVar8 + 1;
        uVar3 = *(uint *)(param_1 + 0x368);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                          *piVar8 + (1 << (uVar1 & 0x3f)) + -1 >>
                          (*(uint *)(param_1 + 0x364) & 0x3f),0x10);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                          iVar6 + (1 << (uVar2 & 0x3f)) + -1 >> (uVar3 & 0x3f),0x10);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x4ec));
    }
  }
  if (param_4 != 0) {
    fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
    *param_3 = (int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff)
                    >> 3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
    fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
  }
  return;
}

