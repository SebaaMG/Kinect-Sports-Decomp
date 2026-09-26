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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_82247000();
extern int fn_822471C8();
extern int fn_82350888();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_82522588();
extern int fn_828AAF70();
extern int fn_828AB870();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_83297810;


void fn_823525D0(int param_1)

{
  int *piVar1;
  char cVar4;
  int iVar3;
  longlong lVar2;
  ulonglong uVar5;
  bool bVar6;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  uVar5 = (ulonglong)lbl_83297810;
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(auStack_28,uVar5,1);
  fn_82522588(&iStack_30,auStack_28);
  if (iStack_30 != 0) {
    cVar4 = fn_828ACCE8(*(undefined4 *)(iStack_30 + 8));
    if (cVar4 != '\0') goto LAB_82352650;
  }
  lbl_831D12D0 = 1;
  fn_82350888(param_1,0x10);
LAB_82352650:
  cVar4 = fn_828AD740(*(undefined4 *)(iStack_30 + 8));
  if (cVar4 != '\0') {
    cVar4 = fn_828ACCE8(*(undefined4 *)(iStack_30 + 8));
    if (cVar4 != '\0') {
      if (*(int **)(iStack_30 + 0x38) == (int *)0x0) {
        cVar4 = '\0';
      }
      else {
        iVar3 = (**(code **)(**(int **)(iStack_30 + 0x38) + 8))();
        cVar4 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x3c))();
      }
      if (cVar4 == '\0') {
        if (*(int *)(iStack_30 + 0x38) == 0) {
          bVar6 = false;
        }
        else {
          lVar2 = fn_82247000();
          bVar6 = lVar2 != 0;
        }
        if (bVar6) {
          if (*(int *)(param_1 + 0x434) == 0) {
            piVar1 = *(int **)(iStack_30 + 0x38);
            if (piVar1 != (int *)0x0) {
              lVar2 = (**(code **)(*piVar1 + 8))(piVar1);
              fn_828AAF70(lVar2 + 0x144,1);
              lVar2 = (**(code **)(*piVar1 + 8))(piVar1);
              fn_828AB870(lVar2 + 0x48,0);
            }
            *(undefined4 *)(param_1 + 0x434) = 1;
          }
        }
        else {
          fn_822471C8(*(undefined4 *)(iStack_30 + 0x38),1);
        }
      }
    }
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

