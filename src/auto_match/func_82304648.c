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
extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831DF1B0;


void fn_82304648(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar2 = fn_82F6A548();
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  dVar8 = (double)lbl_831DF1B0;
  *(undefined4 *)(iVar2 + 0x1e8) = 0;
  dVar7 = (double)lbl_821922D0;
  *(undefined4 *)(iVar2 + 0x1ec) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 1;
  *(undefined4 *)(iVar2 + 0x1e4) = 4;
  iVar1 = *(int *)(iVar2 + 0x98);
  dVar6 = (double)lbl_821CC160;
  for (iVar3 = *(int *)(iVar2 + 0x94); iVar3 != iVar1; iVar3 = iVar3 + 0x40) {
    dVar4 = (double)fn_82809CB0((double)*(float *)(iVar3 + 0x20));
    dVar5 = (double)fn_82809CB0((double)*(float *)(iVar3 + 0x28));
    if (dVar5 < dVar4) {
      dVar4 = (double)*(float *)(iVar3 + 0x20);
      if (dVar4 <= dVar6) {
        if (dVar8 < dVar4) {
          *(undefined4 *)(iVar2 + 0x1ec) = *(undefined4 *)(iVar3 + 0x1c);
          dVar8 = (double)*(float *)(iVar3 + 0x20);
        }
      }
      else if (dVar4 < dVar7) {
        *(undefined4 *)(iVar2 + 0x1e8) = *(undefined4 *)(iVar3 + 0x1c);
        dVar7 = (double)*(float *)(iVar3 + 0x20);
      }
    }
  }
  fn_82F6A594();
  return;
}

