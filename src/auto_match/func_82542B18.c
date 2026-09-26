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
extern int fn_82541458();
extern int fn_82542730();
extern int fn_82542780();
extern int fn_825427C0();
extern int fn_82542D90();
extern int fn_82542E08();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637EC0();
extern int fn_82637FF0();


void fn_82542B18(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (((*(int *)(param_3 + 4) == 4) || (*(int *)(param_3 + 4) == 0x40)) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 4) != 0)) {
    fn_82542D90(param_1,param_2,0,*(undefined4 *)(param_3 + 0x30));
  }
  if (((*(int *)(param_3 + 4) == 4) || (*(int *)(param_3 + 4) == 0x40)) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 0xc) != 0)) {
    fn_82541458((double)*(float *)(param_4 + 0x2c),param_1);
    fn_82542D90(param_1,param_2,1,*(undefined4 *)(param_3 + 0x30));
    iVar1 = *param_1;
    iVar3 = *(int *)(param_3 + 4);
    *(uint *)(iVar1 + 0x293c) = *(uint *)(iVar1 + 0x293c) & 0xffffffef;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x200;
    fn_82637B30(*param_1,0);
    fn_82637EC0(*param_1);
    if (iVar3 == 0x40) {
      fn_82637FF0(*param_1,0xffffffffffffffff);
      fn_82637C50(*param_1,1);
      fn_82637CE0(*param_1,0);
    }
  }
  if (((*(int *)(param_3 + 4) == 8) || (*(int *)(param_3 + 4) == 0x80)) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 0x14) != 0)) {
    fn_82542D90(param_1,param_2,2,*(undefined4 *)(param_3 + 0x30));
  }
  if ((*(int *)(param_3 + 4) == 8) && (*(int *)(*(int *)(param_2 + 0x14) + 0x24) != 0)) {
    uVar2 = fn_82542780(param_1);
    fn_82542E08(uVar2,param_2,*(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_3 + 0x30))
    ;
    fn_825427C0(param_1);
  }
  if (((*(int *)(param_3 + 4) == 8) || (*(int *)(param_3 + 4) == 0x80)) &&
     (*(int *)(*(int *)(param_2 + 0x14) + 0x1c) != 0)) {
    fn_82542730(param_1);
    fn_82542D90(param_1,param_2,3,*(undefined4 *)(param_3 + 0x30));
    fn_82637EC0(*param_1,0);
  }
  if (*(int *)(param_3 + 4) == 1) {
    if ((*(int *)(*(int *)(param_2 + 0x14) + 0x2c) != 0) ||
       (*(int *)(*(int *)(param_2 + 0x14) + 0x34) != 0)) {
      fn_82542D90(param_1,param_2,5,*(undefined4 *)(param_3 + 0x30));
      fn_82542D90(param_1,param_2,6,*(undefined4 *)(param_3 + 0x30));
    }
  }
  if ((*(int *)(param_3 + 4) == 0x10) && (*(int *)(*(int *)(param_2 + 0x14) + 0x3c) != 0)) {
    fn_82542D90(param_1,param_2,7,*(undefined4 *)(param_3 + 0x30));
  }
  if ((*(int *)(param_3 + 4) == 0x20) && (*(int *)(*(int *)(param_2 + 0x14) + 0x44) != 0)) {
    fn_82542D90(param_1,param_2,8,*(undefined4 *)(param_3 + 0x30));
  }
  return;
}

