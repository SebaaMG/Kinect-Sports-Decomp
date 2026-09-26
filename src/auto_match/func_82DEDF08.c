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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int iStack0000001c;
extern unsigned int iStack_32c;
extern unsigned int lbl_82144334;
extern unsigned int uStack00000016;
extern unsigned int uStack_2f8;
extern unsigned int uStack_2fc;
extern unsigned int uStack_300;
extern unsigned int uStack_328;
extern unsigned int uStack_330;


void fn_82DEDF08(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uStack00000016;
  int iStack0000001c;
  undefined4 uStack_330;
  int iStack_32c;
  uint uStack_328;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  
  uStack00000016 = param_1;
  iStack0000001c = param_2;
  iVar1 = fn_82CE5410();
  puVar2 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x2c);
  *(undefined2 *)(puVar2 + 1) = 0x2c;
  *puVar2 = &lbl_82144334;
  *(undefined2 *)((int)puVar2 + 6) = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x80000000;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0x80000000;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x80000000;
  uStack_300 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0x80000000;
  uStack_330 = 0;
  iStack_32c = 0;
  uStack_328 = 0x80000000;
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = fn_82CE5410();
  if ((int)(uStack_328 & 0x3fffffff) < iVar1) {
    iVar4 = (uStack_328 & 0x3fffffff) << 1;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&uStack_330,iVar4,4);
  }
  iStack_32c = iVar1;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_82f691f0(uStack_330,0,iVar1 << 2);
}

