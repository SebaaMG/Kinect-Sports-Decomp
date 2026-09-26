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
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;
extern unsigned int lbl_83264400;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82FECAA8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = lbl_832643F4;
  do {
    puVar1 = lbl_83264400;
    if (piVar3 == lbl_832643F8) {
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        if (puVar1[5] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(puVar1[5] + 0xfc) + 8);
        }
        if (iVar4 == *param_1) break;
        puVar1 = (undefined4 *)*puVar1;
      }
      return puVar1;
    }
    puVar1 = (undefined4 *)*piVar3;
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if (puVar2[5] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(puVar2[5] + 0xfc) + 8);
      }
      if (iVar4 == *param_1) {
        param_1[4] = (int)puVar2;
        param_1[3] = (int)puVar1;
        return puVar2;
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

