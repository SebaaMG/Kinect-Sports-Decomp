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


void fn_8277CC70(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  if (*(uint *)(param_1 + 8) <= param_2) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uStack_30 = 0x85;
      uVar1 = fn_8267BED0(param_1,0x100,&uStack_30);
    }
    else {
      uVar1 = fn_8267BDA8(*(int *)(param_1 + 0xc),(*(uint *)(param_1 + 8) + 0x40) * 4);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x40;
  }
  auStack_2c[0] = 0x85;
  uVar1 = fn_8267BED0(param_1,0x4000,auStack_2c);
  *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0xc)) = uVar1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}

