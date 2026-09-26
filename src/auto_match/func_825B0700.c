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
extern unsigned int *auStack_4c;
extern int fn_8284D780();
extern int fn_82850A70();
extern int fn_82850A78();
extern int fn_82850D08();
extern unsigned int lbl_8218E900;
extern unsigned int lbl_8218EA00;
extern unsigned int lbl_8218EB00;
extern unsigned int uStack_50;


void fn_825B0700(undefined4 *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  if (param_1[4] != 0) {
    fn_8284D780(*param_1,&uStack_50);
    lVar2 = fn_82850A70(uStack_50);
    lVar7 = 0;
    if (0 < lVar2) {
      iVar6 = 0;
      do {
        uVar5 = 1;
        uVar1 = *(uint *)(iVar6 + param_1[4]);
        if (uVar1 != 0) {
          iVar3 = 0;
          iVar4 = 0;
          do {
            if (((*(uint *)(&lbl_8218E900 + iVar4) & uVar1) != 0) &&
               ((*(byte *)(*(int *)(&lbl_8218EA00 + iVar4) + param_2) >>
                 (*(uint *)(&lbl_8218EB00 + iVar4) & 0x3f) & 0xf) !=
                *(byte *)(iVar6 + param_1[4] + iVar3 + 4))) {
              uVar5 = 0;
              break;
            }
            iVar4 = iVar4 + 4;
            iVar3 = iVar3 + 1;
          } while (iVar4 < 0x100);
        }
        fn_82850A78(uStack_50,lVar7,auStack_4c);
        fn_82850D08(auStack_4c[0],uVar5,param_1[1],param_3);
        lVar7 = lVar7 + 1;
        iVar6 = iVar6 + 0x44;
      } while ((int)lVar7 < (int)lVar2);
    }
  }
  return;
}

