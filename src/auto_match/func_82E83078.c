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
extern int fn_82F02390();
extern int fn_82F023B0();
extern int fn_82F02410();
extern int fn_82F025F0();


void fn_82E83078(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                  ,longlong param_6)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  
  bVar4 = 1;
  iVar6 = 0;
  if (*(int *)(param_1 + 0x76c8) != 0) {
    if (*(int *)(param_1 + 0x76e0) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 1;
    *(undefined4 *)(param_1 + 0x4fc) = 0;
    *(undefined4 *)(param_1 + 0x6e04) = 0;
    *(undefined4 *)(param_1 + 0xa04) = 0;
    if (*(int *)(param_1 + 0x77d0) == *(int *)(param_1 + 0x77b8)) {
      lVar3 = (ulonglong)*(uint *)(param_1 + 0x77bc) - (ulonglong)*(uint *)(param_1 + 0x77d4);
      param_6 = -lVar3;
      bVar4 = -(lVar3 != 0) & 1;
    }
  }
  fn_82F02390(*(undefined4 *)(param_1 + 0x1ebc),param_2,0,*(int *)(param_1 + 4) == 8,param_5,
               param_6);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4f4),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4f8),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x4fc),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6e04),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x644),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x314),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xa04),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x978),2);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x648),1);
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x920),1);
  if (*(int *)(param_1 + 0x59c) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
    uVar1 = *(undefined4 *)(param_1 + 0x5a0);
  }
  else {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    uVar1 = *(undefined4 *)(param_1 + 0x594);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar1,1);
  if ((*(int *)(param_1 + 0x4f0) != 0) && (0 < *(int *)(param_1 + 0x4ec))) {
    puVar5 = (uint *)(param_1 + 0x368);
    do {
      puVar5 = puVar5 + 1;
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*puVar5 - 1,8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x4ec));
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),bVar4,1);
  if (bVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x31c);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                      (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0)
                      + -1,0xc);
    uVar2 = *(uint *)(param_1 + 800);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                      (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0)
                      + -1,0xc);
  }
  if (*(int *)(param_1 + 0xa04) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0xa08),1);
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (-(ulonglong)*(uint *)(param_1 + 0x7840) &
                     ~(ulonglong)*(uint *)(param_1 + 0x7840) & 0xffffffff) >> 0x1f,1);
  if (0 < (int)*(uint *)(param_1 + 0x7840)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x7840) - 1,3
                     );
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                    (-(ulonglong)*(uint *)(param_1 + 0x7844) &
                     ~(ulonglong)*(uint *)(param_1 + 0x7844) & 0xffffffff) >> 0x1f,1);
  if (0 < (int)*(uint *)(param_1 + 0x7844)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(ulonglong)*(uint *)(param_1 + 0x7844) - 1,3
                     );
  }
  fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
  *param_3 = (int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >>
                  3) + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
  fn_82F023B0(*(undefined4 *)(param_1 + 0x1ebc));
  return;
}

