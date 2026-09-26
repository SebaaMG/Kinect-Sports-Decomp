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
extern int fn_82D9AB30();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;


undefined8 fn_82DA00E0(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar2 = 0;
  uVar1 = *param_1;
  while (0x16 < uVar1) {
    uVar2 = param_1[9];
    param_1 = *(ushort **)(param_1 + 10);
    uVar1 = *param_1;
  }
  if ((*param_1 != 0x16) && (*param_1 != 1)) {
    fn_82D9AB30(param_1,uVar2,auStack_30);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iStack_24;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - iStack_28;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) - iStack_2c;
  }
  return 0;
}

