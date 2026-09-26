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
extern int fn_8225F160();
extern int fn_82358C90();
extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_8242CB38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iStack_30;
  uint uStack_2c;
  
  iVar2 = fn_8225F160();
  uVar1 = *(uint *)(iVar2 + 0x5c);
  if (uVar1 == 1) {
    fn_82358C90(param_1,param_2,param_3);
  }
  else {
    piVar3 = (int *)fn_8251F720(param_3,0);
    if (*piVar3 != 0) {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          iStack_30 = *piVar3;
          uStack_2c = uVar4;
          fn_824BF8A8(param_2,&iStack_30);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
    }
    fn_8251FA58(piVar3);
  }
  return;
}

