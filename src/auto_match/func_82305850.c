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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822C4448();
extern int fn_82305EC8();
extern int fn_82306100();
extern int fn_823691B0();
extern int fn_823692A0();
extern int fn_823D9758();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_82305850(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar8;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar9;
  uint uVar10;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_f1;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [160];
  
  iVar8 = fn_82F6DA24();
  iVar2 = *(int *)(*(int *)(iVar8 + 0x10) + 0x9a0);
  if (iVar2 != 0) {
    iVar9 = (*(int *)(*(int *)(iVar8 + 0xc) + 0x2c) * 7 + *(int *)(*(int *)(iVar8 + 0xc) + 0x28)) *
            0x30 + *(int *)(iVar8 + 0x10);
    uVar1 = *(undefined1 *)(iVar9 + 0x10b4);
    *(undefined1 *)(iVar9 + 0x10b4) = 0;
    uVar7 = extraout_f1;
    uVar4 = fn_823691B0(*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0xc),auStack_a0,
                              0);
    *(undefined1 *)(iVar9 + 0x10b4) = uVar1;
    uVar5 = fn_823691B0(*(undefined4 *)(iVar8 + 0x10),iVar2,auStack_b0,0);
    if (((uVar5 & uVar4) != 0) &&
       ((iVar9 = fn_823D9758(*(undefined4 *)(iVar8 + 0x10)), iVar9 == 0 ||
        (iVar9 = fn_823D9758(*(undefined4 *)(iVar8 + 0x10)), iVar9 == 0)))) {
      uVar3 = *(undefined4 *)(iVar8 + 0x10);
      uVar10 = fn_823692A0(uVar3,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
      if ((uVar10 != 0) && ((-(uint)(*(int *)(*(int *)(uVar10 + 0x110) + 0x1c) == 3) & uVar10) != 0)
         ) {
        fn_822C4448(auStack_a0,iVar2,uVar3,1,1);
        uVar6 = fn_82305EC8(uVar7,*(undefined4 *)(iVar8 + 0x10),
                                  *(undefined4 *)(*(int *)(iVar8 + 0xc) + 0x2c));
        if ((int)uVar6 != 0) {
          uVar7 = 1;
          goto LAB_82305a1c;
        }
        if (param_3 != 0) {
          uVar7 = fn_82306100(uVar7,uVar6,param_4);
          goto LAB_82305a1c;
        }
      }
    }
  }
  uVar7 = 0;
LAB_82305a1c:
  fn_82F6DCBC(uVar7);
  return;
}

