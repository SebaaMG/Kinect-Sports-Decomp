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
extern int fn_8225F160();
extern int fn_8234E808();
extern int fn_824FDBD8();
extern int fn_82592430();
extern int fn_82F4FEB8();
extern int fn_82F510F0();
extern int fn_82F51AC0();
extern int fn_82F51D60();
extern int fn_82F51E28();
extern int fn_82F520B0();
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CC160;


void fn_824FD570(int param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [11];
  
  uVar2 = fn_824FDBD8(*(undefined4 *)(param_1 + 0xb64));
  if ((int)uVar2 != *(int *)(param_1 + 0xb68)) {
    fn_82F510F0(*(undefined4 *)(param_1 + 0xb60),uVar2);
    *(int *)(param_1 + 0xb68) = (int)uVar2;
  }
  iVar3 = fn_82F51D60(*(undefined4 *)(param_1 + 0xb60));
  if (((iVar3 == 0) || (cVar4 = fn_82F51E28(*(undefined4 *)(param_1 + 0xb60)), cVar4 == '\0'))
     && (iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x14))(), iVar3 != 0)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x8c0) + 0x6c))
                      (*(int **)(param_1 + 0x8c0),auStack_2c,auStack_30);
    if (iVar3 == 0) {
      auStack_2c[0] = fn_82F4FEB8();
      auStack_30[0] = 1;
    }
    fn_82F520B0(*(undefined4 *)(param_1 + 0xb60),auStack_2c[0],auStack_30[0]);
  }
  fn_82F51AC0((double)*(float *)(param_1 + 0xb3c),*(undefined4 *)(param_1 + 0xb60));
  iVar3 = (**(code **)(**(int **)(param_1 + 0xb60) + 4))();
  if ((iVar3 == 0) ||
     ((((*(int *)(param_1 + 0xb98) == 0 && (*(int *)(param_1 + 0xb64) != 0)) &&
       (iVar3 = fn_8225F160(),
       (((~(ulonglong)*(uint *)(iVar3 + 0x44) & 0xffffffff) >> 0x1f) +
        (ulonglong)((ulonglong)*(uint *)(iVar3 + 0x44) < 2) & 1) == 0)) ||
      ((*(int *)(param_1 + 0xb88) != 0 &&
       (*(float *)(*(int *)(param_1 + 0xb88) + 0x74) <= lbl_82193B00)))))) {
    fVar1 = lbl_821CC160;
    iVar3 = *(int *)(param_1 + 0xb84);
    pfVar5 = (float *)(iVar3 + 0x18);
    if (iVar3 + 0x18 != iVar3 + 0x60) {
      do {
        pfVar5[2] = (pfVar5[1] - *pfVar5) * fVar1 + *pfVar5;
        pfVar5 = pfVar5 + 3;
      } while (pfVar5 != (float *)(iVar3 + 0x60));
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb84);
    for (pfVar5 = (float *)(iVar3 + 0x18); pfVar5 != (float *)(iVar3 + 0x60); pfVar5 = pfVar5 + 3) {
      pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
    }
  }
  fn_8234E808();
  fn_82592430(param_1,param_2);
  return;
}

