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
extern int fn_82A9FA30();
extern int fn_82C4DE40();
extern int fn_82C7CA40();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82C4E0F8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  puVar2 = (undefined4 *)(param_1 + 0x18);
  fn_82A9FA30(*(undefined4 *)(param_1 + 0x2c),0,aiStack_28,4,&iStack_30,puVar2);
  if ((*(int *)(*(int *)(param_1 + 0x28) + 0x3cb0) == 7) && (*(int *)(param_1 + 0x20) != 0)) {
    iStack_2c = aiStack_28[0];
    iVar1 = fn_82C7CA40(*(int *)(param_1 + 0x28),aiStack_28[0],iStack_30,&iStack_2c,&iStack_30
                              ,*puVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_82C4DE40(param_1,iStack_2c,&iStack_30,*puVar2);
    }
  }
  else {
    *(int *)(param_1 + 0xc) = aiStack_28[0];
    *(int *)(param_1 + 0x10) = aiStack_28[0] + iStack_30 + -1;
  }
  return;
}

