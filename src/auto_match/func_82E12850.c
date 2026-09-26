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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00310();
extern int fn_82D00388();
extern int fn_82DB9F80();
extern int fn_82E12688();
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82E12850(undefined8 param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  
  fn_82D00388(param_1,0);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x80000000;
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
    if (*(int *)(param_2 + 4) != 0) {
      iVar3 = fn_82CE5410();
      fn_82DB9F80(&uStack_58,*(undefined4 *)(iVar3 + 0xc),0,0,param_2 + 4,1);
    }
  }
  iVar3 = 0;
  if (0 < param_3[1]) {
    iVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(iVar5 + *param_3 + 4);
      uVar2 = fn_82CEAC20(uVar1);
      iVar4 = fn_82D00310(param_1,uVar2,&uStack_5c);
      if (iVar4 == 0) {
        uVar6 = (ulonglong)uStack_5c;
      }
      else {
        uVar6 = fn_82E12688(param_1,&uStack_58,uVar1);
        uVar2 = fn_82CEAC20(uVar1);
        fn_82D000A0(param_1,uVar2,uVar6);
      }
      if ((uVar6 & 0xffffffff) != 0) {
        iVar4 = fn_82CE5410();
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar4 + 0xc),param_4,4);
        }
        *(int *)(param_4[1] * 4 + *param_4) = iVar3;
        param_4[1] = param_4[1] + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar3 < param_3[1]);
  }
  iVar3 = fn_82CE5410();
  uStack_54 = 0;
  if ((uStack_50 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),uStack_58,uStack_50 & 0x3fffffff,4);
  }
  return param_1;
}

