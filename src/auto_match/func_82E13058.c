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
extern int fn_82CEAC20();
extern int fn_82CEAC28();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFD5A8();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();


undefined8
fn_82E13058(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  char acStack_40 [64];
  
  uVar1 = fn_82CEAC20(param_2);
  uVar1 = fn_82D001D8(param_3,uVar1);
  fn_82D002F0(acStack_40,param_3,uVar1);
  if (acStack_40[0] == '\0') {
    iVar2 = (*param_4)(param_1,param_2,param_5);
    if (iVar2 == 1) {
      return 1;
    }
    uVar1 = fn_82CEAC20(param_2);
    fn_82D000A0(param_3,uVar1,1);
    iVar2 = fn_82CEAC28(param_2);
    if (iVar2 != 0) {
      uVar1 = fn_82CEAC28(param_2);
      iVar2 = fn_82E13058(param_1,uVar1,param_3,param_4,param_5);
      if (iVar2 == 1) {
        return 1;
      }
    }
    lVar3 = 0;
    iVar2 = fn_82CEAF18(param_2);
    if (0 < iVar2) {
      do {
        iVar2 = fn_82CEAF20(param_2,lVar3);
        if (*(int *)(iVar2 + 4) != 0) {
          uVar1 = fn_82CFD5A8();
          iVar2 = fn_82E13058(param_1,uVar1,param_3,param_4,param_5);
          if (iVar2 == 1) {
            return 1;
          }
        }
        lVar3 = lVar3 + 1;
        iVar2 = fn_82CEAF18(param_2);
      } while ((int)lVar3 < iVar2);
    }
  }
  return 0;
}

