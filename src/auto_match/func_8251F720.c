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
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern int fn_825200F0();
extern int fn_8256BF18();
extern int fn_8256CC50();
extern int fn_8259BB38();
extern int fn_82A1EFC0();
extern unsigned int lbl_8329618C;
extern unsigned int uRam832767b4;
extern unsigned int uStack_1ac;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


undefined8 fn_8251F720(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uStack_1ac;
  int aiStack_1a8 [2];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [308];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  uRam832767b4 = 1;
  iVar1 = fn_8256BF18();
  aiStack_1a8[0] = *param_1;
  fn_8259BB38(&uStack_1ac,iVar1,aiStack_1a8);
  uVar2 = (ulonglong)uStack_1ac;
  if (uVar2 != *(uint *)(iVar1 + 4)) {
    if (lbl_8329618C == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = *(undefined4 **)(lbl_8329618C + 4);
    }
    fn_8256CC50(iVar1,uVar2 + 0x10,uVar2 + 0x28,*puVar3);
  }
  if (*param_1 == 0) {
    uRam832767b4 = 0;
    return 0;
  }
  fn_825200F0(auStack_1a0,param_1);
  uStack_4c = 0;
  uStack_48 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_180,0,0x148);
}

