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
extern unsigned int *auStack_40;
extern int fn_8301B7B8();
extern int fn_83032B08();
extern int fn_83032D88();
extern int fn_830339D8();
extern int fn_83033C70();
extern unsigned int iStack_30;
extern unsigned int lbl_832642F8;


undefined8 fn_83033DC8(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  int *piStack_38;
  int iStack_30;
  
  uVar3 = 1;
  fn_830339D8(auStack_40,*(undefined4 *)(param_2 + 0x78));
  iVar2 = fn_83033C70(param_1,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x10));
  if (iVar2 != 0) {
    fn_83032B08();
  }
  bVar1 = iStack_30 != 0;
  iStack_30 = iVar2;
  if (bVar1) {
    fn_83032D88();
  }
  if (iStack_30 != 0) {
    *(undefined1 **)(param_2 + 0x78) = auStack_40;
    uVar3 = (**(code **)(*param_1 + 0x154))(param_1,param_2);
    if ((int)uVar3 == 3) {
      uVar3 = 1;
    }
  }
  if (lbl_832642F8 != 0) {
    if (*piStack_38 != 0) {
      fn_8301B7B8(lbl_832642F8,*piStack_38);
    }
  }
  if (iStack_30 != 0) {
    fn_83032D88();
  }
  return uVar3;
}

