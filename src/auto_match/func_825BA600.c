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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_823AB158();
extern int fn_825200F0();
extern int fn_82522ED8();
extern int fn_82529A38();
extern int fn_8255BB98();
extern int fn_8255C2E8();
extern int fn_8255C3D8();
extern int fn_82564348();
extern int fn_82587AC0();
extern int fn_825B6CE0();
extern int fn_827D6968();
extern int fn_8288F9A0();
extern int fn_828A12E8();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_83265A24;


void fn_825BA600(int param_1,int param_2)

{
  char cVar8;
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [80];
  
  uVar7 = *(undefined4 *)(param_2 + 0xd48);
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_825200F0(auStack_50,param_1 + 0x34);
    cVar8 = fn_827D6968(lbl_83265A24,auStack_50,0xffffffffffffffff);
    if (cVar8 != '\0') {
      lVar1 = fn_825B6CE0(param_1 + 0x34);
      uVar2 = fn_8255C3D8(lVar1,param_1 + 4,param_2);
      cVar8 = fn_8255C2E8(param_1,param_2,uVar2);
      if (cVar8 != '\0') {
        uVar2 = fn_82587AC0(lVar1 + 0x4b);
        iVar3 = fn_82529A38(uVar2,lVar1,0);
        if (iVar3 != 0) {
          if (*(short *)(param_1 + 10) == 0) {
            piVar4 = (int *)fn_8255BB98(auStack_60,uVar7);
            iVar5 = *piVar4;
            if (iStack_5c != 0) {
              fn_822315A0(iStack_5c);
            }
            if (iVar5 != 0) {
              piVar4 = (int *)fn_8255BB98(auStack_58,uVar7);
              uVar7 = *(undefined4 *)(*piVar4 + 8);
              uVar2 = fn_828A12E8(uVar7);
              iVar5 = fn_8288F9A0(uVar2,1);
              iVar5 = **(int **)(iVar5 + 4);
              if (iStack_54 != 0) {
                fn_822315A0(iStack_54);
              }
              uVar2 = fn_828A12E8(uVar7);
              iVar6 = fn_8288F9A0(uVar2,1);
              if (iVar5 != *(int *)(iVar6 + 4)) {
                uVar7 = fn_823AB158(*(undefined4 *)(iVar5 + 0x14));
                *(undefined4 *)(iVar3 + 0xb30) = uVar7;
              }
            }
          }
          if ((*(char *)(param_1 + 0x13) != '\0') || (*(int *)(param_1 + 0x38) != 0)) {
            fn_82564348(iVar3);
          }
        }
      }
      fn_82522ED8(lVar1);
    }
  }
  return;
}

