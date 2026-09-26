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
extern int fn_822315A0();
extern int fn_8263DE70();
extern int fn_8266C540();
extern int fn_8266C630();
extern int fn_8266D9F0();
extern int fn_8266F580();
extern int fn_8266F680();
extern int fn_8266F688();
extern int fn_8266F6A0();
extern int fn_8266F6B0();
extern int fn_82670438();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821AAD20;


void fn_8266DE00(int param_1,int param_2,int param_3,ulonglong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iStack_60;
  int iStack_5c;
  
  uVar1 = *(undefined4 *)(param_1 + 0xcc);
  if ((param_4 & 0xffffffff) != 0) {
    *(int *)(param_1 + 0xcc) = (int)param_4;
    (**(code **)(**(int **)(param_1 + 0x24) + 0xa8))(*(int **)(param_1 + 0x24),param_4);
  }
  bVar2 = false;
  fn_8266C540(param_1);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xd8);
  if (uVar7 != *(uint *)(param_1 + 0xdc)) {
    do {
      fn_8266D9F0(&iStack_60,uVar7);
      iVar3 = iStack_60;
      if ((((iStack_60 != 0) && (iVar4 = fn_8266F580(iStack_60), iVar4 != 0)) &&
          ((iVar4 = fn_8266F688(iVar3), param_2 == 0 ||
           (iVar5 = fn_8266F680(iVar3), iVar5 != 0)))) &&
         (((iVar4 == 0 || (iVar4 == param_3)) || (param_3 == 0)))) {
        iVar4 = fn_8266F6A0(iVar3);
        if ((iVar4 == 0) &&
           (uVar6 = fn_8266F6B0(iVar3), (uVar6 & *(uint *)(param_1 + 0x1d8)) == 0)) {
          bVar2 = true;
          fn_82670438(iVar3,*(undefined4 *)(param_1 + 0xcc));
        }
      }
      if (iStack_5c != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 0xc;
    } while ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0xdc));
    if (bVar2) {
      fn_8263DE70((double)lbl_821AAD20,*(undefined4 *)(param_1 + 0xcc),0,0,0x3f,0,param_6,0,0)
      ;
    }
  }
  fn_8266C630(param_1);
  if ((param_4 & 0xffffffff) != 0) {
    *(undefined4 *)(param_1 + 0xcc) = uVar1;
    (**(code **)(**(int **)(param_1 + 0x24) + 0xa8))(*(int **)(param_1 + 0x24),uVar1);
  }
  return;
}

