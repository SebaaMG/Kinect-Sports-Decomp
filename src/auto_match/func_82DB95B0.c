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
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DA4100();
extern int fn_82DB6508();
extern int fn_82DBA1E0();
extern int fn_82DBC7D0();
extern int fn_83081170();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


void fn_82DB95B0(int *param_1,int *param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_58;
  
  iVar1 = *(int *)(param_4 + 0x78);
  *(int *)(param_4 + 0x94) = *(int *)(param_4 + 0x94) + 1;
  uVar3 = *(undefined8 *)(iVar1 + 0x50);
  uStack_58 = *(undefined8 *)(iVar1 + 0x58);
  fStack_68 = (float)param_1[6] - (float)param_1[5];
  fStack_64 = lbl_821AAD20;
  if (fStack_68 != lbl_821AAD20) {
    fStack_64 = lbl_82002AE0 / fStack_68;
  }
  *(undefined8 *)(iVar1 + 0x50) = uStack_70;
  *(ulonglong *)(iVar1 + 0x58) = CONCAT44(fStack_68,fStack_64);
  if ((param_5 & 1) != 0) {
    lVar4 = param_3;
    piVar5 = param_2;
    piVar2 = param_1;
    if (0 < (int)param_3) {
      do {
        if (*(char *)(*piVar5 + 0xe8) != '\x05') {
          piVar2 = (int *)fn_83081170((double)(float)param_1[5],piVar2,*piVar5 + 0xf0);
        }
        lVar4 = lVar4 + -1;
        piVar5 = piVar5 + 1;
      } while (lVar4 != 0);
    }
    fn_82DBC7D0(&uStack_70,param_2,param_3,0xe0);
    fn_82DBA1E0(*(undefined4 *)(param_4 + 0x78),param_2,param_3);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,1);
  if ((param_5 & 2) != 0) {
    fn_82DB6508(param_1,param_2,param_3,param_4,0);
  }
  if ((param_5 & 4) == 0) {
    if ((param_5 & 1) != 0) {
      (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4,2);
    }
  }
  else {
    fn_82DA4100(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x78),0xffffffff82db6c98,0);
  }
  lVar4 = (ulonglong)*(uint *)(param_4 + 0x94) - 1;
  *(int *)(param_4 + 0x94) = (int)lVar4;
  if ((lVar4 == 0) && (*(char *)(param_4 + 0x9c) == '\0')) {
    if (*(int *)(param_4 + 0x8c) != 0) {
      fn_82D80C18(param_4);
    }
    if ((*(int *)(param_4 + 0xa4) == 1) && (*(int *)(param_4 + 0x90) != 0)) {
      fn_82D80C30(param_4);
    }
  }
  iVar1 = *(int *)(param_4 + 0x78);
  *(undefined8 *)(iVar1 + 0x50) = uVar3;
  *(undefined8 *)(iVar1 + 0x58) = uStack_58;
  return;
}

