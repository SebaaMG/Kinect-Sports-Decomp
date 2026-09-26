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
extern unsigned int *auStack_30;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82D80C48();
extern int fn_82D91178();
extern int fn_82D913E0();
extern int fn_82D9A330();
extern int fn_82DADCE0();
extern unsigned int iStack_2c;
extern unsigned int uStack_28;


undefined8 fn_82D99CD0(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x94) != 0) {
      auStack_30[0] = 5;
      iStack_2c = param_1;
      uStack_28 = (int)param_2;
      fn_82D80C48(iVar1,auStack_30);
      return 0;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x94) = *(int *)(iVar1 + 0x94) + 1;
      fn_82D913E0(*(undefined4 *)(param_1 + 8),param_1);
    }
  }
  fn_82CE4040(param_2);
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82CE4118();
  }
  *(int *)(param_1 + 0x10) = (int)param_2;
  if (*(int *)(param_1 + 8) != 0) {
    fn_82DADCE0(*(int *)(param_1 + 8),param_1);
  }
  fn_82D9A330(param_1);
  if (*(int *)(param_1 + 8) != 0) {
    fn_82D91178(*(int *)(param_1 + 8),param_1);
    iVar1 = *(int *)(param_1 + 8);
    lVar2 = (ulonglong)*(uint *)(iVar1 + 0x94) - 1;
    *(int *)(iVar1 + 0x94) = (int)lVar2;
    if ((lVar2 == 0) && (*(char *)(iVar1 + 0x9c) == '\0')) {
      if (*(int *)(iVar1 + 0x8c) != 0) {
        fn_82D80C18(iVar1);
      }
      if ((*(int *)(iVar1 + 0xa4) == 1) && (*(int *)(iVar1 + 0x90) != 0)) {
        fn_82D80C30(iVar1);
      }
    }
  }
  return 1;
}

