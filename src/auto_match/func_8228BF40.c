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
extern unsigned int *auStack_22e;
extern unsigned int *auStack_310;
extern int fn_82266230();
extern int fn_82267628();
extern int fn_82517978();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int uStack_230;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_32c;
extern unsigned int uStack_330;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8228BF40(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 auStack_310 [208];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 uStack_230;
  undefined1 auStack_22e [558];
  
  uStack_330 = 0;
  fn_82266230(param_1,(double)*(float *)(param_2 + 0x18),auStack_310,0xffffffff821a9704,0,0,
                  param_2 + 0x10,&uStack_330);
  uStack_240 = *param_3;
  uStack_23c = 0;
  fn_82267628(*(undefined4 *)(param_2 + 0x80),auStack_310);
  for (puVar1 = *(undefined4 **)**(int **)(param_2 + 0x80);
      puVar1 != (undefined4 *)**(int **)(param_2 + 0x80); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[2];
    if (*(int *)(iVar2 + 0x40) == 0) goto LAB_8228bfec;
  }
  iVar2 = 0;
LAB_8228bfec:
  uStack_330 = 0;
  uStack_32c = 0;
  fn_82517978(&uStack_330,*(undefined4 *)(iVar2 + 0x524),*(undefined4 *)(iVar2 + 0x528),0);
  uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_22e,0,0x1fe);
}

