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
extern int fn_8288E040();
extern int fn_828C9918();
extern int fn_82F63108();
extern unsigned int iStack_30;


undefined8 fn_828C9758(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iStack_30;
  int aiStack_2c [11];
  
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    cVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 4))
                      (*(int **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x10),param_3);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  iStack_30 = param_3;
  fn_828C9918(aiStack_2c,param_1 + 8,&iStack_30);
  iVar1 = aiStack_2c[0];
  if ((aiStack_2c[0] != *(int *)(param_1 + 0xc)) &&
     (iVar3 = aiStack_2c[0] + 0x18, aiStack_2c[0] = param_2,
     fn_8288E040(&iStack_30,iVar3,aiStack_2c), iStack_30 != *(int *)(iVar1 + 0x1c))) {
    if (*(ulonglong *)(iVar1 + 0x38) < *(ulonglong *)(iStack_30 + 0x18)) {
      return 1;
    }
    if ((*(ulonglong *)(iStack_30 + 0x18) == *(ulonglong *)(iVar1 + 0x38)) &&
       (*(int *)(iVar1 + 0x40) != 0)) {
      return 1;
    }
  }
  return 0;
}

