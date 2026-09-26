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
extern int fn_8234F4F0();
extern int fn_8234FC08();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8265CA20();


undefined8 fn_8248F790(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(*param_1 + 4);
  if (iVar1 != 0x5a) {
    if (iVar1 != 0x9b) {
      return 4;
    }
    iVar1 = *(int *)(param_2 + 0xd54);
    if (*(int *)(iVar1 + 4) == 0) {
      puVar4 = (uint *)(*param_1 + 8);
      if ((puVar4 != (uint *)0x0) &&
         (uVar6 = (ulonglong)*puVar4, uVar6 != (uVar6 - 1) + (ulonglong)(uVar6 == 0))) {
        uVar6 = fn_8251F720(puVar4,0);
        iVar2 = *(int *)(iVar1 + 0x14);
        if (iVar2 != 0) {
          fn_8234FC08(iVar2);
          fn_8265CA20(iVar2);
        }
        uVar3 = fn_8265C9E0(0x440);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_8234F4F0(uVar3,uVar6,*(undefined4 *)(iVar1 + 0x10));
        }
        *(undefined4 *)(iVar1 + 0x14) = uVar5;
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8251FA58(uVar6);
        }
        *(undefined4 *)(iVar1 + 4) = 1;
        return 0;
      }
    }
    else {
      if ((*(int *)(iVar1 + 0x18) == 0) && (*(int *)(iVar1 + 0x14) != 0)) {
        return 0;
      }
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  return 3;
}

