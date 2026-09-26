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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_82359698();
extern int fn_8236B008();
extern int fn_8236B8B0();
extern int fn_823CC298();
extern int fn_82508078();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D19C8;
extern unsigned int lbl_831D1AE4;


void fn_823D7F10(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar4 = param_2[4];
  if (iVar4 == 1) {
    *(undefined4 *)((param_2[3] * 7 + param_2[2]) * 0xc + param_1 + 0x374) = lbl_831D19C8;
    fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x10);
  }
  else if (iVar4 == 2) {
    *(undefined4 *)((param_2[1] * 7 + *param_2) * 0xc + param_1 + 0x374) = lbl_831D19C8;
  }
  else if (iVar4 == 3) {
    iVar4 = param_2[3] * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + 1;
    if (*(char *)(param_2 + 5) == '\0') {
      fn_8236B008(param_1,param_2[3]);
      iVar4 = **(int **)(param_1 + 8);
      piVar5 = *(int **)(param_2[3] * 4 + iVar4);
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),param_2[2]);
      piVar5 = *(int **)(param_2[1] * 4 + iVar4);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),*param_2);
      fn_822AF138(*(undefined4 *)(*(int *)(iVar3 + 0x2c) * 4 + *(int *)(param_1 + 0xc)),6);
      fn_822AF138(*(undefined4 *)(*(int *)(iVar4 + 0x2c) * 4 + *(int *)(param_1 + 0xc)),6);
      fn_822AF138(*(undefined4 *)(iVar3 + 0x110),6);
      fn_822AF138(*(undefined4 *)(iVar4 + 0x110),7);
      uVar2 = lbl_831D1AE4;
      uVar1 = lbl_8218E8E8;
      *(undefined4 *)(param_1 + 0xef8) = 9;
      *(undefined4 *)(param_1 + 0xefc) = uVar2;
      *(undefined4 *)(param_1 + 0x1028) = 2;
      *(undefined4 *)(param_1 + 0x1024) = uVar1;
      fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x13);
      if (*(int *)(param_1 + 0x4c0) == 0) {
        if (*(char *)((int)param_2 + 0x15) == '\0') {
          uVar6 = 0xffffffff821b65cc;
        }
        else {
          uVar6 = 0xffffffff821b65dc;
        }
        fn_82508078(*(undefined4 *)(param_1 + 0xa4),uVar6,0);
      }
      uVar6 = 6;
    }
    else {
      iVar4 = param_2[3];
      *(undefined4 *)(param_1 + 0xee4) = 0xffffffff;
      *(int *)(param_1 + 0xee0) = iVar4;
      fn_823CC298(*(undefined4 *)(param_1 + 0x4b8),0x12);
      iVar4 = **(int **)(param_1 + 8);
      piVar5 = *(int **)(param_2[3] * 4 + iVar4);
      iVar3 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),param_2[2]);
      piVar5 = *(int **)(param_2[1] * 4 + iVar4);
      iVar4 = fn_822ABA88(*(undefined4 *)(piVar5[4] * 4 + *piVar5),*param_2);
      fn_822AF138(*(undefined4 *)(*(int *)(iVar3 + 0x2c) * 4 + *(int *)(param_1 + 0xc)),6);
      fn_822AF138(*(undefined4 *)(*(int *)(iVar4 + 0x2c) * 4 + *(int *)(param_1 + 0xc)),6);
      fn_822AF138(*(undefined4 *)(iVar3 + 0x110),6);
      fn_822AF138(*(undefined4 *)(iVar4 + 0x110),7);
      uVar2 = lbl_831D1AE4;
      uVar1 = lbl_8218E8E8;
      *(undefined4 *)(param_1 + 0xef8) = 10;
      *(undefined4 *)(param_1 + 0xefc) = uVar2;
      *(undefined4 *)(param_1 + 0x1028) = 2;
      *(undefined4 *)(param_1 + 0x1024) = uVar1;
      if (*(int *)(param_1 + 0x4c0) == 0) {
        if (*(char *)((int)param_2 + 0x15) == '\0') {
          uVar6 = 0xffffffff821b65cc;
        }
        else {
          uVar6 = 0xffffffff821b65bc;
        }
        fn_82508078(*(undefined4 *)(param_1 + 0xa4),uVar6,0);
      }
      uVar6 = 7;
    }
    fn_8236B8B0(param_1,param_2[3],uVar6);
    *(undefined1 *)(param_1 + 0xd51) = 0;
    *(undefined1 *)(param_1 + 0xd52) = 0;
    *(undefined1 *)(param_1 + 0xd50) = 0;
    fn_82359698(param_1,0xf);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
    if (uVar7 != *(uint *)(param_1 + 0x34)) {
      dVar8 = (double)lbl_821CC160;
      do {
        piVar5 = (int *)fn_82522588(auStack_40,uVar7);
        iVar4 = *piVar5;
        iVar3 = *(int *)(iVar4 + 0x290);
        *(undefined4 *)(iVar4 + 0x2a4) = 0;
        if (iVar3 != 0x14) {
          if ((iVar3 == 5) || (iVar3 == 0x11)) {
            *(undefined4 *)(iVar4 + 0x368) = 1;
          }
          *(float *)(iVar4 + 0x29c) = (float)dVar8;
          *(undefined4 *)(iVar4 + 0x364) = 0;
          *(undefined4 *)(iVar4 + 0x290) = 0x14;
          *(undefined4 *)(iVar4 + 0x2ac) = 0;
        }
        iVar3 = *(int *)(iVar4 + 0x260);
        *(undefined4 *)(iVar4 + 0x294) = 1;
        if (iVar3 < 2) {
          iVar3 = 2;
        }
        *(int *)(iVar4 + 0x260) = iVar3;
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        uVar7 = uVar7 + 8;
      } while ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34));
    }
  }
  return;
}

