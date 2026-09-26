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
extern int fn_824B4288();
extern int fn_82F58770();
extern int fn_82F58A68();
extern unsigned int lbl_82165F34;
extern unsigned int lbl_82165F4C;


void fn_82F58AE8(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined **ppuStack_70;
  undefined4 *puStack_6c;
  undefined ***pppuStack_60;
  undefined **ppuStack_50;
  undefined4 *puStack_4c;
  undefined ***pppuStack_40;
  
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  pppuStack_40 = &ppuStack_50;
  pppuStack_60 = &ppuStack_70;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *param_1 = param_2;
  ppuStack_50 = &lbl_82165F4C;
  ppuStack_70 = &lbl_82165F34;
  puStack_6c = param_1;
  puStack_4c = param_1;
  uVar1 = fn_82F58A68();
  fn_82F58770(uVar1,param_1,&ppuStack_70,&ppuStack_50);
                    /* WARNING: Subroutine does not return */
  fn_824B4288(param_1 + 4,0x1c0);
}

