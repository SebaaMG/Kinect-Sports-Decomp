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
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_8234E6D8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ACD74;
extern unsigned int lbl_821ACDFC;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;


undefined4 * fn_822C1E00(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined4 *puStack_30;
  
  param_1[1] = 1;
  *param_1 = &lbl_821ACD74;
  param_1[2] = 1;
  if (param_1 + 4 != (undefined4 *)0x0) {
    uStack_4c = *(undefined4 *)(param_2 + 4);
    uStack_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)(param_2 + 0xc);
    puStack_30 = (undefined4 *)fn_8265C9E0(0x14);
    if (puStack_30 == (undefined4 *)0x0) {
      uStack_5c = 0;
      ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_60);
    }
    *puStack_30 = &lbl_821ACDFC;
    puStack_30[1] = uStack_50;
    puStack_30[2] = uStack_4c;
    puStack_30[3] = uStack_48;
    puStack_30[4] = uStack_44;
    fn_8234E6D8(param_1 + 4,auStack_40,param_3,param_4);
  }
  return param_1;
}

