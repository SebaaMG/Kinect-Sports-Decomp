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
extern int fn_823AA370();
extern int fn_823AAD90();
extern int fn_828D45F8();
extern int fn_82C00470();
extern int fn_82C0BFC8();
extern unsigned int lbl_82015B38;


undefined8 fn_82C03F68(int param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  
  dVar7 = (double)lbl_82015B38;
  uVar2 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x4c))();
  }
  if (((param_3 & 0xffffffff) != 0) && (-1 < (int)uVar2)) {
    dVar7 = (double)fn_82C00470(param_3);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x48))(*(int **)(param_1 + 0x3c),param_3);
  }
  if (((param_4 & 0xffffffff) != 0) && (-1 < (int)uVar2)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x44))(*(int **)(param_1 + 0x40),param_4);
  }
  if (((param_2 & 0xffffffff) != 0) && (-1 < (int)uVar2)) {
    iVar3 = fn_828D45F8(param_2);
    iVar4 = fn_823AAD90(param_2);
    if (iVar4 == 0x18) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = fn_823AAD90(param_2);
    }
    uVar1 = uVar5 >> 3;
    iVar4 = fn_823AA370(param_2);
    trapWord(6,(longlong)iVar4 * (longlong)(int)uVar5,0);
    uVar6 = (((longlong)((double)(iVar4 * uVar1) / dVar7) & 0xffffffffU) + (ulonglong)uVar1) - 1 &
            ~((ulonglong)uVar1 - 1);
    *(int *)(param_1 + 0x14c) =
         (int)((uVar6 * 8000 & 0xffffffff) / ((longlong)iVar4 * (longlong)(int)uVar5 & 0xffffffffU))
    ;
    uVar2 = fn_82C0BFC8(param_1 + 0x44,5,(longlong)(int)uVar6 * (longlong)iVar3 + 8,1);
  }
  if ((param_3 & 0xffffffff) != 0) {
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar6 = fn_828D45F8(param_3);
    if (((uVar6 & 1) != 0) || (uVar6 = fn_823AA370(param_3), (uVar6 & 1) != 0)) {
      return 0xffffffff80004001;
    }
    iVar3 = fn_828D45F8(param_3);
    iVar4 = fn_823AA370(param_3);
    uVar2 = fn_82C0BFC8(param_1 + 0x8c,5,
                              (((longlong)iVar3 * (longlong)iVar4 +
                                ((longlong)iVar3 * (longlong)iVar4 & 0x7fffffffU) * 2 & 0xffffffff)
                               >> 1 & 0x1fffffff) + 8,1);
  }
  if (-1 < (int)uVar2) {
    *(float *)(param_1 + 0x150) = (float)dVar7;
  }
  return uVar2;
}

