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
extern unsigned int *auStack_70;
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82862120();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832116B4;


void fn_82864228(int param_1,short *param_2,int *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_70 [112];
  
  *param_2 = 0;
  *param_3 = 0;
  iVar3 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    lVar2 = 0;
    dVar7 = (double)lbl_821AAD20;
    do {
      lVar4 = lVar2 + (ulonglong)*(uint *)(param_1 + 4);
      puVar1 = (undefined1 *)fn_82862120(lVar4,lbl_832116B4);
      fn_82810328(lVar4,0xffffffff832116c0,auStack_70);
      dVar5 = (double)fn_82810280(auStack_70,lVar4 + 0x18);
      dVar6 = (double)fn_82810280(auStack_70,lVar4 + 0x24);
      if (((dVar5 <= dVar7) && (dVar7 < dVar6)) || ((dVar7 < dVar5 && (dVar6 <= dVar7)))) {
        *puVar1 = 1;
        *param_3 = iVar3;
        *param_2 = *param_2 + 1;
      }
      else {
        *puVar1 = 0;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x34;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 8));
  }
  return;
}

