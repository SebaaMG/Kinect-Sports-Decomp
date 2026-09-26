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
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8278B290();
extern int fn_8278E7B0();
extern int fn_8278E8D0();
extern unsigned int lbl_82010C6C;
extern unsigned int lbl_8201581C;
extern unsigned int uStack_2a;
extern unsigned int uStack_2c;
extern unsigned int uStack_2e;
extern unsigned int uStack_30;
extern unsigned int uStack_32;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


undefined4 * fn_82797870(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  
  param_1[1] = 1;
  *param_1 = &lbl_8201581C;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  param_1[2] = param_2;
  uStack_3c = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  ppuStack_40 = &lbl_82010C6C;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_32 = 0;
  uStack_30 = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  uVar1 = fn_8278E8D0(param_2,&ppuStack_40);
  if (param_1[6] != 0) {
    fn_8267C498(param_1[6]);
  }
  param_1[6] = uVar1;
  ppuStack_40 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_40);
  fn_8267C488(&ppuStack_40);
  uVar1 = fn_8278E7B0(param_2,param_2 + 0x20);
  if (param_1[7] != 0) {
    fn_8267C4F0(param_1[7]);
  }
  param_1[7] = uVar1;
  return param_1;
}

