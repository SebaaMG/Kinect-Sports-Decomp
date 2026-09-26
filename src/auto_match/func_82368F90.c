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
extern int fn_8252CB48();
extern int fn_82539560();
extern int fn_8256EA58();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_82192A78;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82368F90(undefined8 param_1,int param_2,undefined8 param_3,int param_4,uint param_5,
                  int param_6)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (param_6 == 0) {
    uVar3 = param_5;
  }
  iVar2 = (param_4 + 0xb2) * 4;
  fn_8252CB48(*(undefined4 *)(iVar2 + param_2),param_3,0,uVar3 & 0xff);
  uVar3 = 2;
  if (param_6 == 0) {
    uVar3 = param_5;
  }
  fn_8252CB48(*(undefined4 *)(iVar2 + param_2),param_3,1,uVar3 & 0xff);
  fn_8252CB48(*(undefined4 *)(iVar2 + param_2),param_3,2,param_6 == 0);
  if (*(int *)(param_2 + 0x34c) != 0) {
    fVar1 = lbl_821CC160;
    if ((param_6 == 0) && (fVar1 = lbl_821CA460, param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82539560(param_1,(double)lbl_82192A78,(double)lbl_821916FC,(double)lbl_821917C0,
                   (double)lbl_821CA460);
    }
    fn_8256EA58((double)fVar1,*(int *)(param_2 + 0x34c),
                    *(undefined4 *)((param_4 + 0x44) * 0xc + param_2));
    iVar2 = param_4 * 0xc + param_2;
    fn_8256EA58(*(undefined4 *)(param_2 + 0x34c),*(undefined4 *)(iVar2 + 0x334));
    fn_8256EA58(*(undefined4 *)(param_2 + 0x34c),*(undefined4 *)(iVar2 + 0x338));
  }
  return;
}

