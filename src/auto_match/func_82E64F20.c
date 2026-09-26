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
extern unsigned int *auStack_4c;
extern int fn_82E4FE40();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E64520();
extern int fn_82E7E7E0();
extern unsigned int uStack_50;


void fn_82E64F20(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uStack_50;
  uint auStack_4c [19];
  
  fn_82E50CB8(param_1 + 0xc);
  uVar2 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    do {
      lVar1 = fn_82E644B8(param_1 + 0x4c,uVar2,&uStack_50);
      piVar5 = (int *)(-(uint)(lVar1 != 0) & uStack_50);
      if (piVar5 != (int *)0x0) {
        if (*piVar5 != 0) {
          fn_82E4FE40();
        }
        uVar4 = 0;
        *piVar5 = 0;
        if (piVar5[0x1b] != 0) {
          do {
            lVar1 = fn_82E64450(piVar5 + 1,uVar4,auStack_4c);
            uVar3 = -(ulonglong)(lVar1 != 0) & (ulonglong)auStack_4c[0];
            if (uVar3 != 0) {
              fn_82E7E7E0(uVar3 + 0x18);
              fn_82E4FE40(uVar3);
            }
            uVar4 = uVar4 + 1;
          } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)piVar5[0x1b]);
        }
        fn_82E64520(piVar5,1);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb4));
  }
  fn_82E50F10(param_1 + 0xc);
  return;
}

