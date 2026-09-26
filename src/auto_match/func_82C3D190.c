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
extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C3CD98();
extern int fn_82C49BB0();


void fn_82C3D190(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int aiStack_30 [12];
  
  aiStack_30[0] = param_1[8];
  uVar1 = fn_82C49BB0(*(undefined4 *)(aiStack_30[0] + 0x44));
  if (*(int *)(aiStack_30[0] + 0x54) != 0) {
    fn_82C10B28(*(undefined4 *)(aiStack_30[0] + 0x1084),0x19,aiStack_30[0] + 0x54);
  }
  *(undefined4 *)(aiStack_30[0] + 0x54) = 0;
  fn_82C106C8(*(undefined4 *)(aiStack_30[0] + 0x1084),*(undefined4 *)(aiStack_30[0] + 0x1088));
  if (aiStack_30[0] != 0) {
    fn_82C10B28(*(undefined4 *)(aiStack_30[0] + 0x1084),0x19,aiStack_30);
  }
  iVar2 = fn_82C3CD98(uVar1);
  if (-1 < iVar2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  return;
}

