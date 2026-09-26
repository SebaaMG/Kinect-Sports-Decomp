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
extern int fn_82522D98();
extern int fn_82577628();
extern int fn_8265C9E0();
extern unsigned int lbl_821C8F70;
extern unsigned int lbl_821CACEC;


void fn_82575C78(double param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  
  iVar3 = fn_82577628(param_4,param_7,param_4,param_5,in_stack_00000054,in_stack_0000005c);
  *(char *)(iVar3 + 0x1a4) = (char)param_5;
  *(undefined1 *)(iVar3 + 0x1a5) = param_6;
  *(undefined1 *)(iVar3 + 0x1a6) = 0;
  *(int *)(iVar3 + 0x1bc) = param_2;
  *(undefined4 *)(iVar3 + 0x1b4) = 0;
  if (*(int *)(param_2 + 0xa0) == 0) {
    puVar4 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[1] = param_2;
      puVar4[2] = 0;
      *puVar4 = &lbl_821C8F70;
    }
    *(undefined4 **)(param_2 + 0xa0) = puVar4;
  }
  *(undefined4 *)(iVar3 + 0x1ac) = *(undefined4 *)(param_2 + 0xa0);
  iVar1 = **(int **)(*(int *)(param_2 + 0xa0) + 4);
  puVar4 = (undefined4 *)fn_8265C9E0(0x1c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = iVar3;
    *puVar4 = &lbl_821CACEC;
    uVar2 = *param_3;
    puVar4[2] = (float)param_1;
    puVar4[3] = uVar2;
    puVar4[5] = iVar1 + 0x7fc;
    puVar4[4] = 0xfffffffe;
    puVar4[6] = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

