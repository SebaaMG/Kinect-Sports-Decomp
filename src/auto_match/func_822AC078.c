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
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8225C590();
extern int fn_823AB158();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AD740();
extern int fn_82F68CC0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int lbl_83297810;


ulonglong fn_822AC078(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar8;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar9;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  if (*(int *)(*(int *)(param_3 + 0x90) + 4) == 0) {
    return 0;
  }
  if ((*(int *)(*(int *)(param_3 + 0x90) + 8) == 0) ||
     ((*(int *)(param_1 + 0x10) != 0 && (*(int *)(param_1 + 0x10) != 1)))) {
    iVar7 = fn_8225C590();
    uVar2 = *(uint *)(iVar7 + 0x30);
    if (uVar2 < (uint)(*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2)) {
      uVar3 = *(uint *)(uVar2 * 4 + *(int *)(iVar7 + 0x10));
      *(uint *)(iVar7 + 0x30) = uVar2 + 1;
      return (ulonglong)uVar3;
    }
    return 0;
  }
  cVar8 = fn_828AD740();
  iVar7 = *(int *)(param_1 + 0x10);
  if (cVar8 == '\0') {
    iVar7 = iVar7 + -1;
  }
  uVar2 = (uint)LZCOUNT(iVar7) >> 5;
  uVar9 = (ulonglong)lbl_83297810;
  if (uVar9 == 0) {
    uVar9 = fn_82511928();
  }
  fn_825138E0(&iStack_38,uVar9,1);
  if (iStack_38 != 0) {
    uVar1 = *(undefined4 *)(iStack_38 + 8);
    iVar7 = 0;
    uVar4 = fn_828A12E8(uVar1);
    iVar5 = fn_8288F948(uVar4,1);
    iStack_3c = **(int **)(iVar5 + 4);
    while( true ) {
      iVar5 = iStack_3c;
      uVar4 = fn_828A12E8(uVar1);
      iVar6 = fn_8288F948(uVar4,1);
      if (iVar5 == *(int *)(iVar6 + 4)) break;
      iVar7 = *(int *)(iVar5 + 0x14);
      if (uVar2 == 0) {
        cVar8 = fn_8288B760(iVar7);
        if (cVar8 == '\0') goto LAB_822ac168;
      }
      else {
        cVar8 = fn_8288B760(iVar7);
        if (cVar8 != '\0') {
LAB_822ac168:
          if (**(int **)(param_2 + 0x48) == 0) {
            if (*(int *)(iVar7 + 0x470) == 0) {
LAB_822ac1bc:
              iVar5 = 0;
            }
            else {
              iVar5 = iVar7 + 0x88;
            }
          }
          else {
            iVar5 = iVar7 + 0x475;
            if (*(int *)(iVar7 + 0x860) == 0) goto LAB_822ac1bc;
          }
          if (iVar5 != 0) {
            fn_82F68CC0(*(int **)(param_2 + 0x48) + 0x10,iVar5,1000);
            *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x30) = 1;
          }
          break;
        }
      }
      fn_82248B90(&iStack_3c);
    }
    if (((uVar2 == 0) && (iVar7 != 0)) && (cVar8 = fn_8288B760(iVar7), cVar8 == '\0')) {
      if (**(int **)(param_2 + 0x48) == 0) {
        uVar9 = fn_823AB158(iVar7);
      }
      else {
        uVar9 = (ulonglong)*(uint *)(iVar7 + 0x864);
      }
      if ((uVar9 & 0xffffffff) != 0) goto LAB_822ac268;
    }
  }
  iVar7 = fn_8225C590();
  uVar2 = *(uint *)(iVar7 + 0x30);
  if (uVar2 < (uint)(*(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2)) {
    uVar9 = (ulonglong)*(uint *)(uVar2 * 4 + *(int *)(iVar7 + 0x10));
    *(uint *)(iVar7 + 0x30) = uVar2 + 1;
  }
  else {
    uVar9 = 0;
  }
LAB_822ac268:
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return uVar9;
}

