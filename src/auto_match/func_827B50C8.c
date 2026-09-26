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
extern int fn_827B4FF0();
extern int fn_82F68CC0();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_827B50C8(int param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int aiStack_70 [2];
  int iStack_68;
  int iStack_64;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_44;
  
  lVar2 = (ulonglong)
          *(uint *)(((uint)((param_2 & 0xffffffff) >> 6) & 0x3fffffc) + *(int *)(param_1 + 0x50)) +
          (param_2 & 0xff) * 0x1c;
  fn_82F68CC0(aiStack_70,lVar2,0x1c);
  fn_82F68CC0(auStack_50,lVar2,0x1c);
  iStack_64 = param_3[1];
  aiStack_70[0] = *param_3 + aiStack_70[0];
  iStack_68 = iStack_68 - *param_3;
  iStack_4c = iStack_64 + iStack_4c;
  iStack_44 = iStack_44 - iStack_64;
  fn_827B4FF0(param_1 + 0x44,aiStack_70);
  fn_827B4FF0(param_1 + 0x44,auStack_50);
  iVar1 = (int)lVar2;
  *(int *)(iVar1 + 8) = *param_3;
  *(int *)(iVar1 + 0xc) = param_3[1];
  *(int *)(iVar1 + 0x10) = param_3[2];
  *(int *)(iVar1 + 0x14) = *(int *)(param_1 + 0x44) + -2;
  *(int *)(iVar1 + 0x18) = *(int *)(param_1 + 0x44) + -1;
  return;
}

