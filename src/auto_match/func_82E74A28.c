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
extern unsigned int *auStack_38;
extern int fn_82E730F8();
extern int fn_82E74598();
extern int fn_82E74818();


undefined8 fn_82E74A28(int param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_40 [2];
  ulonglong auStack_38 [7];
  
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        aiStack_40[0] = *param_2;
        auStack_38[0] = *(ulonglong *)(aiStack_40[0] + 0x18);
        if (*(ulonglong *)(param_1 + 0x1d0) < auStack_38[0]) {
          *(ulonglong *)(param_1 + 0x1d0) = auStack_38[0];
        }
        iVar2 = fn_82E74598(param_1 + 0x10,auStack_38,aiStack_40);
        if (iVar2 == 0) {
          return 0xffffffff8000ffff;
        }
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 1;
      } while (uVar3 < param_3);
    }
    uVar1 = fn_82E730F8(param_1);
    uVar1 = fn_82E74818(param_1,uVar1,0);
  }
  return uVar1;
}

