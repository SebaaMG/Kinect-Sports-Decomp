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
extern int fn_82F6CBB0();
extern int fn_82F6CD94();
extern int fn_82F71CD0();
extern int iRam832633b0;
extern int iRam832633b4;
extern unsigned int iStack0000001c;
extern unsigned int lbl_832633AC;
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;


void fn_82F6CC10(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_82F71CD0(8);
  if (iRam832633b4 != 1) {
    iVar2 = -0x7cda0000;
    if (iRam832633b0 == 1) {
      iVar2 = -0x7cda0000;
      KeBugCheck(0);
    }
    *(undefined4 *)(iVar2 + 0x33b0) = 1;
    lbl_832633AC = (undefined1)param_2;
    if (param_1 == 0) {
      piVar4 = lbl_8329F728;
      piVar5 = lbl_8329F728;
      piVar3 = lbl_8329F724;
      piVar6 = lbl_8329F724;
      if (lbl_8329F728 != (int *)0x0) {
        while (piVar6 = piVar6 + -1, piVar4 <= piVar6) {
          if (*piVar6 != 0) {
            if (piVar6 < piVar4) break;
            pcVar1 = (code *)*piVar6;
            *piVar6 = 0;
            (*pcVar1)();
            if ((piVar5 != lbl_8329F728) || (piVar3 != lbl_8329F724)) {
              piVar4 = lbl_8329F728;
              piVar5 = lbl_8329F728;
              piVar3 = lbl_8329F724;
              piVar6 = lbl_8329F724;
            }
          }
        }
      }
      fn_82F6CBB0(0xffffffff83153548,0xffffffff83153554);
    }
    fn_82F6CBB0(0xffffffff83153558,0xffffffff8315355c);
  }
  fn_82F6CD94();
  if (iStack0000001c == 0) {
    KeBugCheck(0);
  }
  return;
}

