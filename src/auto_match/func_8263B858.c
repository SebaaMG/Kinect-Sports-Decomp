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
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern int fn_8262FFB0();
extern int fn_8263B388();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8263B858(int param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  fn_8263B388(param_1,param_2,&uStack_30,&uStack_2c,&uStack_28,auStack_20,auStack_24);
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x1c);
  *param_3 = ((((((((((uVar2 >> 7 & 0x38 | uVar2 >> 7 & 7) << 3 | uVar2 >> 4 & 7) << 3 |
                    uVar2 >> 1 & 7) << 1 | uVar2 & 1) << 2 | uVar1 >> 8 & 3) << 2 | uVar1 >> 6 & 3)
                 << 2 | uVar1 >> 4 & 3) << 2 | uVar1 >> 2 & 3) << 1 | uVar1 >> 0x1f) << 2 |
             *(uint *)(param_1 + 0x20) >> 6 & 3) << 6 | *(uint *)(param_1 + 0x20) & 0x3f;
  uVar2 = fn_8262FFB0(param_1);
  param_3[1] = uVar2;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = uStack_30;
  param_3[5] = uStack_2c;
  param_3[6] = uStack_28;
  return;
}

