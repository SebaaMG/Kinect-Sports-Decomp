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
extern unsigned int iStack_30;


void fn_828C99A0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iStack_30;
  int aiStack_2c [11];
  
  iStack_30 = param_3;
  fn_828C9918(aiStack_2c,param_1 + 8,&iStack_30);
  iVar1 = aiStack_2c[0];
  if (aiStack_2c[0] != *(int *)(param_1 + 0xc)) {
    iVar2 = aiStack_2c[0] + 0x18;
    aiStack_2c[0] = param_2;
    fn_8288E040(&iStack_30,iVar2,aiStack_2c);
    if ((param_4 != '\0') && (*(longlong *)(iStack_30 + 0x18) == *(longlong *)(iVar1 + 0x38))) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
    }
    *(undefined8 *)(iStack_30 + 0x18) = 1;
  }
  return;
}

