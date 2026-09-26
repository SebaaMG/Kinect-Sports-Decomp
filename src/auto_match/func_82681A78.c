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
extern int fn_8267BDA8();
extern int fn_8267BED0();
extern unsigned int uStack_30;


undefined8 fn_82681A78(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  if (*(uint *)(param_1 + 8) <= param_2) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uStack_30 = 2;
      iVar1 = fn_8267BED0(param_1,0x14,&uStack_30);
    }
    else {
      iVar1 = fn_8267BDA8(*(int *)(param_1 + 0xc),(*(uint *)(param_1 + 8) + 5) * 4);
    }
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 5;
  }
  auStack_2c[0] = 2;
  uVar2 = fn_8267BED0(param_1,0x1000,auStack_2c);
  *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xc)) = uVar2;
  if (*(int *)(param_2 * 4 + *(int *)(param_1 + 0xc)) == 0) {
    return 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 1;
}

