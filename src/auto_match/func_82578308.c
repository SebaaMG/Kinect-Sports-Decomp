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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_8265CA60();


void fn_82578308(int param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar2;
  longlong lVar5;
  
  uVar3 = fn_825200A8(param_2 + 0xc0,0xffffffff82196288);
  lVar5 = param_2 + 0xc4;
  *(uint *)(param_1 + 8) = (uint)LZCOUNT(uVar3) >> 5;
  iVar4 = fn_825200A8(lVar5);
  *(uint *)(param_1 + 0xc) = (uint)(iVar4 == 0);
  if (iVar4 == 0) {
    uVar2 = fn_8251F720(lVar5,0);
    uVar3 = fn_82631830();
    *(undefined4 *)(param_1 + 0xb8) = uVar3;
    fn_8251FA58(uVar2);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((int)param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = fn_8251F720(param_2 + 0xc0,0);
    uVar3 = fn_82631488();
    *(undefined4 *)(param_1 + 0xb4) = uVar3;
    fn_8251FA58(uVar2);
    uVar1 = *(uint *)((int)param_2 + 200);
    iVar4 = 0;
    *(uint *)(param_1 + 0xbc) = uVar1;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    else {
      lVar5 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
      if (0x3fffffff < uVar1) {
        lVar5 = -1;
      }
      uVar3 = fn_8265CA60(lVar5);
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
    }
    if (0 < *(int *)(param_1 + 0xbc)) {
      lVar5 = 0;
      do {
        uVar3 = fn_8251F720(param_2 + 0xcc + lVar5,0);
        iVar4 = iVar4 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0xc0) + (int)lVar5) = uVar3;
        lVar5 = lVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 0xbc));
    }
  }
  return;
}

