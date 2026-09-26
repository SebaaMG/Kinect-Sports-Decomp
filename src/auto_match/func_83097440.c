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
extern int fn_82D9A040();
extern int fn_82DBA1E0();
extern unsigned int lbl_82187AF8;


undefined4 * fn_83097440(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_60 [4];
  undefined1 auStack_50 [80];
  
  param_1[2] = param_2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82187AF8;
  if (param_3 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(*(int *)param_1[2] + iVar4);
        if (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar1 + 0x20)) {
          if (*(char *)(iVar1 + 0x18) == '\x01') {
            aiStack_60[0] = *(int *)(*(int *)param_1[2] + iVar4);
            aiStack_60[0] = *(char *)(aiStack_60[0] + 0x10) + aiStack_60[0];
            fn_82DBA1E0(*(undefined4 *)(param_3 + 0x78),aiStack_60,1);
          }
          else {
            iVar3 = *(char *)(iVar1 + 0x10) + iVar1;
            (**(code **)(*(int *)(*(char *)(iVar1 + 0x10) + iVar1) + 0x18))(iVar3,auStack_50);
            fn_82D9A040(iVar3,auStack_50);
          }
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar2 < *(int *)(param_1[2] + 4));
    }
  }
  return param_1;
}

