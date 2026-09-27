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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82687270();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826DF728();
extern int fn_826DF7B8();
extern int fn_826DFAA8();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E8FF0();
extern unsigned int iStack_48;
extern float lbl_82005718;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_50;


void fn_826E1478(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar5;
  ulonglong uVar4;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uStack_50;
  struct { int first; uint second; } stack_pair_48;

  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_34;

  iVar7 = *(int *)(param_1 + 0x314);
  if (iVar7 == 0) {
    iVar7 = param_1 + 0x28;
  }
  stack_pair_40.first = lbl_821AAD20;
  stack_pair_40.second = lbl_821AAD20;
  fStack_38 = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  *(undefined1 *)(iVar7 + 0x15) = 0;
  if (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) < 2) {
    fn_826E7800(iVar7,2);
  }
  puVar6 = (undefined1 *)(*(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 2;
  uVar3 = CONCAT11(uVar1,uVar2);
  fn_826E8FF0(iVar7,&stack_pair_40.first);
  cVar5 = fn_826E7438(iVar7);
  if (cVar5 != '\0') {
    uStack_50 = (ulonglong)(int)stack_pair_40.first;
    fn_826A9280(param_1 + 0x14,0xffffffff8200cf74,uVar3,(int)stack_pair_40.first,(int)stack_pair_40.second,
                      (int)fStack_38,(int)fStack_34);
  }
  if (stack_pair_40.first < fStack_38) {
    if (stack_pair_40.second < fStack_34) {
      uStack_50 = (ulonglong)CONCAT24(uVar3,(((U64)(uStack_50) >> 32) & 0xFFFFFFFF));
      stack_pair_48.first = 0;
      stack_pair_48.second = 0;
      cVar5 = fn_826DC448(*(undefined4 *)(param_1 + 0x20),&stack_pair_48.first,&uStack_50);
      if (cVar5 != '\0') {
        piVar8 = (int *)(-(uint)(stack_pair_48.first == 0) & stack_pair_48.second);
        if (piVar8 != (int *)0x0) {
          uVar4 = (**(code **)(*piVar8 + 8))(piVar8);
          if ((uVar4 & 0xff00) == 0x8400) {
            fn_826DF728(piVar8,&stack_pair_40.first);
          }
          else {
            uVar4 = (**(code **)(*piVar8 + 8))(piVar8);
            if ((uVar4 & 0xff00) == 0x8100) {
              fn_826DF7B8(piVar8,&stack_pair_40.first);
            }
          }
        }
      }
      if ((stack_pair_48.first == 0) && (stack_pair_48.second != 0)) {
        fn_82687270();
      }
    }
    else {
      fn_826DFAA8(param_1 + 0x14,0xffffffff8200cf2c,
                    (double)((fStack_34 - stack_pair_40.second) * lbl_82005718));
    }
  }
  else {
    fn_826DFAA8(param_1 + 0x14,0xffffffff8200cf50,(double)((fStack_38 - stack_pair_40.first) * lbl_82005718)
                 );
  }
  return;
}
