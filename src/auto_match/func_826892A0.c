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
extern int fn_8267B890();
extern int fn_82689100();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_826892A0(int param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = param_2[2];
  iVar6 = param_2[3];
  uVar7 = fn_8267B890(param_3,0x20,0);
  if ((uVar7 & 0xffffffff) == 0) {
    uVar8 = 0;
  }
  else {
    iStack_40 = iVar3 + iVar1;
    iStack_3c = iVar4 + iVar2;
    iStack_38 = iVar5;
    iStack_34 = iVar6;
    uVar8 = fn_82689100(uVar7,param_1,&iStack_40);
  }
  return uVar8;
}

