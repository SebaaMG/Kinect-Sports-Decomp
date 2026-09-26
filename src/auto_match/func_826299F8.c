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
extern unsigned int *auStack_30;
extern int fn_82535298();
extern int fn_82536218();
extern int fn_82536288();
extern int fn_825F8418();
extern int fn_825F8580();
extern int fn_825F8BB0();


undefined8 fn_826299F8(int *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 auStack_30 [12];
  
  iVar4 = *param_1;
  iVar6 = *(int *)(iVar4 + 4);
  if (iVar6 == 0x16) {
    if (*(char *)(iVar4 + 0x12) == '\0') {
      fn_825F8418((double)*(float *)(iVar4 + 0xc),*(undefined4 *)(param_2 + 0x858),iVar4 + 8,
                        param_3,*(undefined1 *)(iVar4 + 0x13));
    }
    else {
      auStack_30[0] = *(undefined4 *)(iVar4 + 8);
      auStack_30[0] =
           fn_82535298(auStack_30,*(undefined4 *)(param_2 + 0x84c),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_30);
    }
  }
  else if (iVar6 == 0x17) {
    fn_825F8580((ulonglong)*(uint *)(param_2 + 0x858),
                      (ulonglong)*(uint *)(param_2 + 0x858) + 0x230);
  }
  else if (iVar6 == 0x29) {
    iVar6 = *(int *)(param_2 + 0x858);
    uVar1 = *(undefined4 *)(iVar4 + 0xc);
    iVar2 = 0;
    pcVar3 = (char *)(iVar6 + 0x28);
    do {
      if (*pcVar3 == '\0') {
        iVar5 = iVar2 * 0x2c + iVar6;
        *(undefined4 *)(iVar5 + 0x10) = uVar1;
        *(undefined4 *)(iVar5 + 0x18) = uVar1;
        *(undefined4 *)(iVar5 + 0x1c) = uVar1;
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 8);
        *(undefined1 *)(iVar5 + 0x28) = 1;
        goto LAB_82629ad4;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0x2c;
    } while (iVar2 < 0xc);
    iVar2 = -1;
LAB_82629ad4:
    iVar4 = iVar2 * 0x2c + iVar6;
    *(undefined1 *)(iVar4 + 0x2b) = 0;
    *(undefined1 *)(iVar4 + 0x2a) = 0;
    *(int *)(*(int *)(iVar6 + 0x22c) * 4 + iVar6 + 0x214) = iVar2;
    *(int *)(iVar6 + 0x22c) = *(int *)(iVar6 + 0x22c) + 1;
    *(int *)((*(int *)(iVar6 + 0x27c) + 0x93) * 4 + iVar6) = iVar2;
    *(int *)(iVar6 + 0x27c) = *(int *)(iVar6 + 0x27c) + 1;
  }
  else if (iVar6 == 0x7c) {
    iVar6 = 0;
    piVar7 = (int *)(iVar4 + 0x10);
    do {
      if (piVar7 == (int *)0x0) {
        bVar8 = false;
      }
      else {
        bVar8 = *piVar7 != 0;
      }
      if (!bVar8) {
        return 3;
      }
      fn_825F8BB0(*(undefined4 *)(param_2 + 0x858),piVar7,piVar7[-1],
                        *(undefined4 *)(iVar4 + 8));
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar6 < 6);
  }
  else {
    if (iVar6 != 0x94) {
      return 4;
    }
    fn_82536218((double)*(float *)(iVar4 + 0x28),iVar4 + 8);
  }
  return 3;
}

