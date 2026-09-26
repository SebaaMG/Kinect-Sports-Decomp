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
extern int fn_8267BE38();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_8200DADC;


void fn_826F2588(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1[9];
  uVar4 = 0;
  *param_1 = &lbl_8200DADC;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      if (uVar4 < 0x10) {
        piVar3 = (int *)((int)param_1 + iVar5 + 0x34);
      }
      else {
        piVar3 = (int *)(param_1[10] + iVar5 + -0xc0);
      }
      if ((*piVar3 == 2) && (*(char *)(piVar3 + 2) != '\0')) {
        puVar2 = (undefined4 *)piVar3[1];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          if ((puVar2 < param_1 + 0x3e) || (param_1 + 0xbe <= puVar2)) {
            fn_8267BE38(puVar2);
          }
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar4 < uVar1);
  }
  fn_8267BE38(param_1[10]);
  *param_1 = &lbl_8200C4D4;
  return;
}

