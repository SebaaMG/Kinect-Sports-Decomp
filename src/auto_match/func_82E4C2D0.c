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
extern char cRam831882f8;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82E83330();
extern int fn_82E83530();
extern int fn_82E85018();
extern int fn_82E9A2B0();
extern int fn_82E9A7B8();
extern int fn_82E9A868();
extern int fn_82F68CC0();
extern unsigned int lbl_8323FF50;
extern unsigned int uStack_50;


undefined8 fn_82E4C2D0(int param_1,int param_2,uint *param_3)

{
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  int iVar4;
  uint uStack_50;
  int aiStack_4c [19];
  
  iVar4 = 0;
  iVar2 = fn_82E83530(*(undefined4 *)(param_1 + 0xc));
  uVar1 = fn_8265C940((ulonglong)*(uint *)(param_1 + 0x58) +
                            (ulonglong)*(uint *)(param_1 + 0x50),0x248c8000);
  if ((uVar1 & 0xffffffff) == 0) {
    return 0xffffffffffffff9c;
  }
  uStack_50 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((cRam831882f8 == '\0') || (lbl_8323FF50 < 1)) {
      if (iVar2 == 0) goto LAB_82e4c3f8;
    }
    else {
      fn_82E9A7B8(param_1,uVar1,&uStack_50,*(undefined4 *)(param_1 + 0x50),
                        *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x30),
                        *(undefined4 *)(param_1 + 0x40));
    }
    iVar2 = fn_82E9A868(param_1,*(undefined4 *)(param_1 + 0x48),aiStack_4c,
                              *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x40));
    if (iVar2 != 0) goto LAB_82e4c470;
    iVar4 = 1;
    fn_82F68CC0(uStack_50 + uVar1,*(undefined4 *)(param_1 + 0x48),aiStack_4c[0]);
    uStack_50 = aiStack_4c[0] + uStack_50;
  }
  else if (iVar2 != 0) {
    iVar2 = fn_82E9A868(param_1,uVar1,&uStack_50,*(undefined4 *)(param_1 + 0x58),
                              *(undefined4 *)(param_1 + 0x40));
    if (iVar2 != 0) goto LAB_82e4c470;
    iVar4 = 1;
  }
LAB_82e4c3f8:
  iVar2 = fn_82E85018(*(undefined4 *)(param_1 + 0xc));
  if ((iVar2 == 5) ||
     ((((*(int *)(param_1 + 0x44) == 0 && (*(int *)(param_1 + 0x40) == 0)) &&
       (*(int *)(param_1 + 0x218) == 0)) && (iVar4 == 0)))) {
    iVar2 = fn_82E83330(*(undefined4 *)(param_1 + 0xc));
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x10) == 0x574d5641)) &&
       (*(int *)(param_1 + 0x14) == 1)) {
      uVar3 = fn_8265C940((ulonglong)*param_3 + 4,0x248c8000);
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xae8);
      iVar4 = iVar2 + param_2;
      fn_82F68CC0(uVar3,iVar4,*param_3 - iVar2);
      *(undefined1 *)(iVar2 + param_2) = 0;
      *(undefined1 *)(iVar4 + 1) = 0;
      *(undefined1 *)(iVar4 + 2) = 1;
      *(undefined1 *)(iVar4 + 3) = 0xc;
      fn_82F68CC0(iVar4 + 4,uVar3,*param_3 - iVar2);
      *param_3 = *param_3 + 4;
      if ((uVar3 & 0xffffffff) != 0) {
        fn_8265C990(uVar3,0x248c8000);
      }
    }
  }
  else {
    uVar3 = (longlong)*(int *)(param_1 + 0x20) * (longlong)*(int *)(param_1 + 0x1c);
    iVar2 = fn_82E9A2B0(param_1,param_2,param_3,uVar3 + (uVar3 & 0x7fffffff) * 2,iVar4,uVar1,
                              uStack_50,*(undefined4 *)(param_1 + 0x40));
    if (iVar2 != 0) {
LAB_82e4c470:
      fn_8265C990(uVar1,0x248c8000);
      return 0xffffffffffffff9c;
    }
  }
  fn_8265C990(uVar1,0x248c8000);
  return 0;
}

