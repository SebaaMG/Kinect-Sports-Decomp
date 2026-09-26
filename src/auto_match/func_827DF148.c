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
extern int fn_827D96A0();
extern int fn_827D9780();
extern int fn_827E0658();
extern int fn_827E2598();
extern int fn_827E25A8();
extern unsigned int uStack_30;


undefined4 fn_827DF148(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uStack_30;
  int aiStack_2c [11];
  
  uStack_30 = fn_827D96A0(param_2);
  fn_827E0658(aiStack_2c,param_1,&uStack_30);
  if (aiStack_2c[0] != *(int *)(param_1 + 4)) {
    uVar1 = *(undefined4 *)(aiStack_2c[0] + 0xc);
    uVar2 = fn_827E2598(uVar1);
    iVar3 = fn_827D9780(uVar2,param_2);
    if (iVar3 == 0) {
      if (param_3 == -1) {
        return uVar1;
      }
      iVar3 = fn_827E25A8(uVar1);
      if (param_3 == iVar3) {
        return uVar1;
      }
    }
  }
  return 0;
}

