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
extern int fn_824C0AC0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


undefined8 fn_82322518(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_2 + 4);
    puVar2[1] = *(undefined4 *)(param_2 + 4);
    puVar2[2] = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)((int)puVar2 + 0x19) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar4 = puVar2 + 4;
      puVar3 = param_3 + 1;
      puVar2[3] = *param_3;
      puVar2[4] = 0;
      puVar2[5] = 0;
      if (puVar4 != puVar3) {
        uVar1 = puVar2[5];
        puVar2[5] = param_3[2];
        param_3[2] = uVar1;
        uVar1 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
      }
    }
    fn_824C0AC0(param_1,param_2);
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

