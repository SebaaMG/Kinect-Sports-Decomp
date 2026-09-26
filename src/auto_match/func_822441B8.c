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
extern unsigned int *auStack_5c;
extern int fn_8223C610();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int uStack_60;
extern unsigned int uStack_64;


void fn_822441B8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar2;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 auStack_5c [46];
  
  iVar3 = fn_8223C610(param_3,1,0,0);
  if (iVar3 == 0) {
    uVar6 = 0;
    do {
      iVar3 = fn_8223C610(param_3,1,0,0);
      if (iVar3 == 0) {
        uVar2 = 5;
        if (uVar6 != 0x3d) {
          uVar2 = 8;
        }
        uVar4 = fn_8223C610(param_3,uVar2,0,0);
        *(undefined1 *)((int)auStack_5c + (uVar6 - 4)) = uVar4;
      }
      else {
        *(undefined1 *)((int)auStack_5c + (uVar6 - 4)) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x3e);
  }
  else {
    lVar7 = 0xf;
    puVar1 = &uStack_64;
    do {
      puVar5 = puVar1;
      puVar1 = puVar5 + 1;
      *puVar1 = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined2 *)(puVar5 + 2) = 0;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_4 + 4) = 7;
    *(undefined4 *)(param_4 + 0xc) = 0x3e;
    uVar2 = fn_8265C9E0(0x3e);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,0x3e);
  }
  return;
}

