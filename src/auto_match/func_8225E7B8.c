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
extern int fn_82230040();
extern int fn_8225E9E8();
extern int fn_822C5B18();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


undefined8 fn_8225E7B8(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_2 + 4);
    puVar1[1] = *(undefined4 *)(param_2 + 4);
    puVar1[2] = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar1 + 0x12) = 0;
    *(undefined1 *)((int)puVar1 + 0x49) = 0;
    if (puVar1 + 4 != (undefined4 *)0x0) {
      puVar1[4] = *param_4;
      fn_822C5B18(puVar1 + 6,param_4 + 2);
      fn_822C5B18(puVar1 + 0xc,param_4 + 8);
    }
    fn_8225E9E8(param_1,param_2,param_3,puVar1);
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

