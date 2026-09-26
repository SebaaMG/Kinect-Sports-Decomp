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
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern int fn_82532CF8();
extern int fn_8253B250();
extern int fn_8253B420();
extern int fn_8253B5F0();
extern int fn_82555FF8();
extern int fn_82556240();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82195590;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821955A0;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


void fn_8257F0E8(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [96];
  
  piVar3 = (int *)fn_82F6A548();
  piVar4 = (int *)piVar3[1];
  piVar1 = (int *)piVar3[2];
  dVar6 = (double)*(float *)(*piVar3 + 0x828);
  if (piVar4 < piVar1) {
    dVar7 = (double)lbl_82195590;
    dVar8 = lbl_82195598;
    dVar9 = lbl_821955A0;
    do {
      dVar5 = (double)(float)((double)(float)((double)(float)piVar4[5] * dVar6) * dVar7);
      if (piVar4[6] == 0) {
        fn_8253B250((double)(float)((dVar5 - (double)(longlong)(dVar5 - dVar8)) * dVar9),
                        &uStack_90);
      }
      else if (piVar4[6] == 1) {
        fn_8253B420();
      }
      else {
        fn_8253B5F0();
      }
      iVar2 = *(int *)((*(int *)(*piVar3 + 0x44) + 0x20) * 4 + *piVar4);
      if (iVar2 == 0) {
        fn_82556240(piVar4[1],&uStack_90,piVar4[3],piVar4[7],*(undefined4 *)(*piVar3 + 0x40));
      }
      else {
        fn_82F68CC0(auStack_a0,auStack_60,0x10);
        fn_82532CF8(iVar2,piVar4[4],uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68)
        ;
        if (piVar4[2] != 0) {
          fn_82555FF8(piVar4[2],&uStack_90,1,*(undefined4 *)(*piVar3 + 0x40));
        }
      }
      piVar4 = piVar4 + 8;
    } while (piVar4 < piVar1);
  }
  fn_82F6A594();
  return;
}

