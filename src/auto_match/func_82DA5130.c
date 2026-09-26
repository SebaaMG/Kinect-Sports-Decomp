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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_82D80A40();
extern int fn_82D80A50();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DA4100();
extern int fn_82DA4850();
extern int fn_82DBA1E0();
extern int fn_82DBC7D0();
extern int fn_83081170();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_70;


void fn_82DA5130(int *param_1,int *param_2,longlong param_3,int param_4,ulonglong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  
  *(int *)(param_4 + 0x94) = *(int *)(param_4 + 0x94) + 1;
  dVar5 = (double)fn_82D80A50(param_4);
  dVar6 = (double)fn_82D80A40(param_4);
  fStack_68 = (float)(dVar5 - dVar6);
  fStack_64 = lbl_821AAD20;
  if (fStack_68 != lbl_821AAD20) {
    fStack_64 = lbl_82002AE0 / fStack_68;
  }
  iVar1 = *(int *)(param_4 + 0x78);
  *(undefined8 *)(iVar1 + 0x50) = uStack_70;
  *(ulonglong *)(iVar1 + 0x58) = CONCAT44(fStack_68,fStack_64);
  if ((param_5 & 1) != 0) {
    lVar3 = param_3;
    piVar4 = param_2;
    if (0 < (int)param_3) {
      do {
        iVar1 = *piVar4;
        if (*(char *)(iVar1 + 0xe8) != '\x05') {
          uVar2 = fn_82D80A40(param_4);
          fn_83081170(uVar2,iVar1 + 0xf0);
        }
        lVar3 = lVar3 + -1;
        piVar4 = piVar4 + 1;
      } while (lVar3 != 0);
    }
    fn_82DBC7D0(&uStack_70,param_2,param_3,0xe0);
    fn_82DBA1E0(*(undefined4 *)(param_4 + 0x78),param_2,param_3);
  }
  if ((param_5 & 2) != 0) {
    fn_82DA4850(param_2,param_3,param_4);
  }
  if ((param_5 & 4) == 0) {
    if ((param_5 & 1) != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,2);
    }
  }
  else {
    fn_82DA4100(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x78),0xffffffff82da3ef8,0);
  }
  lVar3 = (ulonglong)*(uint *)(param_4 + 0x94) - 1;
  *(int *)(param_4 + 0x94) = (int)lVar3;
  if ((lVar3 == 0) && (*(char *)(param_4 + 0x9c) == '\0')) {
    if (*(int *)(param_4 + 0x8c) != 0) {
      fn_82D80C18(param_4);
    }
    if ((*(int *)(param_4 + 0xa4) == 1) && (*(int *)(param_4 + 0x90) != 0)) {
      fn_82D80C30(param_4);
    }
  }
  return;
}

