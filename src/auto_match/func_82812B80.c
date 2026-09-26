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
extern int fn_82813498();
extern int fn_82813A78();
extern int fn_82813AE0();
extern int fn_82813D80();
extern int fn_8281F720();
extern unsigned int lbl_8320A4D4;


void fn_82812B80(int param_1)

{
  int iVar1;
  char cVar4;
  ulonglong uVar2;
  longlong lVar3;
  double dVar5;
  int aiStack_20 [2];
  
  cVar4 = fn_82813A78();
  if (cVar4 != '\0') {
    uVar2 = (ulonglong)lbl_8320A4D4;
    if (uVar2 == 0) {
      uVar2 = fn_82813498();
    }
    dVar5 = (double)fn_8281F720(uVar2,1);
    *(float *)(param_1 + 0x10) = (float)dVar5;
    while (*(char *)(param_1 + 0x15) != '\0') {
      cVar4 = fn_82813AE0((ulonglong)*(uint *)(param_1 + 0xc) + 0x88,aiStack_20);
      iVar1 = aiStack_20[0];
      if (cVar4 != '\0') {
        cVar4 = fn_82813A78(aiStack_20[0]);
        if (cVar4 == '\0') {
          *(undefined1 *)(iVar1 + 0x15) = 0;
          lVar3 = (ulonglong)*(uint *)(param_1 + 0xc) + 0x48;
        }
        else {
          lVar3 = (ulonglong)*(uint *)(param_1 + 0xc) + 0x88;
        }
        fn_82813D80(lVar3,aiStack_20);
      }
    }
  }
  return;
}

