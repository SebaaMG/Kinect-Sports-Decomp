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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82522588();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_34;
extern unsigned int lbl_82191FC8;


void fn_8236B3E8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  double dVar7;
  int aiStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x30);
  if (uVar5 != *(uint *)(param_1 + 0x34)) {
    dVar7 = (double)lbl_82191FC8;
    do {
      piVar3 = (int *)fn_82522588(auStack_38,uVar5);
      iVar2 = *piVar3;
      if ((*(int *)(iVar2 + 0x2b4) != 0) && (iVar4 = *(int *)(iVar2 + 0x360), iVar4 != 0)) {
        uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x2b4) + 0xc);
        *(undefined1 *)(iVar4 + 0x18) = 1;
        *(undefined4 *)(iVar4 + 0x1c) = uVar1;
        *(float *)(iVar4 + 0x20) = (float)dVar7;
      }
      iVar4 = *(int *)(iVar2 + 0x260);
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      *(int *)(iVar2 + 0x260) = iVar4;
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      uVar5 = uVar5 + 8;
    } while ((uVar5 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34));
  }
  piVar3 = (int *)(param_1 + 0x1008);
  if (piVar3 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    bVar6 = *piVar3 != 0;
  }
  if (bVar6) {
    aiStack_40[0] = *piVar3;
    aiStack_40[0] =
         fn_82535298(aiStack_40,**(undefined4 **)(param_1 + 0xfe0),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(aiStack_40);
  }
  *(undefined4 *)(param_1 + 0xfa4) = 1;
  return;
}

