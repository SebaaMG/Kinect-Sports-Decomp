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
extern int fn_82369668();
extern int fn_8236A360();
extern int fn_8236A6E8();
extern int fn_823C4C00();
extern int fn_823CDF08();
extern int fn_823D7F10();
extern int fn_824FE498();
extern unsigned int lbl_821CC160;


void fn_823CD698(int param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,int param_7)

{
  int iVar1;
  
  fn_824FE498(*(undefined4 *)(param_1 + 0xe10));
  fn_823CDF08(param_1,*param_2,param_2[1],param_5,param_4,param_3,param_6,0);
  fn_823D7F10(param_1,param_2);
  if (param_7 == 0) {
    iVar1 = param_2[1] * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
    iVar1 = param_2[1] * 0x84 + *(int *)(param_1 + 0x4bc);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
    fn_8236A6E8(param_1,8);
    fn_8236A360(param_1,8);
    iVar1 = *param_2;
    if (((*(int *)(param_1 + 0x41c) != 5) || (param_2[1] != *(int *)(param_1 + 0x420))) ||
       (iVar1 != *(int *)(param_1 + 0x420))) {
      *(int *)(param_1 + 0x420) = param_2[1];
      *(int *)(param_1 + 0x424) = iVar1;
      *(undefined4 *)(param_1 + 0x41c) = 5;
      *(undefined4 *)(param_1 + 0x428) = lbl_821CC160;
    }
    fn_823C4C00(param_1,param_2[1]);
    return;
  }
  if (param_7 != 2) {
    return;
  }
  fn_8236A6E8(param_1,8);
  fn_8236A360(param_1,8);
  fn_82369668(param_1,param_2[1],*param_2);
  return;
}

