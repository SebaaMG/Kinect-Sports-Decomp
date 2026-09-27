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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_230;
extern unsigned int *auStack_270;
extern float fRam831d1bc0;
extern int fn_8229D4E8();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_823807F0();
extern int fn_82528EE0();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821CC160;


void fn_8238DD50(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  double dVar6;
  longlong alStack_280 [2];
  undefined1 auStack_270 [64];
  undefined1 auStack_230 [512];
  
  *(undefined4 *)(param_1 + 0xc) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x658) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) {
    fn_823807F0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x664),0x1c);
  }
  iVar1 = *(int *)(param_1 + 8);
  if ((*(int *)(iVar1 + 0xa0) == 0) || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)) {
    piVar5 = *(int **)**(undefined4 **)(iVar1 + 8);
    iVar2 = *(int *)(piVar5[4] * 4 + *piVar5);
    if (*(int *)(iVar2 + 0x1c) != 0) {
      lVar3 = fn_822ABA88(iVar2,0);
      dVar6 = (double)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
      fn_82358FD8(iVar1,auStack_230,0x100,0xffffffff821aa564);
      alStack_280[0] = (longlong)(int)dVar6;
      fn_82528EE0(auStack_270,0x20,0xffffffff821aa638,(int)dVar6);
      iVar1 = *(int *)(*(int *)(iVar1 + 0xd4) + 0x14);
      dVar6 = (double)fRam831d1bc0;
      if (*(int *)(iVar1 + 0x14) == 0) {
        fn_8229D4E8(iVar1,lVar3 + 0x30,auStack_230,auStack_270);
        *(float *)(iVar1 + 0x10) = (float)dVar6;
        *(undefined4 *)(iVar1 + 0xc) = 1;
      }
      alStack_280[0] = CONCAT44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x324),((uint)(alStack_280[0])))
      ;
      uVar4 = fn_82535298(alStack_280,**(undefined4 **)(*(int *)(param_1 + 8) + 0x9b8),
                                0xffffffff83296bc0,0xffffffff83296bd0);
      alStack_280[0] = CONCAT44(uVar4,((uint)(alStack_280[0])));
      fn_82536288(alStack_280);
    }
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x90) + 0x510) = 0;
  return;
}

