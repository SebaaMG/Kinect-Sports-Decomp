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
extern int fn_82F69148();
extern int fn_83016C90();
extern int fn_8301B2D0();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


undefined8 fn_8301AF50(longlong param_1,int param_2,ulonglong param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iStack_50;
  uint uStack_4c;
  int *piStack_48;
  
  if ((param_3 & 0xffffffff) == 0) {
    fn_83016C90(&iStack_50,param_1 + 0x24);
    if (piStack_48 != (int *)0x0) {
      do {
        do {
          iVar1 = piStack_48[2];
          piVar3 = *(int **)(iVar1 + 0x34);
          piVar2 = *(int **)(iVar1 + 0x38);
          if (piVar3 != piVar2) {
            do {
              if (*piVar3 == param_2) break;
              piVar3 = piVar3 + 3;
            } while (piVar3 != piVar2);
            if (piVar3 != piVar2) {
              if (piVar3 < piVar2 + -3) {
                fn_82F69148(piVar3,piVar3 + 3,
                             ((uint)((int)piVar2 + (-0xd - (int)piVar3)) / 0xc + 1) * 0xc);
              }
              *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + -0xc;
            }
          }
          piStack_48 = (int *)*piStack_48;
        } while (piStack_48 != (int *)0x0);
        do {
          uStack_4c = uStack_4c + 1;
          if (0xc0 < uStack_4c) {
            if (piStack_48 == (int *)0x0) {
              return 1;
            }
            break;
          }
          piStack_48 = *(int **)(uStack_4c * 4 + iStack_50);
        } while (piStack_48 == (int *)0x0);
      } while( true );
    }
  }
  else {
    fn_8301B2D0(param_3 + 0x34);
  }
  return 1;
}

