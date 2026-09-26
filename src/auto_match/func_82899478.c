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
extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82899478(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  puVar3 = (undefined4 *)((param_3 + 2) * 4 + param_2);
  lVar2 = 4;
  puVar4 = (undefined4 *)(param_1 + 8);
  do {
    if ((*(int *)(param_1 + 4) == 9) && (*(int *)(param_2 + 4) == 7)) {
      *(undefined4 *)(param_1 + 4) = 7;
      lVar5 = 4;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
      puVar6 = (undefined4 *)(param_1 + 8);
      do {
        if (4 < *(uint *)(param_1 + 0x18)) {
          uVar1 = fn_8265C9E0(*(undefined4 *)(param_2 + 0xc));
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar1,0,*(undefined4 *)(param_2 + 0xc));
        }
        *puVar6 = 0;
        lVar5 = lVar5 + -1;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0);
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    }
    if (*(int *)(param_1 + 4) == 7) {
      if (*(uint *)(param_1 + 0x18) < 5) {
LAB_82899560:
        *puVar4 = *puVar3;
      }
      else {
        fn_82F68CC0(*puVar4,*puVar3);
      }
    }
    else {
      if (*(int *)(param_1 + 4) != 8) goto LAB_82899560;
      fn_82897ED8(puVar4,puVar3);
    }
    lVar2 = lVar2 + -1;
    puVar4 = puVar4 + 1;
    if (lVar2 == 0) {
      return;
    }
  } while( true );
}

