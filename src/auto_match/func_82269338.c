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
extern int fn_82266230();
extern int fn_82269F20();
extern int fn_823AB478();
extern int fn_82E1DAA0();
extern unsigned int lbl_82196582;
extern unsigned int uStack_40;


void fn_82269338(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char acStack_110 [64];
  char acStack_d0 [144];
  undefined4 uStack_40;
  
  if (*(char *)(param_2 + 0xd8) == '\0') {
    lVar2 = fn_823AB478(param_2);
    uStack_40 = (undefined4)lVar2;
    fn_82266230((double)*(float *)(param_1 + 0x328),(double)*(float *)(param_1 + 0x32c),
                      acStack_110,0xffffffff82196582,lVar2 + 1,lVar2 + 1,param_1 + 0x334,
                      param_1 + 0x338);
    puVar3 = (undefined4 *)fn_82E1DAA0(param_2);
    if (0xf < (uint)puVar3[5]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)&lbl_82196582;
    }
    pcVar4 = acStack_110;
    do {
      if (acStack_d0 <= pcVar4) break;
      cVar1 = pcVar4[(int)puVar3 - (int)acStack_110];
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 == acStack_d0) {
      pcVar4[-1] = '\0';
    }
    fn_82269F20(param_1,acStack_110);
    *(undefined4 *)(param_1 + 0x2b4) = 1;
  }
  return;
}

