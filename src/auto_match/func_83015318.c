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
extern int fn_82FA5190();
extern int fn_82FF38E8();
extern int fn_82FF4618();
extern unsigned int iStack_50;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_4c;


undefined8 fn_83015318(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_50;
  uint uStack_4c;
  int *piStack_48;
  
  piVar3 = (int *)(param_1 + 4);
  fn_82FF4618(&iStack_50,piVar3);
  uVar4 = uStack_4c;
  piVar6 = piStack_48;
joined_r0x83015340:
  if (piVar6 == (int *)0x0) {
    if (*piVar3 != -1) {
      fn_82FF38E8(piVar3);
      *piVar3 = -1;
    }
    iVar7 = *(int *)(param_1 + 0x88);
    if (iVar7 != *(int *)(param_1 + 0x8c)) {
      do {
        if (*(int *)(iVar7 + 0x10) != 0) {
          fn_82FA5190(lbl_831BC768);
          *(undefined4 *)(iVar7 + 0x10) = 0;
        }
        *(undefined4 *)(iVar7 + 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x18) = 0;
        iVar7 = iVar7 + 0x1c;
      } while (iVar7 != *(int *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x88);
      fn_82FA5190(lbl_831BC768);
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    iVar7 = 0xd;
    do {
      iVar5 = 0;
      do {
        iVar2 = (iVar7 + iVar5) * 0xc;
        puVar8 = (undefined4 *)(iVar2 + param_1);
        if (*(int *)(iVar2 + param_1) != 0) {
          fn_82FA5190(lbl_831BC768);
          *puVar8 = 0;
        }
        iVar5 = iVar5 + 1;
        puVar8[1] = 0;
        puVar8[2] = 0;
      } while (iVar5 < 2);
      iVar7 = iVar7 + 2;
    } while (iVar7 < 0x11);
    return 1;
  }
  do {
    do {
      piVar1 = (int *)piVar6[3];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x10))(piVar1,0xffffffff831bc7f4);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
    do {
      uVar4 = uVar4 + 1;
      if (0x1e < uVar4) goto joined_r0x83015340;
      piVar6 = *(int **)(uVar4 * 4 + iStack_50);
    } while (piVar6 == (int *)0x0);
  } while( true );
}

