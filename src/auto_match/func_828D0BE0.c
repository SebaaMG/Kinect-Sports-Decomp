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
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828A0B78();
extern int fn_828A0BE8();
extern int fn_828CCCC0();
extern int fn_828D0080();
extern int fn_828D0AF8();
extern unsigned int lbl_8202678C;
extern unsigned int uStack_60;


/* WARNING: Removing unreachable block (ram,0x828d0c38) */

undefined4 *
fn_828D0BE0(undefined4 *param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  char cVar3;
  ulonglong uVar1;
  undefined4 *puVar2;
  int *piVar4;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  
  piVar4 = *(int **)(param_2 + 0x14);
  if (piVar4 != *(int **)(param_2 + 0x18)) {
    do {
      if ((*(char *)(*piVar4 + 8) == '\0') &&
         (cVar3 = fn_828A0BE8(*piVar4 + 9,param_4), cVar3 != '\0')) {
        if (*(char *)(*piVar4 + 8) == '\0') {
          cVar3 = fn_828A0B78(*piVar4 + 0x2d,param_5);
        }
        else {
          cVar3 = '\0';
        }
        if (cVar3 != '\0') {
          *param_1 = 0;
          param_1[1] = 0;
          fn_828CCCC0(param_1,*piVar4,piVar4[1],0);
          return param_1;
        }
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != *(int **)(param_2 + 0x18));
  }
  uVar1 = fn_8265C9E0(0xb0);
  if ((uVar1 & 0xffffffff) == 0) {
    uStack_60 = 0;
  }
  else {
    uStack_60 = fn_828D0080(uVar1,(-(param_3 != '\0') & 7U) + 1,param_4,param_5,param_6);
  }
  puStack_5c = (undefined4 *)fn_8265C9E0(0x10);
  if (puStack_5c == (undefined4 *)0x0) {
    puStack_5c = (undefined4 *)0x0;
  }
  else {
    puStack_5c[3] = uStack_60;
    puStack_5c[1] = 1;
    *puStack_5c = &lbl_8202678C;
    puStack_5c[2] = 1;
  }
  fn_828D0AF8(param_2 + 0x14,&uStack_60);
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = puStack_5c;
  if (param_1 != &uStack_60) {
    param_1[1] = puStack_5c;
    *param_1 = uStack_60;
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    fn_822315A0();
  }
  return param_1;
}

