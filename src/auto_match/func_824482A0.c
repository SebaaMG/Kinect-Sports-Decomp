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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_5c;
extern int fn_8242DE00();
extern int fn_8244C8E0();
extern int fn_82528FA8();
extern int fn_8252CAF8();
extern int fn_82536690();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_68;


void fn_824482A0(int *param_1)

{
  undefined8 in_r7;
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int aiStack_70 [2];
  ulonglong uStack_68;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [80];
  
  uVar1 = 0;
  dVar5 = (double)lbl_82193E50;
  dVar4 = (double)lbl_821CA460;
  do {
    uVar2 = 0;
    if (*(int *)(param_1[0x12] + 0x1c) != 0) {
      do {
        uStack_68 = (ulonglong)uVar2;
        dVar3 = (double)(*(float *)(param_1[0x12] + 0x18) * (float)uStack_68 +
                        *(float *)(param_1[0x12] + 0x14));
        (**(code **)(*param_1 + 0x1c))(dVar3,auStack_50,param_1);
        (**(code **)(*param_1 + 0x20))(dVar3,auStack_60,param_1);
        fStack_5c = (float)((double)fStack_5c + dVar5);
        aiStack_70[0] =
             fn_82528FA8(dVar4,*(undefined4 *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c)
                               ,(ulonglong)(uint)param_1[0x12] + 0x10,auStack_50,auStack_60,in_r7,0)
        ;
        if (*(int *)(aiStack_70[0] + 400) != 0) {
          *(undefined4 *)(**(int **)(*(int *)(aiStack_70[0] + 400) + 400) + 0x118) = 1;
        }
        fn_8252CAF8(aiStack_70[0],0,0);
        fn_82536690(param_1[0x12],aiStack_70);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1[0x12] + 0x1c));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  fn_8244C8E0(param_1);
  fn_8242DE00(*(undefined4 *)param_1[0x10],((undefined4 *)param_1[0x10])[0x45]);
  return;
}

