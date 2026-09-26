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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_825200F0();
extern int fn_827D96A0();
extern int fn_827DDDD8();
extern int fn_827DDFB8();
extern int fn_82A1E650();


undefined8 fn_825BDF38(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  fn_82A1E650(*(undefined4 *)(param_1 + 0x1d8),0xffffffffffffffff);
  iVar1 = *(int *)(param_1 + 0x8c);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x14) != 0) {
    lVar3 = 0;
    do {
      fn_825200F0(auStack_50,(ulonglong)*(uint *)(iVar1 + 0x10) + lVar3);
      iVar1 = (**(code **)(*param_2 + 4))(param_2,auStack_50);
      if (iVar1 != 0) {
        auStack_60[0] = fn_827D96A0(auStack_50);
        iVar1 = fn_827DDDD8(param_3,auStack_60);
        if (iVar1 == 0) {
          fn_827DDFB8(param_3,auStack_50);
        }
      }
      iVar1 = *(int *)(param_1 + 0x8c);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < *(uint *)(iVar1 + 0x14));
  }
  return 0;
}

