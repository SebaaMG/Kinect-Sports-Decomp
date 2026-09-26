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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8234EED8();
extern int fn_824A1C90();
extern int fn_8265C9E0();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_82F51E28();
extern int fn_82F520B0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;


void fn_8234EDA8(int param_1,int *param_2)

{
  float fVar1;
  longlong lVar2;
  char cVar6;
  int iVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar7;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  uVar7 = 0;
  if (param_2 != (int *)0x0) {
    lVar2 = (**(code **)(*param_2 + 4))(param_2);
    uVar7 = -(uint)(lVar2 != 0) & (uint)param_2;
  }
  if (uVar7 != *(uint *)(param_1 + 0x2c)) {
    if (uVar7 == 0) {
      fn_8234EED8(param_1);
    }
    else {
      cVar6 = fn_82F51E28(uVar7);
      if ((cVar6 == '\0') &&
         (iVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 0x6c))
                            (*(int **)(param_1 + 0x28),auStack_2c,auStack_30), iVar5 != 0)) {
        fn_82F520B0(uVar7,auStack_2c[0],auStack_30[0]);
      }
      uVar3 = fn_8265C9E0(0xe0);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = fn_824A1C90(uVar3,*(undefined4 *)(param_1 + 0x28),uVar7);
      }
      cVar6 = fn_827F22D0(*(undefined4 *)(param_1 + 4));
      fVar1 = lbl_8218E8E8;
      if (cVar6 != '\0') {
        fVar1 = lbl_821CC160;
      }
      fn_827F2D60((double)fVar1,*(undefined4 *)(param_1 + 4),uVar4);
      *(int *)(param_1 + 0x30) = (int)uVar4;
    }
    *(uint *)(param_1 + 0x2c) = uVar7;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xd4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xd8) = *(undefined4 *)(param_1 + 0x38);
  }
  return;
}

