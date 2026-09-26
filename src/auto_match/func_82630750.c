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
extern int fn_82630270();
extern int fn_82645110();


void fn_82630750(int param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  if ((*param_3 & 0xf) == 1) {
    uVar3 = (ulonglong)param_3[6] & 0xfffffffc;
  }
  else if ((*param_3 & 0xf) == 3) {
    uVar3 = (ulonglong)param_3[8] & 0xfffff000;
    if ((param_3[8] & 0xfffff000) == 0) {
      uVar3 = (ulonglong)param_3[0xc] & 0xfffff000;
    }
  }
  else {
    uVar3 = (ulonglong)param_3[6];
  }
  *(uint *)((param_2 + 0xa26) * 4 + param_1) =
       ((int)(uVar3 >> 0x14) + 0x200U & 0x1000) + ((uint)uVar3 & 0x1fffffff);
  *(ulonglong *)(param_1 + 0x10) =
       0x8000000000000000U >> (param_2 + 0xcU & 0x7f) | *(ulonglong *)(param_1 + 0x10);
  *(undefined4 *)(uVar1 + 4) = 0x5c8;
  puVar2 = (undefined4 *)(uVar1 + 8);
  *puVar2 = 0x20000;
  if (*(int *)(param_1 + 0x3590) == 0) {
    if (param_4 == 10) {
      *(undefined4 *)(uVar1 + 0xc) = 0xc0004600;
      puVar2 = (undefined4 *)(uVar1 + 0x10);
      *puVar2 = 0xf;
    }
    else if (*(int *)(param_1 + 0x3594) != 0) goto LAB_8263087c;
    *(undefined4 **)(param_1 + 0x30) = puVar2;
    fn_82630270(param_1);
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    if (*(undefined4 **)(param_1 + 0x38) < puVar2) {
      puVar2 = (undefined4 *)fn_82645110(param_1);
    }
  }
LAB_8263087c:
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  *(uint *)(param_1 + 0x3598) = param_4 & 3;
  *(undefined4 *)(param_1 + 0x3594) = 0;
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + 1;
  return;
}

