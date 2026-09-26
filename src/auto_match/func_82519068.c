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
extern int fn_825189B8();
extern int fn_82519500();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


undefined8 fn_82519068(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  undefined **ppuStack_48;
  undefined4 uStack_44;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    uStack_44 = 0;
    ppuStack_48 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_48);
  }
  *puVar1 = *(undefined4 *)(param_2 + 4);
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  puVar1[2] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_4;
    puVar1[6] = 0;
    iVar2 = fn_8265C9E0(0x70);
    if (iVar2 == 0) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    puVar1[5] = iVar2;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(puVar1[5] + 4) = puVar1[5];
    *(undefined4 *)(puVar1[5] + 8) = puVar1[5];
    *(undefined1 *)(puVar1[5] + 0x68) = 1;
    *(undefined1 *)(puVar1[5] + 0x69) = 1;
    fn_825189B8(puVar1 + 4,param_4 + 1);
  }
  fn_82519500(param_1,param_2,param_3,puVar1);
  return param_1;
}

